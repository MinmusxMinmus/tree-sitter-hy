#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include <stdint.h>
#include <sys/types.h>

enum TokenType {
  BSID,
  BSC,
  BSEID,
  BFSID,
  BFSC,
  BFSEID,
  ERR
};

typedef struct _ParseResult {
  bool success;
  enum TokenType token;
} ParseResult;

typedef Array(int32_t) String;

// Instead of storing full identifiers, we store their hashes
typedef struct {
  uint64_t hash;
  bool is_fstring;
} IdentifierHash;

typedef Array(IdentifierHash) IdentifierHashes;

static inline bool in_bstr(IdentifierHashes *hashes) {
  return hashes->size > 0;
}

static inline bool is_bfs(String *str) {
  return (str->size == 1 && *array_front(str) == 'f') || (str->size >= 2 && *array_get(str, 1) == '-');
}

// Simple FNV-1a hash function for strings
static inline uint64_t hash_string(String *str) {
  uint64_t hash = 14695981039346656037ULL; // FNV offset basis
  for (uint32_t i = 0; i < str->size; i++) {
    hash ^= (uint64_t)*array_get(str, i);
    hash *= 1099511628211ULL; // FNV prime
  }
  return hash;
}

static inline void clear_hashes(IdentifierHashes *hashes) {
  array_clear(hashes);
}

static ParseResult parse_identifier(TSLexer *lexer, IdentifierHashes *hashes) {
  lexer->log(lexer, "Attempting to parse bracket string/f-string identifier");
  String str = array_new();
  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while parsing bracket string/f-string identifier");
      lexer->mark_end(lexer);
      array_delete(&str);
      return (ParseResult){ true, ERR };
    }
    if (lexer->lookahead == '[') {
      lexer->log(lexer, "Parsed bracket string/f-string identifier of length %d", str.size);
      lexer->mark_end(lexer);
      
      bool is_fstr = is_bfs(&str);
      uint64_t hash = hash_string(&str);
      IdentifierHash id_hash = { hash, is_fstr };
      array_push(hashes, id_hash);
      
      array_delete(&str);
      return is_fstr ? (ParseResult){ true, BFSID } : (ParseResult){ true, BSID };
    }
    array_push(&str, lexer->lookahead);
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_ending_identifier(TSLexer *lexer, IdentifierHashes *hashes) {
  // If we aren't in a bracket string, something has gone terribly
  // wrong.
  if (!in_bstr(hashes)) {
    lexer->log(lexer, "Attempted to parse bracket string/f-string ending identifier while not inside a bracket string");
    return (ParseResult){ true, ERR };
  }
  lexer->log(lexer, "Attempting to parse bracket string/f-string ending identifier");

  String str = array_new();
  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while parsing bracket string/f-string ending identifier");
      lexer->mark_end(lexer);
      array_delete(&str);
      return (ParseResult){ true, ERR };
    }

    // Check if we've reached the closing bracket
    if (lexer->lookahead == ']') {
      lexer->log(lexer, "Found closing bracket, verifying identifier hash");
      
      // Compute hash of the parsed identifier
      uint64_t parsed_hash = hash_string(&str);
      IdentifierHash *expected = array_back(hashes);
      
      if (parsed_hash == expected->hash) {
        lexer->log(lexer, "Successfully parsed bracket string/f-string ending identifier");
        array_delete(&str);
        return expected->is_fstring ? (ParseResult){ true, BFSEID } : (ParseResult){ true, BSEID };
      } else {
        lexer->log(lexer, "Hash mismatch: expected %llu, got %llu", expected->hash, parsed_hash);
        array_delete(&str);
        return (ParseResult){ false, ERR };
      }
    }
    
    array_push(&str, lexer->lookahead);
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_contents(TSLexer *lexer, IdentifierHashes *hashes) {
  lexer->log(lexer, "Attempting to parse bracket string contents");
  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while reading bracket string contents");
      lexer->mark_end(lexer);
      return (ParseResult){ true, ERR };
    }
    // Potential bracket string end.
    if (lexer->lookahead == ']') {
      lexer->log(lexer, "Found potential bracket string end, verifying");
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      ParseResult match = parse_ending_identifier(lexer, hashes);
      // It was in fact the bracket string end (or an error token).
      if (match.success) {
        lexer->log(lexer, "Found bracket string end, wrapping up contents");
        return (ParseResult){ true, BSC };
      }
      // It was not in fact the bracket string end, continue parsing.
      lexer->log(lexer, "Not the bracket string end, continuing");
      continue;
    }
    // Continue parsing until we find a potential end.
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_fstring_contents(TSLexer *lexer, IdentifierHashes *hashes) {
  lexer->log(lexer, "Attempting to parse bracket f-string contents");
  bool empty = true;
  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while parsing bracket f-string contents");
      lexer->mark_end(lexer);
      return (ParseResult){ !empty, ERR };
    }
    // Potential bracket string end.
    if (lexer->lookahead == ']') {
      lexer->log(lexer, "Found potential bracket f-string end, verifying");
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      ParseResult match = parse_ending_identifier(lexer, hashes);
      // It was in fact the bracket string end (or an error token).
      if (match.success) {
        lexer->log(lexer, "Found bracket f-string end, wrapping up contents");
        return (ParseResult){ !empty, BFSC };
      }
      // It was not in fact the bracket string end, continue parsing.
      lexer->log(lexer, "Not the bracket f-string end, continuing");
      empty = false;
      continue;
    }

    // Potential formatting.
    if (lexer->lookahead == '{') {
      lexer->log(lexer, "Found potential formatting, verifying");
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      // It was not in fact formatting.
      if (lexer->lookahead == '{') {
        lexer->advance(lexer, false);
        empty = false;
        continue;
      }
      // It was in fact formatting.
      lexer->log(lexer, "Found formatting, wrapping up f-string contents");
      return (ParseResult){ !empty, BFSC };
    }

    // Potential illegal formatting.
    if (lexer->lookahead == '}') {
      lexer->log(lexer, "Found potential illegal formatting, verifying");
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      // It was not in fact illegal formatting.
      if (lexer->lookahead == '}') {
        lexer->advance(lexer, false);
        empty = false;
        continue;
      }
      // It was in fact illegal formatting.
      lexer->log(lexer, "Found illegal formatting, wrapping up contents");
      return (ParseResult){ !empty, ERR };
    }

    // Continue parsing until we find a potential end.
    lexer->log(lexer, "'%c' is not a special character, advancing", lexer->lookahead);
    lexer->advance(lexer, false);
    empty = false;
  }
}

void *tree_sitter_hy_external_scanner_create(void) {
  IdentifierHashes *hashes = (IdentifierHashes *)ts_calloc(1, sizeof(IdentifierHashes));
  array_init(hashes);
  return hashes;
}

void tree_sitter_hy_external_scanner_destroy(void *payload) {
  IdentifierHashes *hashes = (IdentifierHashes *)payload;
  clear_hashes(hashes);
  ts_free(hashes);
}

/**
 * Serialize the scanner state into a buffer.
 *
 * With hash-based storage, serialization is much more efficient:
 * - Each identifier hash is only 9 bytes (8 bytes for hash + 1 byte for is_fstring flag)
 * - The 1024-byte buffer can store ~113 nested bracket strings
 * - This is far more than needed in practice
 */
unsigned tree_sitter_hy_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  IdentifierHashes *hashes = (IdentifierHashes *)payload;
  uint32_t size = 0;
  
  // Tree-sitter typically provides a 1024-byte buffer for serialization
  const uint32_t max_size = 1024;
  
  // Check if we have enough space for the hash count
  if (size + sizeof(uint32_t) > max_size) {
    return 0;
  }
  
  *(uint32_t *)(&buffer[size]) = hashes->size;
  size += sizeof(uint32_t);

  for (uint32_t i = 0; i < hashes->size; i++) {
    IdentifierHash *id_hash = array_get(hashes, i);
    
    // Check if we have enough space for this hash entry (8 bytes hash + 1 byte flag)
    if (size + sizeof(uint64_t) + sizeof(uint8_t) > max_size) {
      // Truncate: write how many hashes we actually serialized
      *(uint32_t *)(&buffer[0]) = i;
      return size;
    }
    
    *(uint64_t *)(&buffer[size]) = id_hash->hash;
    size += sizeof(uint64_t);
    
    *(uint8_t *)(&buffer[size]) = id_hash->is_fstring ? 1 : 0;
    size += sizeof(uint8_t);
  }

  return size;
}

void tree_sitter_hy_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  if (length == 0) {
    return;
  }
  IdentifierHashes *hashes = (IdentifierHashes *)payload;
  clear_hashes(hashes);
  
  uint32_t offset = 0;
  
  if (offset + sizeof(uint32_t) > length) {
    return;
  }
  
  uint32_t count = *(uint32_t *)(&buffer[offset]);
  offset += sizeof(uint32_t);
  
  for (uint32_t i = 0; i < count; i++) {
    if (offset + sizeof(uint64_t) + sizeof(uint8_t) > length) {
      break;
    }
    
    IdentifierHash id_hash;
    id_hash.hash = *(uint64_t *)(&buffer[offset]);
    offset += sizeof(uint64_t);
    
    id_hash.is_fstring = *(uint8_t *)(&buffer[offset]) != 0;
    offset += sizeof(uint8_t);
    
    array_push(hashes, id_hash);
  }
}

bool tree_sitter_hy_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  IdentifierHashes *hashes = (IdentifierHashes *)payload;

  if (valid_symbols[BSID]) {
    lexer->log(lexer, "Expecting bracket string identifier");
  }

  if (valid_symbols[BSC]) {
    lexer->log(lexer, "Expecting bracket string contents");
  }

  if (valid_symbols[BSEID]) {
    lexer->log(lexer, "Expecting bracket string ending identifier");
  }

  if (valid_symbols[BFSID]) {
    lexer->log(lexer, "Expecting bracket f-string identifier");
  }

  if (valid_symbols[BFSC]) {
    lexer->log(lexer, "Expecting bracket f-string contents");
  }

  if (valid_symbols[BFSEID]) {
    lexer->log(lexer, "Expecting bracket f-string ending identifier");
  }

  // Short circuit if erroring
  if (valid_symbols[ERR]) {
    return false;
  }

  // We are at the beginning of a bracket string, waiting for the full
  // delimiter.
  if (valid_symbols[BSID] || valid_symbols[BFSID]) {
    // Store the current position.
    lexer->mark_end(lexer);
    // parse_identifier() should always return a token.  If it somehow
    // doesn't, treat it as an error.
    ParseResult match = parse_identifier(lexer, hashes);
    if (!match.success) {
      lexer->log(lexer, "This should never happen");
      match.token = ERR;
    }
    // Something was parsed, therefore we want the end to update.
    lexer->result_symbol = match.token;
    return true;
  }

  if (valid_symbols[BSC]) {
    // Store the current position.
    lexer->mark_end(lexer);
    ParseResult match = parse_contents(lexer, hashes);
    // parse_contents() can fail if there is nothing to parse.  We
    // don't consider that an error, because bracket string contents
    // can be empty.
    if (!match.success) {
      lexer->log(lexer, "Parsed empty bracket string contents, ignoring");
      return false;
    }
    // Something was parsed, therefore we want the end to update.
    lexer->result_symbol = match.token;
    return true;
  }

  if (valid_symbols[BFSC]) {
    // Store the current position.
    lexer->mark_end(lexer);
    ParseResult match = parse_fstring_contents(lexer, hashes);
    // parse_fstring_contents() can fail if there is nothing to parse.
    // We don't consider that an error, because bracket string
    // contents can be empty.
    if (!match.success) {
      lexer->log(lexer, "Parsed empty bracket f-string contents, ignoring");
      return false;
    }
    // Something was parsed, therefore we want the end to update.
    lexer->result_symbol = match.token;
    return true;
  }

  // We are at the end of a bracket string (because it wasn't any of
  // the others), attempting to match the full delimiter.
  if (valid_symbols[BSEID] || valid_symbols[BFSEID]) {
    // Store the current position.
    lexer->mark_end(lexer);
    ParseResult match = parse_ending_identifier(lexer, hashes);
    // parse_ending_identifier() can fail, meaning the ending
    // identifier doesn't correspond to the currently active bracket
    // string.
    if (!match.success) {
      lexer->log(lexer, "Bracket string/f-string was closed with the wrong identifier");
      lexer->mark_end(lexer);
      match.token = ERR;
    }
    if (match.token == BSEID || match.token == BFSEID) {
      array_pop(hashes);
    }
    // Something was parsed, therefore we want the end to update.
    lexer->result_symbol = match.token;
    lexer->mark_end(lexer);
    return true;
  }

  // ???
  lexer->log(lexer, "Scan function called without any expected symbols");
  return false;
}
