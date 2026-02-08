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

// MSB: BFS discriminator
// Remaining 63 bits: hash
typedef uint64_t Hash;
#define disc_offset ((sizeof(Hash) * 8) - 1)

static inline Hash make_hash(String *str) {
  if (str->size == 0) {
    return (Hash)0;
  }

  // Basic FNV, but making room for the BFS discriminator.
  // Change the constants if we ever change from 63 bit hashes.
  Hash prime = 1099511628211ULL;
  Hash hash = 14695981039346656037ULL;

  // Check if BFS discriminator should be set
  Hash is_bfs = (str->size > 0 && *array_front(str) == 'f' &&
                 (str->size == 1 || *array_get(str, 1) == '-'));

  for (size_t i = 0; i < str->size; i++) {
    int32_t ch = *array_get(str, i);

    hash ^= (uint8_t)ch;
    hash *= prime;

    hash ^= (uint8_t)(ch >> 8);
    hash *= prime;

    hash ^= (uint8_t)(ch >> 16);
    hash *= prime;

    hash ^= (uint8_t)(ch >> 24);
    hash *= prime;
  }
  return (Hash)((hash >> 1) | (is_bfs << disc_offset));
}

typedef Array(Hash) Identifiers;

static inline bool in_bstr(Identifiers *identifiers) {
  return identifiers->size > 0;
}

#define is_bfs(hash) (hash >> disc_offset)

static inline Hash *get_bs(Identifiers *identifiers) {
  return array_back(identifiers);
}

static inline void clear_identifiers(Identifiers *identifiers) {
  for (Hash str; identifiers->size > 0;) {
    str = array_pop(identifiers);
  }
  array_clear(identifiers);
}

static ParseResult parse_identifier(TSLexer *lexer, Identifiers *identifiers) {
  lexer->log(lexer, "Attempting to parse bracket string/f-string identifier");
  String str = array_new();
  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while parsing bracket string/f-string identifier");
      lexer->mark_end(lexer);
      return (ParseResult){ true, ERR };
    }
    if (lexer->lookahead == '[') {
      lexer->log(lexer, "Parsed bracket string/f-string identifier of length %d", str.size);
      lexer->mark_end(lexer);
      Hash identifier = make_hash(&str);
      array_push(identifiers, identifier);
      return is_bfs(identifier) ? (ParseResult){ true, BFSID }: (ParseResult){true, BSID};
    }
    array_push(&str, lexer->lookahead);
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_ending_identifier(TSLexer *lexer, Identifiers *identifiers) {
  // If we aren't in a bracket string, something has gone terribly
  // wrong.
  if (!in_bstr(identifiers)) {
    lexer->log(lexer, "Attempted to parse bracket string/f-string ending identifier while not inside a bracket string");
    return (ParseResult){ true, ERR };
  }
  lexer->log(lexer, "Attempting to parse bracket string/f-string ending identifier");

  String identifier = array_new();

  for (;;) {
    // EOF
    if (lexer->eof(lexer)) {
      lexer->log(lexer, "Reached EOF while parsing bracket string/f-string ending identifier");
      lexer->mark_end(lexer);
      return (ParseResult){ true, ERR };
    }

    // Read characters until the end is found.
    if (lexer->lookahead == ']') {
      lexer->log(lexer, "Successfully parsed bracket string/f-string ending identifier");
      Hash hash = make_hash(&identifier);
      Hash expected = *array_back(identifiers);
      if (hash == expected) {
        lexer->log(lexer, "Successfully matched bracket string/f-string identifiers");
        return is_bfs(hash) ? (ParseResult){ true, BFSEID } : (ParseResult){ true, BSEID };
      } else {
        lexer->log(lexer, "Bracket string/f-string identifier hashes do not match");
        return (ParseResult){ false, ERR };
      }
    }

    array_push(&identifier, lexer->lookahead);
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_contents(TSLexer *lexer, Identifiers *identifiers) {
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
      ParseResult match = parse_ending_identifier(lexer, identifiers);
      // It was in fact the bracket string end (or an error token).
      if (match.success) {
        lexer->log(lexer, "Found bracket string end, wrapping up contents");
        return (ParseResult){ true, BSC };
      }
      // It was not in fact the bracket string end.
      continue;
    }
    // Continue parsing until we find a potential end.
    lexer->advance(lexer, false);
  }
}

static ParseResult parse_fstring_contents(TSLexer *lexer, Identifiers *identifiers) {
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
      ParseResult match = parse_ending_identifier(lexer, identifiers);
      // It was in fact the bracket string end (or an error token).
      if (match.success) {
        lexer->log(lexer, "Found bracket f-string end, wrapping up contents");
        return (ParseResult){ !empty, BFSC };
      }
      // It was not in fact the bracket string end.
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
  Identifiers *ids = (Identifiers *)ts_calloc(1, sizeof(Identifiers));
  array_init(ids);
  return ids;
}

void tree_sitter_hy_external_scanner_destroy(void *payload) {
  Identifiers *ids = (Identifiers *)payload;
  clear_identifiers(ids);
  ts_free(ids);
}

unsigned tree_sitter_hy_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  Identifiers *ids = (Identifiers *)payload;
  uint32_t size = 0;
  uint32_t step = sizeof(Hash);
  *(uint32_t *)(&buffer[size]) = ids->size;
  size += sizeof(uint32_t);

  for (uint32_t i = 0; i < ids->size; i++) {
    *(Hash *)(&buffer[size]) = *array_get(ids, i);
    size += step;
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
  Identifiers *ids = (Identifiers *)payload;
  clear_identifiers(ids);
  uint32_t count = 0;
  uint32_t step = sizeof(Hash);
  uint32_t size = *(uint32_t *)(&buffer[count]);
  count += sizeof(uint32_t);

  for (uint32_t i = 0; i < size; i++) {
    array_push(ids, *(Hash *)(&buffer[count]));
    count += step;
  }
}

bool tree_sitter_hy_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Identifiers *ids = (Identifiers *)payload;

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
    ParseResult match = parse_identifier(lexer, ids);
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
    ParseResult match = parse_contents(lexer, ids);
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
    ParseResult match = parse_fstring_contents(lexer, ids);
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
    ParseResult match = parse_ending_identifier(lexer, ids);
    // parse_ending_identifier() can fail, meaning the ending
    // identifier doesn't correspond to the currently active bracket
    // string.
    if (!match.success) {
      lexer->log(lexer, "Bracket string/f-string was closed with the wrong identifier");
      lexer->mark_end(lexer);
      match.token = ERR;
    }
    if (match.token == BSEID || match.token == BFSEID) {
      array_pop(ids);
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
