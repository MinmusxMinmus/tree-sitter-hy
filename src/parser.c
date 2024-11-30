#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_symbol = 1,
  sym_shebang = 2,
  aux_sym_expression_token1 = 3,
  aux_sym_expression_token2 = 4,
  anon_sym_SQUOTE = 5,
  sym_comment = 6,
  aux_sym_list_token1 = 7,
  aux_sym_list_token2 = 8,
  aux_sym_set_token1 = 9,
  aux_sym_set_token2 = 10,
  aux_sym_dictionary_token1 = 11,
  sym_keyword = 12,
  sym_integer = 13,
  sym_float = 14,
  sym_imaginary_number = 15,
  sym_boolean = 16,
  sym_none = 17,
  aux_sym_string_token1 = 18,
  aux_sym_string_token2 = 19,
  aux_sym_fstring_token1 = 20,
  aux_sym_fstring_token2 = 21,
  aux_sym_fstring_token3 = 22,
  sym_source_file = 23,
  sym__item = 24,
  sym__form = 25,
  sym_expression = 26,
  sym_quoted_expression = 27,
  sym_list = 28,
  sym_set = 29,
  sym_dictionary = 30,
  sym_dictionary_item = 31,
  sym__keywords_with_values = 32,
  sym__literal = 33,
  sym__number = 34,
  sym__string = 35,
  sym_string = 36,
  sym_fstring = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_expression_repeat1 = 39,
  aux_sym_dictionary_repeat1 = 40,
  aux_sym_string_repeat1 = 41,
  aux_sym_fstring_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_shebang] = "shebang",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_expression_token2] = "expression_token2",
  [anon_sym_SQUOTE] = "'",
  [sym_comment] = "comment",
  [aux_sym_list_token1] = "list_token1",
  [aux_sym_list_token2] = "list_token2",
  [aux_sym_set_token1] = "set_token1",
  [aux_sym_set_token2] = "set_token2",
  [aux_sym_dictionary_token1] = "dictionary_token1",
  [sym_keyword] = "keyword",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_imaginary_number] = "imaginary_number",
  [sym_boolean] = "boolean",
  [sym_none] = "none",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_fstring_token1] = "fstring_token1",
  [aux_sym_fstring_token2] = "fstring_token2",
  [aux_sym_fstring_token3] = "fstring_token3",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym__form] = "_form",
  [sym_expression] = "expression",
  [sym_quoted_expression] = "quoted_expression",
  [sym_list] = "list",
  [sym_set] = "set",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_item] = "dictionary_item",
  [sym__keywords_with_values] = "_keywords_with_values",
  [sym__literal] = "_literal",
  [sym__number] = "_number",
  [sym__string] = "_string",
  [sym_string] = "string",
  [sym_fstring] = "fstring",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_fstring_repeat1] = "fstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [sym_shebang] = sym_shebang,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_expression_token2] = aux_sym_expression_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_comment] = sym_comment,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [aux_sym_list_token2] = aux_sym_list_token2,
  [aux_sym_set_token1] = aux_sym_set_token1,
  [aux_sym_set_token2] = aux_sym_set_token2,
  [aux_sym_dictionary_token1] = aux_sym_dictionary_token1,
  [sym_keyword] = sym_keyword,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_imaginary_number] = sym_imaginary_number,
  [sym_boolean] = sym_boolean,
  [sym_none] = sym_none,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_fstring_token1] = aux_sym_fstring_token1,
  [aux_sym_fstring_token2] = aux_sym_fstring_token2,
  [aux_sym_fstring_token3] = aux_sym_fstring_token3,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym__form] = sym__form,
  [sym_expression] = sym_expression,
  [sym_quoted_expression] = sym_quoted_expression,
  [sym_list] = sym_list,
  [sym_set] = sym_set,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_item] = sym_dictionary_item,
  [sym__keywords_with_values] = sym__keywords_with_values,
  [sym__literal] = sym__literal,
  [sym__number] = sym__number,
  [sym__string] = sym__string,
  [sym_string] = sym_string,
  [sym_fstring] = sym_fstring,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_fstring_repeat1] = aux_sym_fstring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fstring_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fstring_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fstring_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_item] = {
    .visible = true,
    .named = true,
  },
  [sym__keywords_with_values] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_fstring] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fstring_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 7,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 14,
  [21] = 16,
  [22] = 15,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 36,
  [56] = 27,
  [57] = 26,
  [58] = 31,
  [59] = 28,
  [60] = 29,
  [61] = 30,
  [62] = 32,
  [63] = 37,
  [64] = 33,
  [65] = 34,
  [66] = 38,
  [67] = 67,
  [68] = 35,
};

static TSCharacterRange sym_symbol_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', '_'},
  {'a', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 46,
        '#', 1,
        '\'', 14,
        '(', 12,
        ')', 13,
        '.', 41,
        '0', 23,
        ':', 45,
        ';', 15,
        'F', 30,
        'T', 33,
        '[', 16,
        ']', 17,
        'f', 21,
        '{', 20,
        '}', 19,
        '+', 22,
        '-', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '{') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '~') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 46,
        '#', 6,
        '\'', 14,
        '(', 12,
        ')', 13,
        '.', 41,
        '0', 23,
        ':', 45,
        ';', 15,
        'F', 30,
        'T', 33,
        '[', 16,
        ']', 17,
        'f', 21,
        '{', 20,
        '}', 19,
        '+', 22,
        '-', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(44);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_list_token2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_set_token2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(50);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '0') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '.', 37,
        '_', 40,
        'B', 26,
        'b', 26,
        'E', 36,
        'e', 36,
        'J', 44,
        'j', 44,
        'O', 27,
        'o', 27,
        'X', 28,
        'x', 28,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(26);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(44);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(34);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(26);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(sym_symbol_character_set_2, 11, lookahead))) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_fstring_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      if (lookahead == '\\') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_fstring_token3);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'N') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_expression_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_list_token1] = ACTIONS(1),
    [aux_sym_list_token2] = ACTIONS(1),
    [aux_sym_set_token1] = ACTIONS(1),
    [aux_sym_set_token2] = ACTIONS(1),
    [aux_sym_dictionary_token1] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_imaginary_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_fstring_token1] = ACTIONS(1),
    [aux_sym_fstring_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__item] = STATE(4),
    [sym__form] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_quoted_expression] = STATE(4),
    [sym_list] = STATE(4),
    [sym_set] = STATE(4),
    [sym_dictionary] = STATE(4),
    [sym__keywords_with_values] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__number] = STATE(4),
    [sym__string] = STATE(4),
    [sym_string] = STATE(4),
    [sym_fstring] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(5),
    [sym_integer] = ACTIONS(5),
    [sym_float] = ACTIONS(5),
    [sym_imaginary_number] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [2] = {
    [sym__item] = STATE(3),
    [sym__form] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_quoted_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dictionary] = STATE(3),
    [sym__keywords_with_values] = STATE(3),
    [sym__literal] = STATE(3),
    [sym__number] = STATE(3),
    [sym__string] = STATE(3),
    [sym_string] = STATE(3),
    [sym_fstring] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_symbol] = ACTIONS(27),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(29),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_imaginary_number] = ACTIONS(27),
    [sym_boolean] = ACTIONS(27),
    [sym_none] = ACTIONS(27),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [3] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym__string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_fstring] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(35),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(33),
    [sym_imaginary_number] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_none] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [4] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym__string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_fstring] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_symbol] = ACTIONS(33),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(35),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(33),
    [sym_imaginary_number] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_none] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [5] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym__string] = STATE(5),
    [sym_string] = STATE(5),
    [sym_fstring] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_symbol] = ACTIONS(39),
    [aux_sym_expression_token1] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_comment] = ACTIONS(48),
    [aux_sym_list_token1] = ACTIONS(51),
    [aux_sym_set_token1] = ACTIONS(54),
    [aux_sym_dictionary_token1] = ACTIONS(57),
    [sym_keyword] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_imaginary_number] = ACTIONS(39),
    [sym_boolean] = ACTIONS(39),
    [sym_none] = ACTIONS(39),
    [aux_sym_string_token1] = ACTIONS(60),
    [aux_sym_fstring_token1] = ACTIONS(63),
  },
  [6] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(66),
    [aux_sym_expression_token1] = ACTIONS(69),
    [aux_sym_expression_token2] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [aux_sym_list_token1] = ACTIONS(77),
    [aux_sym_list_token2] = ACTIONS(72),
    [aux_sym_set_token1] = ACTIONS(80),
    [aux_sym_set_token2] = ACTIONS(72),
    [aux_sym_dictionary_token1] = ACTIONS(83),
    [sym_keyword] = ACTIONS(66),
    [sym_integer] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_imaginary_number] = ACTIONS(66),
    [sym_boolean] = ACTIONS(66),
    [sym_none] = ACTIONS(66),
    [aux_sym_string_token1] = ACTIONS(86),
    [aux_sym_fstring_token1] = ACTIONS(89),
  },
  [7] = {
    [sym__form] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_quoted_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__number] = STATE(24),
    [sym__string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_fstring] = STATE(24),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(92),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(94),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(92),
    [sym_imaginary_number] = ACTIONS(92),
    [sym_boolean] = ACTIONS(92),
    [sym_none] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [8] = {
    [sym__form] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_quoted_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_dictionary_item] = STATE(7),
    [sym__keywords_with_values] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__number] = STATE(24),
    [sym__string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_fstring] = STATE(24),
    [aux_sym_dictionary_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(92),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(96),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(92),
    [sym_imaginary_number] = ACTIONS(92),
    [sym_boolean] = ACTIONS(92),
    [sym_none] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [9] = {
    [sym__form] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_quoted_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__number] = STATE(24),
    [sym__string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_fstring] = STATE(24),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(98),
    [aux_sym_expression_token1] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [aux_sym_list_token1] = ACTIONS(107),
    [aux_sym_set_token1] = ACTIONS(110),
    [aux_sym_set_token2] = ACTIONS(113),
    [aux_sym_dictionary_token1] = ACTIONS(115),
    [sym_keyword] = ACTIONS(98),
    [sym_integer] = ACTIONS(98),
    [sym_float] = ACTIONS(98),
    [sym_imaginary_number] = ACTIONS(98),
    [sym_boolean] = ACTIONS(98),
    [sym_none] = ACTIONS(98),
    [aux_sym_string_token1] = ACTIONS(118),
    [aux_sym_fstring_token1] = ACTIONS(121),
  },
  [10] = {
    [sym__form] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_quoted_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_dictionary_item] = STATE(11),
    [sym__keywords_with_values] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__number] = STATE(24),
    [sym__string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_fstring] = STATE(24),
    [aux_sym_dictionary_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(92),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(124),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(92),
    [sym_imaginary_number] = ACTIONS(92),
    [sym_boolean] = ACTIONS(92),
    [sym_none] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [11] = {
    [sym__form] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_quoted_expression] = STATE(24),
    [sym_list] = STATE(24),
    [sym_set] = STATE(24),
    [sym_dictionary] = STATE(24),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__number] = STATE(24),
    [sym__string] = STATE(24),
    [sym_string] = STATE(24),
    [sym_fstring] = STATE(24),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(92),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(126),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [sym_float] = ACTIONS(92),
    [sym_imaginary_number] = ACTIONS(92),
    [sym_boolean] = ACTIONS(92),
    [sym_none] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [12] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [aux_sym_expression_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [13] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [aux_sym_expression_token2] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [14] = {
    [sym__form] = STATE(17),
    [sym_expression] = STATE(17),
    [sym_quoted_expression] = STATE(17),
    [sym_list] = STATE(17),
    [sym_set] = STATE(17),
    [sym_dictionary] = STATE(17),
    [sym__keywords_with_values] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__number] = STATE(17),
    [sym__string] = STATE(17),
    [sym_string] = STATE(17),
    [sym_fstring] = STATE(17),
    [aux_sym_expression_repeat1] = STATE(17),
    [sym_symbol] = ACTIONS(134),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(136),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(134),
    [sym_integer] = ACTIONS(134),
    [sym_float] = ACTIONS(134),
    [sym_imaginary_number] = ACTIONS(134),
    [sym_boolean] = ACTIONS(134),
    [sym_none] = ACTIONS(134),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [15] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_list_token2] = ACTIONS(138),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [16] = {
    [sym__form] = STATE(13),
    [sym_expression] = STATE(13),
    [sym_quoted_expression] = STATE(13),
    [sym_list] = STATE(13),
    [sym_set] = STATE(13),
    [sym_dictionary] = STATE(13),
    [sym__keywords_with_values] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__number] = STATE(13),
    [sym__string] = STATE(13),
    [sym_string] = STATE(13),
    [sym_fstring] = STATE(13),
    [aux_sym_expression_repeat1] = STATE(13),
    [sym_symbol] = ACTIONS(140),
    [aux_sym_expression_token1] = ACTIONS(9),
    [aux_sym_expression_token2] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(140),
    [sym_integer] = ACTIONS(140),
    [sym_float] = ACTIONS(140),
    [sym_imaginary_number] = ACTIONS(140),
    [sym_boolean] = ACTIONS(140),
    [sym_none] = ACTIONS(140),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [17] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(144),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [18] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(146),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [19] = {
    [sym__form] = STATE(22),
    [sym_expression] = STATE(22),
    [sym_quoted_expression] = STATE(22),
    [sym_list] = STATE(22),
    [sym_set] = STATE(22),
    [sym_dictionary] = STATE(22),
    [sym__keywords_with_values] = STATE(22),
    [sym__literal] = STATE(22),
    [sym__number] = STATE(22),
    [sym__string] = STATE(22),
    [sym_string] = STATE(22),
    [sym_fstring] = STATE(22),
    [aux_sym_expression_repeat1] = STATE(22),
    [sym_symbol] = ACTIONS(148),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_list_token2] = ACTIONS(150),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(148),
    [sym_integer] = ACTIONS(148),
    [sym_float] = ACTIONS(148),
    [sym_imaginary_number] = ACTIONS(148),
    [sym_boolean] = ACTIONS(148),
    [sym_none] = ACTIONS(148),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [20] = {
    [sym__form] = STATE(18),
    [sym_expression] = STATE(18),
    [sym_quoted_expression] = STATE(18),
    [sym_list] = STATE(18),
    [sym_set] = STATE(18),
    [sym_dictionary] = STATE(18),
    [sym__keywords_with_values] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(18),
    [sym__string] = STATE(18),
    [sym_string] = STATE(18),
    [sym_fstring] = STATE(18),
    [aux_sym_expression_repeat1] = STATE(18),
    [sym_symbol] = ACTIONS(152),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_set_token2] = ACTIONS(154),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(152),
    [sym_integer] = ACTIONS(152),
    [sym_float] = ACTIONS(152),
    [sym_imaginary_number] = ACTIONS(152),
    [sym_boolean] = ACTIONS(152),
    [sym_none] = ACTIONS(152),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [21] = {
    [sym__form] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_quoted_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym_set] = STATE(12),
    [sym_dictionary] = STATE(12),
    [sym__keywords_with_values] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__number] = STATE(12),
    [sym__string] = STATE(12),
    [sym_string] = STATE(12),
    [sym_fstring] = STATE(12),
    [aux_sym_expression_repeat1] = STATE(12),
    [sym_symbol] = ACTIONS(156),
    [aux_sym_expression_token1] = ACTIONS(9),
    [aux_sym_expression_token2] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(156),
    [sym_integer] = ACTIONS(156),
    [sym_float] = ACTIONS(156),
    [sym_imaginary_number] = ACTIONS(156),
    [sym_boolean] = ACTIONS(156),
    [sym_none] = ACTIONS(156),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [22] = {
    [sym__form] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym__string] = STATE(6),
    [sym_string] = STATE(6),
    [sym_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(128),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_list_token2] = ACTIONS(160),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(128),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_imaginary_number] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [sym_none] = ACTIONS(128),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [23] = {
    [sym__form] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_quoted_expression] = STATE(15),
    [sym_list] = STATE(15),
    [sym_set] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym__keywords_with_values] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__number] = STATE(15),
    [sym__string] = STATE(15),
    [sym_string] = STATE(15),
    [sym_fstring] = STATE(15),
    [aux_sym_expression_repeat1] = STATE(15),
    [sym_symbol] = ACTIONS(162),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_list_token2] = ACTIONS(164),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(162),
    [sym_integer] = ACTIONS(162),
    [sym_float] = ACTIONS(162),
    [sym_imaginary_number] = ACTIONS(162),
    [sym_boolean] = ACTIONS(162),
    [sym_none] = ACTIONS(162),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [24] = {
    [sym__form] = STATE(39),
    [sym_expression] = STATE(39),
    [sym_quoted_expression] = STATE(39),
    [sym_list] = STATE(39),
    [sym_set] = STATE(39),
    [sym_dictionary] = STATE(39),
    [sym__keywords_with_values] = STATE(39),
    [sym__literal] = STATE(39),
    [sym__number] = STATE(39),
    [sym__string] = STATE(39),
    [sym_string] = STATE(39),
    [sym_fstring] = STATE(39),
    [sym_symbol] = ACTIONS(166),
    [aux_sym_expression_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_list_token1] = ACTIONS(15),
    [aux_sym_set_token1] = ACTIONS(17),
    [aux_sym_dictionary_token1] = ACTIONS(19),
    [sym_keyword] = ACTIONS(166),
    [sym_integer] = ACTIONS(166),
    [sym_float] = ACTIONS(166),
    [sym_imaginary_number] = ACTIONS(166),
    [sym_boolean] = ACTIONS(166),
    [sym_none] = ACTIONS(166),
    [aux_sym_string_token1] = ACTIONS(21),
    [aux_sym_fstring_token1] = ACTIONS(23),
  },
  [25] = {
    [sym__form] = STATE(54),
    [sym_expression] = STATE(54),
    [sym_quoted_expression] = STATE(54),
    [sym_list] = STATE(54),
    [sym_set] = STATE(54),
    [sym_dictionary] = STATE(54),
    [sym__keywords_with_values] = STATE(54),
    [sym__literal] = STATE(54),
    [sym__number] = STATE(54),
    [sym__string] = STATE(54),
    [sym_string] = STATE(54),
    [sym_fstring] = STATE(54),
    [sym_symbol] = ACTIONS(168),
    [aux_sym_expression_token1] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [aux_sym_list_token1] = ACTIONS(174),
    [aux_sym_set_token1] = ACTIONS(176),
    [aux_sym_dictionary_token1] = ACTIONS(178),
    [sym_keyword] = ACTIONS(168),
    [sym_integer] = ACTIONS(168),
    [sym_float] = ACTIONS(168),
    [sym_imaginary_number] = ACTIONS(168),
    [sym_boolean] = ACTIONS(168),
    [sym_none] = ACTIONS(168),
    [aux_sym_string_token1] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(182),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(186), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(184), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [24] = 2,
    ACTIONS(190), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(188), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [48] = 2,
    ACTIONS(194), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(192), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [72] = 2,
    ACTIONS(198), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(196), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [96] = 2,
    ACTIONS(202), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(200), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [120] = 2,
    ACTIONS(206), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(204), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [144] = 2,
    ACTIONS(210), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(208), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [168] = 2,
    ACTIONS(214), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(212), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [192] = 2,
    ACTIONS(218), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(216), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [216] = 2,
    ACTIONS(222), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(220), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [240] = 2,
    ACTIONS(226), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(224), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [264] = 2,
    ACTIONS(230), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(228), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [288] = 2,
    ACTIONS(234), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(232), 12,
      ts_builtin_sym_end,
      aux_sym_expression_token1,
      aux_sym_expression_token2,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_list_token1,
      aux_sym_list_token2,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [312] = 2,
    ACTIONS(236), 7,
      sym_symbol,
      sym_keyword,
      sym_integer,
      sym_float,
      sym_imaginary_number,
      sym_boolean,
      sym_none,
    ACTIONS(238), 8,
      aux_sym_expression_token1,
      anon_sym_SQUOTE,
      aux_sym_list_token1,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      aux_sym_string_token1,
      aux_sym_fstring_token1,
  [332] = 3,
    ACTIONS(240), 1,
      aux_sym_string_token1,
    ACTIONS(242), 1,
      aux_sym_fstring_token2,
    STATE(50), 1,
      aux_sym_fstring_repeat1,
  [342] = 3,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      aux_sym_string_token2,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [352] = 3,
    ACTIONS(248), 1,
      aux_sym_string_token1,
    ACTIONS(250), 1,
      aux_sym_string_token2,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [362] = 3,
    ACTIONS(246), 1,
      aux_sym_string_token2,
    ACTIONS(252), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [372] = 3,
    ACTIONS(242), 1,
      aux_sym_fstring_token2,
    ACTIONS(254), 1,
      aux_sym_string_token1,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [382] = 3,
    ACTIONS(242), 1,
      aux_sym_fstring_token2,
    ACTIONS(256), 1,
      aux_sym_string_token1,
    STATE(46), 1,
      aux_sym_fstring_repeat1,
  [392] = 3,
    ACTIONS(258), 1,
      aux_sym_string_token1,
    ACTIONS(260), 1,
      aux_sym_fstring_token2,
    STATE(46), 1,
      aux_sym_fstring_repeat1,
  [402] = 3,
    ACTIONS(263), 1,
      aux_sym_string_token1,
    ACTIONS(265), 1,
      aux_sym_string_token2,
    STATE(41), 1,
      aux_sym_string_repeat1,
  [412] = 3,
    ACTIONS(267), 1,
      aux_sym_string_token1,
    ACTIONS(269), 1,
      aux_sym_string_token2,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [422] = 3,
    ACTIONS(272), 1,
      aux_sym_dictionary_token1,
    ACTIONS(274), 1,
      aux_sym_string_token1,
    ACTIONS(276), 1,
      aux_sym_fstring_token2,
  [432] = 3,
    ACTIONS(242), 1,
      aux_sym_fstring_token2,
    ACTIONS(278), 1,
      aux_sym_string_token1,
    STATE(46), 1,
      aux_sym_fstring_repeat1,
  [442] = 2,
    ACTIONS(280), 1,
      aux_sym_string_token1,
    ACTIONS(282), 1,
      aux_sym_fstring_token2,
  [449] = 2,
    ACTIONS(170), 1,
      aux_sym_expression_token1,
    STATE(56), 1,
      sym_expression,
  [456] = 2,
    ACTIONS(9), 1,
      aux_sym_expression_token1,
    STATE(27), 1,
      sym_expression,
  [463] = 1,
    ACTIONS(284), 1,
      aux_sym_fstring_token3,
  [467] = 1,
    ACTIONS(224), 1,
      aux_sym_fstring_token3,
  [471] = 1,
    ACTIONS(188), 1,
      aux_sym_fstring_token3,
  [475] = 1,
    ACTIONS(184), 1,
      aux_sym_fstring_token3,
  [479] = 1,
    ACTIONS(204), 1,
      aux_sym_fstring_token3,
  [483] = 1,
    ACTIONS(192), 1,
      aux_sym_fstring_token3,
  [487] = 1,
    ACTIONS(196), 1,
      aux_sym_fstring_token3,
  [491] = 1,
    ACTIONS(200), 1,
      aux_sym_fstring_token3,
  [495] = 1,
    ACTIONS(208), 1,
      aux_sym_fstring_token3,
  [499] = 1,
    ACTIONS(228), 1,
      aux_sym_fstring_token3,
  [503] = 1,
    ACTIONS(212), 1,
      aux_sym_fstring_token3,
  [507] = 1,
    ACTIONS(216), 1,
      aux_sym_fstring_token3,
  [511] = 1,
    ACTIONS(232), 1,
      aux_sym_fstring_token3,
  [515] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [519] = 1,
    ACTIONS(220), 1,
      aux_sym_fstring_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 24,
  [SMALL_STATE(28)] = 48,
  [SMALL_STATE(29)] = 72,
  [SMALL_STATE(30)] = 96,
  [SMALL_STATE(31)] = 120,
  [SMALL_STATE(32)] = 144,
  [SMALL_STATE(33)] = 168,
  [SMALL_STATE(34)] = 192,
  [SMALL_STATE(35)] = 216,
  [SMALL_STATE(36)] = 240,
  [SMALL_STATE(37)] = 264,
  [SMALL_STATE(38)] = 288,
  [SMALL_STATE(39)] = 312,
  [SMALL_STATE(40)] = 332,
  [SMALL_STATE(41)] = 342,
  [SMALL_STATE(42)] = 352,
  [SMALL_STATE(43)] = 362,
  [SMALL_STATE(44)] = 372,
  [SMALL_STATE(45)] = 382,
  [SMALL_STATE(46)] = 392,
  [SMALL_STATE(47)] = 402,
  [SMALL_STATE(48)] = 412,
  [SMALL_STATE(49)] = 422,
  [SMALL_STATE(50)] = 432,
  [SMALL_STATE(51)] = 442,
  [SMALL_STATE(52)] = 449,
  [SMALL_STATE(53)] = 456,
  [SMALL_STATE(54)] = 463,
  [SMALL_STATE(55)] = 467,
  [SMALL_STATE(56)] = 471,
  [SMALL_STATE(57)] = 475,
  [SMALL_STATE(58)] = 479,
  [SMALL_STATE(59)] = 483,
  [SMALL_STATE(60)] = 487,
  [SMALL_STATE(61)] = 491,
  [SMALL_STATE(62)] = 495,
  [SMALL_STATE(63)] = 499,
  [SMALL_STATE(64)] = 503,
  [SMALL_STATE(65)] = 507,
  [SMALL_STATE(66)] = 511,
  [SMALL_STATE(67)] = 515,
  [SMALL_STATE(68)] = 519,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
