#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_symbol = 1,
  sym_shebang = 2,
  sym_comment = 3,
  aux_sym_discard_token1 = 4,
  sym_discard_prefix = 5,
  sym_decimal = 6,
  sym_binary = 7,
  sym_hexadecimal = 8,
  sym_octal = 9,
  sym_float = 10,
  sym_complex = 11,
  sym_boolean = 12,
  sym_none = 13,
  aux_sym_expression_token1 = 14,
  aux_sym_expression_token2 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_list_token1 = 17,
  aux_sym_list_token2 = 18,
  aux_sym_set_token1 = 19,
  aux_sym_set_token2 = 20,
  aux_sym_dictionary_token1 = 21,
  sym_keyword = 22,
  sym_string = 23,
  aux_sym_fstring_token1 = 24,
  aux_sym_fstring_token2 = 25,
  aux_sym_fstring_token3 = 26,
  aux_sym_fstring_token4 = 27,
  sym_bstring = 28,
  sym_raw_string = 29,
  aux_sym_raw_fstring_token1 = 30,
  sym_raw_bstring = 31,
  sym_program = 32,
  sym__item = 33,
  sym__form = 34,
  sym_discard = 35,
  sym__literal = 36,
  sym__number = 37,
  sym_integer = 38,
  sym_expression = 39,
  sym_quoted_expression = 40,
  sym_list = 41,
  sym_set = 42,
  sym_dictionary = 43,
  sym_dictionary_item = 44,
  sym__keywords_with_values = 45,
  sym__string = 46,
  sym_fstring = 47,
  sym_raw_fstring = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_expression_repeat1 = 50,
  aux_sym_dictionary_repeat1 = 51,
  aux_sym_fstring_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_shebang] = "shebang",
  [sym_comment] = "comment",
  [aux_sym_discard_token1] = "discard_token1",
  [sym_discard_prefix] = "discard_prefix",
  [sym_decimal] = "decimal",
  [sym_binary] = "binary",
  [sym_hexadecimal] = "hexadecimal",
  [sym_octal] = "octal",
  [sym_float] = "float",
  [sym_complex] = "complex",
  [sym_boolean] = "boolean",
  [sym_none] = "none",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_expression_token2] = "expression_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_list_token1] = "list_token1",
  [aux_sym_list_token2] = "list_token2",
  [aux_sym_set_token1] = "set_token1",
  [aux_sym_set_token2] = "set_token2",
  [aux_sym_dictionary_token1] = "dictionary_token1",
  [sym_keyword] = "keyword",
  [sym_string] = "string",
  [aux_sym_fstring_token1] = "fstring_token1",
  [aux_sym_fstring_token2] = "fstring_token2",
  [aux_sym_fstring_token3] = "fstring_token3",
  [aux_sym_fstring_token4] = "fstring_token4",
  [sym_bstring] = "bstring",
  [sym_raw_string] = "raw_string",
  [aux_sym_raw_fstring_token1] = "raw_fstring_token1",
  [sym_raw_bstring] = "raw_bstring",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym__form] = "_form",
  [sym_discard] = "discard",
  [sym__literal] = "_literal",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_expression] = "expression",
  [sym_quoted_expression] = "quoted_expression",
  [sym_list] = "list",
  [sym_set] = "set",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_item] = "dictionary_item",
  [sym__keywords_with_values] = "_keywords_with_values",
  [sym__string] = "_string",
  [sym_fstring] = "fstring",
  [sym_raw_fstring] = "raw_fstring",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_fstring_repeat1] = "fstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [sym_shebang] = sym_shebang,
  [sym_comment] = sym_comment,
  [aux_sym_discard_token1] = aux_sym_discard_token1,
  [sym_discard_prefix] = sym_discard_prefix,
  [sym_decimal] = sym_decimal,
  [sym_binary] = sym_binary,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_octal] = sym_octal,
  [sym_float] = sym_float,
  [sym_complex] = sym_complex,
  [sym_boolean] = sym_boolean,
  [sym_none] = sym_none,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_expression_token2] = aux_sym_expression_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [aux_sym_list_token2] = aux_sym_list_token2,
  [aux_sym_set_token1] = aux_sym_set_token1,
  [aux_sym_set_token2] = aux_sym_set_token2,
  [aux_sym_dictionary_token1] = aux_sym_dictionary_token1,
  [sym_keyword] = sym_keyword,
  [sym_string] = sym_string,
  [aux_sym_fstring_token1] = aux_sym_fstring_token1,
  [aux_sym_fstring_token2] = aux_sym_fstring_token2,
  [aux_sym_fstring_token3] = aux_sym_fstring_token3,
  [aux_sym_fstring_token4] = aux_sym_fstring_token4,
  [sym_bstring] = sym_bstring,
  [sym_raw_string] = sym_raw_string,
  [aux_sym_raw_fstring_token1] = aux_sym_raw_fstring_token1,
  [sym_raw_bstring] = sym_raw_bstring,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym__form] = sym__form,
  [sym_discard] = sym_discard,
  [sym__literal] = sym__literal,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_expression] = sym_expression,
  [sym_quoted_expression] = sym_quoted_expression,
  [sym_list] = sym_list,
  [sym_set] = sym_set,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_item] = sym_dictionary_item,
  [sym__keywords_with_values] = sym__keywords_with_values,
  [sym__string] = sym__string,
  [sym_fstring] = sym_fstring,
  [sym_raw_fstring] = sym_raw_fstring,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_discard_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_discard_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_complex] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [aux_sym_fstring_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_bstring] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_raw_fstring_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_bstring] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
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
  [sym_discard] = {
    .visible = true,
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
  [sym_integer] = {
    .visible = true,
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
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_fstring] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_fstring] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
  [aux_sym_fstring_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_discarded_form = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_discarded_form] = "discarded_form",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_discarded_form, 2},
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
  [10] = 7,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 13,
  [20] = 17,
  [21] = 12,
  [22] = 14,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 24,
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 47,
  [51] = 49,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 28,
  [58] = 37,
  [59] = 35,
  [60] = 29,
  [61] = 61,
  [62] = 41,
  [63] = 63,
  [64] = 30,
  [65] = 33,
  [66] = 36,
  [67] = 40,
  [68] = 42,
  [69] = 61,
  [70] = 39,
  [71] = 38,
  [72] = 31,
  [73] = 32,
  [74] = 34,
};

static TSCharacterRange sym_symbol_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '-'}, {'/', ':'}, {'<', 'Z'}, {'\\', '\\'},
  {'^', '_'}, {'a', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 73,
        '#', 1,
        '\'', 41,
        '(', 39,
        ')', 40,
        '.', 13,
        '0', 27,
        ':', 15,
        ';', 24,
        '[', 42,
        ']', 43,
        '_', 54,
        'b', 48,
        'f', 49,
        'r', 52,
        '{', 46,
        '}', 45,
        '+', 54,
        '-', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 15:
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '"', 6,
        '#', 1,
        '\'', 41,
        '(', 39,
        ')', 40,
        '.', 13,
        '0', 27,
        ':', 15,
        ';', 24,
        '[', 42,
        ']', 43,
        '_', 54,
        'b', 48,
        'f', 49,
        'r', 52,
        '{', 46,
        '}', 45,
        '+', 54,
        '-', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(66);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_discard_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_discard_prefix);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_decimal);
      ADVANCE_MAP(
        '.', 36,
        '0', 28,
        '_', 56,
        'B', 57,
        'b', 57,
        'E', 63,
        'e', 63,
        'J', 38,
        'j', 38,
        'O', 58,
        'o', 58,
        'X', 59,
        'x', 59,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_complex);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_list_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_set_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      if (lookahead == '{') ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(53);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(50);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(76);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(5);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(66);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(5);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '_') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '_') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(5);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_fstring_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_fstring_token3);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_fstring_token4);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bstring);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_raw_fstring_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_raw_bstring);
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_discard_prefix] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_complex] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_expression_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_list_token1] = ACTIONS(1),
    [aux_sym_list_token2] = ACTIONS(1),
    [aux_sym_set_token1] = ACTIONS(1),
    [aux_sym_set_token2] = ACTIONS(1),
    [aux_sym_dictionary_token1] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [aux_sym_fstring_token1] = ACTIONS(1),
    [aux_sym_fstring_token3] = ACTIONS(1),
    [aux_sym_fstring_token4] = ACTIONS(1),
    [sym_bstring] = ACTIONS(1),
    [sym_raw_string] = ACTIONS(1),
    [aux_sym_raw_fstring_token1] = ACTIONS(1),
    [sym_raw_bstring] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(56),
    [sym__item] = STATE(4),
    [sym__form] = STATE(4),
    [sym_discard] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__number] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_quoted_expression] = STATE(4),
    [sym_list] = STATE(4),
    [sym_set] = STATE(4),
    [sym_dictionary] = STATE(4),
    [sym__keywords_with_values] = STATE(4),
    [sym__string] = STATE(4),
    [sym_fstring] = STATE(4),
    [sym_raw_fstring] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(5),
    [sym_complex] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(9),
    [sym_raw_string] = ACTIONS(9),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(9),
  },
  [2] = {
    [sym__item] = STATE(3),
    [sym__form] = STATE(3),
    [sym_discard] = STATE(3),
    [sym__literal] = STATE(3),
    [sym__number] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_quoted_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dictionary] = STATE(3),
    [sym__keywords_with_values] = STATE(3),
    [sym__string] = STATE(3),
    [sym_fstring] = STATE(3),
    [sym_raw_fstring] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(31),
    [sym_complex] = ACTIONS(31),
    [sym_boolean] = ACTIONS(31),
    [sym_none] = ACTIONS(31),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(33),
    [sym_raw_string] = ACTIONS(33),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(33),
  },
  [3] = {
    [sym__item] = STATE(6),
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_symbol] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(37),
    [sym_complex] = ACTIONS(37),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(39),
  },
  [4] = {
    [sym__item] = STATE(6),
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_symbol] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(37),
    [sym_complex] = ACTIONS(37),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(39),
  },
  [5] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(41),
    [sym_discard_prefix] = ACTIONS(44),
    [sym_decimal] = ACTIONS(47),
    [sym_binary] = ACTIONS(47),
    [sym_hexadecimal] = ACTIONS(47),
    [sym_octal] = ACTIONS(47),
    [sym_float] = ACTIONS(41),
    [sym_complex] = ACTIONS(41),
    [sym_boolean] = ACTIONS(41),
    [sym_none] = ACTIONS(41),
    [aux_sym_expression_token1] = ACTIONS(50),
    [aux_sym_expression_token2] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_list_token1] = ACTIONS(58),
    [aux_sym_list_token2] = ACTIONS(53),
    [aux_sym_set_token1] = ACTIONS(61),
    [aux_sym_set_token2] = ACTIONS(53),
    [aux_sym_dictionary_token1] = ACTIONS(64),
    [sym_keyword] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [aux_sym_fstring_token1] = ACTIONS(70),
    [sym_bstring] = ACTIONS(67),
    [sym_raw_string] = ACTIONS(67),
    [aux_sym_raw_fstring_token1] = ACTIONS(73),
    [sym_raw_bstring] = ACTIONS(67),
  },
  [6] = {
    [sym__item] = STATE(6),
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_symbol] = ACTIONS(78),
    [sym_comment] = ACTIONS(81),
    [sym_discard_prefix] = ACTIONS(84),
    [sym_decimal] = ACTIONS(87),
    [sym_binary] = ACTIONS(87),
    [sym_hexadecimal] = ACTIONS(87),
    [sym_octal] = ACTIONS(87),
    [sym_float] = ACTIONS(78),
    [sym_complex] = ACTIONS(78),
    [sym_boolean] = ACTIONS(78),
    [sym_none] = ACTIONS(78),
    [aux_sym_expression_token1] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [aux_sym_list_token1] = ACTIONS(96),
    [aux_sym_set_token1] = ACTIONS(99),
    [aux_sym_dictionary_token1] = ACTIONS(102),
    [sym_keyword] = ACTIONS(81),
    [sym_string] = ACTIONS(81),
    [aux_sym_fstring_token1] = ACTIONS(105),
    [sym_bstring] = ACTIONS(81),
    [sym_raw_string] = ACTIONS(81),
    [aux_sym_raw_fstring_token1] = ACTIONS(108),
    [sym_raw_bstring] = ACTIONS(81),
  },
  [7] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(8),
    [sym__keywords_with_values] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(8),
    [sym_symbol] = ACTIONS(111),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(111),
    [sym_complex] = ACTIONS(111),
    [sym_boolean] = ACTIONS(111),
    [sym_none] = ACTIONS(111),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(113),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(115),
    [sym_raw_string] = ACTIONS(115),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(115),
  },
  [8] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(111),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(111),
    [sym_complex] = ACTIONS(111),
    [sym_boolean] = ACTIONS(111),
    [sym_none] = ACTIONS(111),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(117),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(115),
    [sym_raw_string] = ACTIONS(115),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(115),
  },
  [9] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(119),
    [sym_discard_prefix] = ACTIONS(122),
    [sym_decimal] = ACTIONS(125),
    [sym_binary] = ACTIONS(125),
    [sym_hexadecimal] = ACTIONS(125),
    [sym_octal] = ACTIONS(125),
    [sym_float] = ACTIONS(119),
    [sym_complex] = ACTIONS(119),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_expression_token1] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(134),
    [aux_sym_set_token1] = ACTIONS(137),
    [aux_sym_set_token2] = ACTIONS(140),
    [aux_sym_dictionary_token1] = ACTIONS(142),
    [sym_keyword] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [aux_sym_fstring_token1] = ACTIONS(148),
    [sym_bstring] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(145),
    [aux_sym_raw_fstring_token1] = ACTIONS(151),
    [sym_raw_bstring] = ACTIONS(145),
  },
  [10] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(11),
    [sym__keywords_with_values] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(111),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(111),
    [sym_complex] = ACTIONS(111),
    [sym_boolean] = ACTIONS(111),
    [sym_none] = ACTIONS(111),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(154),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(115),
    [sym_raw_string] = ACTIONS(115),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(115),
  },
  [11] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(9),
    [sym__keywords_with_values] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(111),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(111),
    [sym_complex] = ACTIONS(111),
    [sym_boolean] = ACTIONS(111),
    [sym_none] = ACTIONS(111),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(156),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(115),
    [sym_raw_string] = ACTIONS(115),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(115),
  },
  [12] = {
    [sym__form] = STATE(17),
    [sym_discard] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__number] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_expression] = STATE(17),
    [sym_quoted_expression] = STATE(17),
    [sym_list] = STATE(17),
    [sym_set] = STATE(17),
    [sym_dictionary] = STATE(17),
    [sym__keywords_with_values] = STATE(17),
    [sym__string] = STATE(17),
    [sym_fstring] = STATE(17),
    [sym_raw_fstring] = STATE(17),
    [aux_sym_expression_repeat1] = STATE(17),
    [sym_symbol] = ACTIONS(158),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(158),
    [sym_complex] = ACTIONS(158),
    [sym_boolean] = ACTIONS(158),
    [sym_none] = ACTIONS(158),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(160),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(162),
    [sym_raw_string] = ACTIONS(162),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(162),
  },
  [13] = {
    [sym__form] = STATE(16),
    [sym_discard] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__number] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_expression] = STATE(16),
    [sym_quoted_expression] = STATE(16),
    [sym_list] = STATE(16),
    [sym_set] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym__keywords_with_values] = STATE(16),
    [sym__string] = STATE(16),
    [sym_fstring] = STATE(16),
    [sym_raw_fstring] = STATE(16),
    [aux_sym_expression_repeat1] = STATE(16),
    [sym_symbol] = ACTIONS(164),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(164),
    [sym_complex] = ACTIONS(164),
    [sym_boolean] = ACTIONS(164),
    [sym_none] = ACTIONS(164),
    [aux_sym_expression_token1] = ACTIONS(15),
    [aux_sym_expression_token2] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(168),
    [sym_raw_string] = ACTIONS(168),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(168),
  },
  [14] = {
    [sym__form] = STATE(15),
    [sym_discard] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__number] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_quoted_expression] = STATE(15),
    [sym_list] = STATE(15),
    [sym_set] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym__keywords_with_values] = STATE(15),
    [sym__string] = STATE(15),
    [sym_fstring] = STATE(15),
    [sym_raw_fstring] = STATE(15),
    [aux_sym_expression_repeat1] = STATE(15),
    [sym_symbol] = ACTIONS(170),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(170),
    [sym_complex] = ACTIONS(170),
    [sym_boolean] = ACTIONS(170),
    [sym_none] = ACTIONS(170),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_list_token2] = ACTIONS(172),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(174),
    [sym_string] = ACTIONS(174),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(174),
    [sym_raw_string] = ACTIONS(174),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(174),
  },
  [15] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_list_token2] = ACTIONS(178),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [16] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [aux_sym_expression_token2] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [17] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(184),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [18] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_list_token2] = ACTIONS(186),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [19] = {
    [sym__form] = STATE(23),
    [sym_discard] = STATE(23),
    [sym__literal] = STATE(23),
    [sym__number] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_expression] = STATE(23),
    [sym_quoted_expression] = STATE(23),
    [sym_list] = STATE(23),
    [sym_set] = STATE(23),
    [sym_dictionary] = STATE(23),
    [sym__keywords_with_values] = STATE(23),
    [sym__string] = STATE(23),
    [sym_fstring] = STATE(23),
    [sym_raw_fstring] = STATE(23),
    [aux_sym_expression_repeat1] = STATE(23),
    [sym_symbol] = ACTIONS(188),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(188),
    [sym_complex] = ACTIONS(188),
    [sym_boolean] = ACTIONS(188),
    [sym_none] = ACTIONS(188),
    [aux_sym_expression_token1] = ACTIONS(15),
    [aux_sym_expression_token2] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(192),
    [sym_string] = ACTIONS(192),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(192),
    [sym_raw_string] = ACTIONS(192),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(192),
  },
  [20] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(194),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [21] = {
    [sym__form] = STATE(20),
    [sym_discard] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__number] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_expression] = STATE(20),
    [sym_quoted_expression] = STATE(20),
    [sym_list] = STATE(20),
    [sym_set] = STATE(20),
    [sym_dictionary] = STATE(20),
    [sym__keywords_with_values] = STATE(20),
    [sym__string] = STATE(20),
    [sym_fstring] = STATE(20),
    [sym_raw_fstring] = STATE(20),
    [aux_sym_expression_repeat1] = STATE(20),
    [sym_symbol] = ACTIONS(196),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(196),
    [sym_complex] = ACTIONS(196),
    [sym_boolean] = ACTIONS(196),
    [sym_none] = ACTIONS(196),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_set_token2] = ACTIONS(198),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(200),
    [sym_string] = ACTIONS(200),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(200),
    [sym_raw_string] = ACTIONS(200),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(200),
  },
  [22] = {
    [sym__form] = STATE(18),
    [sym_discard] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_expression] = STATE(18),
    [sym_quoted_expression] = STATE(18),
    [sym_list] = STATE(18),
    [sym_set] = STATE(18),
    [sym_dictionary] = STATE(18),
    [sym__keywords_with_values] = STATE(18),
    [sym__string] = STATE(18),
    [sym_fstring] = STATE(18),
    [sym_raw_fstring] = STATE(18),
    [aux_sym_expression_repeat1] = STATE(18),
    [sym_symbol] = ACTIONS(202),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(202),
    [sym_complex] = ACTIONS(202),
    [sym_boolean] = ACTIONS(202),
    [sym_none] = ACTIONS(202),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_list_token2] = ACTIONS(204),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(206),
    [sym_string] = ACTIONS(206),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(206),
    [sym_raw_string] = ACTIONS(206),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(206),
  },
  [23] = {
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(176),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(176),
    [sym_complex] = ACTIONS(176),
    [sym_boolean] = ACTIONS(176),
    [sym_none] = ACTIONS(176),
    [aux_sym_expression_token1] = ACTIONS(15),
    [aux_sym_expression_token2] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(180),
    [sym_raw_string] = ACTIONS(180),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(180),
  },
  [24] = {
    [sym__form] = STATE(31),
    [sym_discard] = STATE(31),
    [sym__literal] = STATE(31),
    [sym__number] = STATE(31),
    [sym_integer] = STATE(31),
    [sym_expression] = STATE(31),
    [sym_quoted_expression] = STATE(31),
    [sym_list] = STATE(31),
    [sym_set] = STATE(31),
    [sym_dictionary] = STATE(31),
    [sym__keywords_with_values] = STATE(31),
    [sym__string] = STATE(31),
    [sym_fstring] = STATE(31),
    [sym_raw_fstring] = STATE(31),
    [sym_symbol] = ACTIONS(210),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(210),
    [sym_complex] = ACTIONS(210),
    [sym_boolean] = ACTIONS(210),
    [sym_none] = ACTIONS(210),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(212),
    [sym_string] = ACTIONS(212),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(212),
    [sym_raw_string] = ACTIONS(212),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(212),
  },
  [25] = {
    [sym__form] = STATE(43),
    [sym_discard] = STATE(43),
    [sym__literal] = STATE(43),
    [sym__number] = STATE(43),
    [sym_integer] = STATE(43),
    [sym_expression] = STATE(43),
    [sym_quoted_expression] = STATE(43),
    [sym_list] = STATE(43),
    [sym_set] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym__keywords_with_values] = STATE(43),
    [sym__string] = STATE(43),
    [sym_fstring] = STATE(43),
    [sym_raw_fstring] = STATE(43),
    [sym_symbol] = ACTIONS(214),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_float] = ACTIONS(214),
    [sym_complex] = ACTIONS(214),
    [sym_boolean] = ACTIONS(214),
    [sym_none] = ACTIONS(214),
    [aux_sym_expression_token1] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_list_token1] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [aux_sym_dictionary_token1] = ACTIONS(23),
    [sym_keyword] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [aux_sym_fstring_token1] = ACTIONS(25),
    [sym_bstring] = ACTIONS(216),
    [sym_raw_string] = ACTIONS(216),
    [aux_sym_raw_fstring_token1] = ACTIONS(27),
    [sym_raw_bstring] = ACTIONS(216),
  },
  [26] = {
    [sym__form] = STATE(72),
    [sym_discard] = STATE(72),
    [sym__literal] = STATE(72),
    [sym__number] = STATE(72),
    [sym_integer] = STATE(72),
    [sym_expression] = STATE(72),
    [sym_quoted_expression] = STATE(72),
    [sym_list] = STATE(72),
    [sym_set] = STATE(72),
    [sym_dictionary] = STATE(72),
    [sym__keywords_with_values] = STATE(72),
    [sym__string] = STATE(72),
    [sym_fstring] = STATE(72),
    [sym_raw_fstring] = STATE(72),
    [sym_symbol] = ACTIONS(218),
    [sym_discard_prefix] = ACTIONS(220),
    [sym_decimal] = ACTIONS(222),
    [sym_binary] = ACTIONS(222),
    [sym_hexadecimal] = ACTIONS(222),
    [sym_octal] = ACTIONS(222),
    [sym_float] = ACTIONS(218),
    [sym_complex] = ACTIONS(218),
    [sym_boolean] = ACTIONS(218),
    [sym_none] = ACTIONS(218),
    [aux_sym_expression_token1] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [aux_sym_list_token1] = ACTIONS(228),
    [aux_sym_set_token1] = ACTIONS(230),
    [aux_sym_dictionary_token1] = ACTIONS(232),
    [sym_keyword] = ACTIONS(234),
    [sym_string] = ACTIONS(234),
    [aux_sym_fstring_token1] = ACTIONS(236),
    [sym_bstring] = ACTIONS(234),
    [sym_raw_string] = ACTIONS(234),
    [aux_sym_raw_fstring_token1] = ACTIONS(238),
    [sym_raw_bstring] = ACTIONS(234),
  },
  [27] = {
    [sym__form] = STATE(63),
    [sym_discard] = STATE(63),
    [sym__literal] = STATE(63),
    [sym__number] = STATE(63),
    [sym_integer] = STATE(63),
    [sym_expression] = STATE(63),
    [sym_quoted_expression] = STATE(63),
    [sym_list] = STATE(63),
    [sym_set] = STATE(63),
    [sym_dictionary] = STATE(63),
    [sym__keywords_with_values] = STATE(63),
    [sym__string] = STATE(63),
    [sym_fstring] = STATE(63),
    [sym_raw_fstring] = STATE(63),
    [sym_symbol] = ACTIONS(240),
    [sym_discard_prefix] = ACTIONS(220),
    [sym_decimal] = ACTIONS(222),
    [sym_binary] = ACTIONS(222),
    [sym_hexadecimal] = ACTIONS(222),
    [sym_octal] = ACTIONS(222),
    [sym_float] = ACTIONS(240),
    [sym_complex] = ACTIONS(240),
    [sym_boolean] = ACTIONS(240),
    [sym_none] = ACTIONS(240),
    [aux_sym_expression_token1] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [aux_sym_list_token1] = ACTIONS(228),
    [aux_sym_set_token1] = ACTIONS(230),
    [aux_sym_dictionary_token1] = ACTIONS(232),
    [sym_keyword] = ACTIONS(242),
    [sym_string] = ACTIONS(242),
    [aux_sym_fstring_token1] = ACTIONS(236),
    [sym_bstring] = ACTIONS(242),
    [sym_raw_string] = ACTIONS(242),
    [aux_sym_raw_fstring_token1] = ACTIONS(238),
    [sym_raw_bstring] = ACTIONS(242),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_symbol] = ACTIONS(246),
    [sym_comment] = ACTIONS(244),
    [sym_discard_prefix] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
    [sym_binary] = ACTIONS(246),
    [sym_hexadecimal] = ACTIONS(246),
    [sym_octal] = ACTIONS(246),
    [sym_float] = ACTIONS(246),
    [sym_complex] = ACTIONS(246),
    [sym_boolean] = ACTIONS(246),
    [sym_none] = ACTIONS(246),
    [aux_sym_expression_token1] = ACTIONS(244),
    [aux_sym_expression_token2] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [aux_sym_list_token1] = ACTIONS(244),
    [aux_sym_list_token2] = ACTIONS(244),
    [aux_sym_set_token1] = ACTIONS(244),
    [aux_sym_set_token2] = ACTIONS(244),
    [aux_sym_dictionary_token1] = ACTIONS(244),
    [sym_keyword] = ACTIONS(244),
    [sym_string] = ACTIONS(244),
    [aux_sym_fstring_token1] = ACTIONS(244),
    [sym_bstring] = ACTIONS(244),
    [sym_raw_string] = ACTIONS(244),
    [aux_sym_raw_fstring_token1] = ACTIONS(246),
    [sym_raw_bstring] = ACTIONS(244),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_symbol] = ACTIONS(250),
    [sym_comment] = ACTIONS(248),
    [sym_discard_prefix] = ACTIONS(248),
    [sym_decimal] = ACTIONS(250),
    [sym_binary] = ACTIONS(250),
    [sym_hexadecimal] = ACTIONS(250),
    [sym_octal] = ACTIONS(250),
    [sym_float] = ACTIONS(250),
    [sym_complex] = ACTIONS(250),
    [sym_boolean] = ACTIONS(250),
    [sym_none] = ACTIONS(250),
    [aux_sym_expression_token1] = ACTIONS(248),
    [aux_sym_expression_token2] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [aux_sym_list_token1] = ACTIONS(248),
    [aux_sym_list_token2] = ACTIONS(248),
    [aux_sym_set_token1] = ACTIONS(248),
    [aux_sym_set_token2] = ACTIONS(248),
    [aux_sym_dictionary_token1] = ACTIONS(248),
    [sym_keyword] = ACTIONS(248),
    [sym_string] = ACTIONS(248),
    [aux_sym_fstring_token1] = ACTIONS(248),
    [sym_bstring] = ACTIONS(248),
    [sym_raw_string] = ACTIONS(248),
    [aux_sym_raw_fstring_token1] = ACTIONS(250),
    [sym_raw_bstring] = ACTIONS(248),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_symbol] = ACTIONS(254),
    [sym_comment] = ACTIONS(252),
    [sym_discard_prefix] = ACTIONS(252),
    [sym_decimal] = ACTIONS(254),
    [sym_binary] = ACTIONS(254),
    [sym_hexadecimal] = ACTIONS(254),
    [sym_octal] = ACTIONS(254),
    [sym_float] = ACTIONS(254),
    [sym_complex] = ACTIONS(254),
    [sym_boolean] = ACTIONS(254),
    [sym_none] = ACTIONS(254),
    [aux_sym_expression_token1] = ACTIONS(252),
    [aux_sym_expression_token2] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [aux_sym_list_token1] = ACTIONS(252),
    [aux_sym_list_token2] = ACTIONS(252),
    [aux_sym_set_token1] = ACTIONS(252),
    [aux_sym_set_token2] = ACTIONS(252),
    [aux_sym_dictionary_token1] = ACTIONS(252),
    [sym_keyword] = ACTIONS(252),
    [sym_string] = ACTIONS(252),
    [aux_sym_fstring_token1] = ACTIONS(252),
    [sym_bstring] = ACTIONS(252),
    [sym_raw_string] = ACTIONS(252),
    [aux_sym_raw_fstring_token1] = ACTIONS(254),
    [sym_raw_bstring] = ACTIONS(252),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_symbol] = ACTIONS(258),
    [sym_comment] = ACTIONS(256),
    [sym_discard_prefix] = ACTIONS(256),
    [sym_decimal] = ACTIONS(258),
    [sym_binary] = ACTIONS(258),
    [sym_hexadecimal] = ACTIONS(258),
    [sym_octal] = ACTIONS(258),
    [sym_float] = ACTIONS(258),
    [sym_complex] = ACTIONS(258),
    [sym_boolean] = ACTIONS(258),
    [sym_none] = ACTIONS(258),
    [aux_sym_expression_token1] = ACTIONS(256),
    [aux_sym_expression_token2] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [aux_sym_list_token1] = ACTIONS(256),
    [aux_sym_list_token2] = ACTIONS(256),
    [aux_sym_set_token1] = ACTIONS(256),
    [aux_sym_set_token2] = ACTIONS(256),
    [aux_sym_dictionary_token1] = ACTIONS(256),
    [sym_keyword] = ACTIONS(256),
    [sym_string] = ACTIONS(256),
    [aux_sym_fstring_token1] = ACTIONS(256),
    [sym_bstring] = ACTIONS(256),
    [sym_raw_string] = ACTIONS(256),
    [aux_sym_raw_fstring_token1] = ACTIONS(258),
    [sym_raw_bstring] = ACTIONS(256),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_symbol] = ACTIONS(262),
    [sym_comment] = ACTIONS(260),
    [sym_discard_prefix] = ACTIONS(260),
    [sym_decimal] = ACTIONS(262),
    [sym_binary] = ACTIONS(262),
    [sym_hexadecimal] = ACTIONS(262),
    [sym_octal] = ACTIONS(262),
    [sym_float] = ACTIONS(262),
    [sym_complex] = ACTIONS(262),
    [sym_boolean] = ACTIONS(262),
    [sym_none] = ACTIONS(262),
    [aux_sym_expression_token1] = ACTIONS(260),
    [aux_sym_expression_token2] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [aux_sym_list_token1] = ACTIONS(260),
    [aux_sym_list_token2] = ACTIONS(260),
    [aux_sym_set_token1] = ACTIONS(260),
    [aux_sym_set_token2] = ACTIONS(260),
    [aux_sym_dictionary_token1] = ACTIONS(260),
    [sym_keyword] = ACTIONS(260),
    [sym_string] = ACTIONS(260),
    [aux_sym_fstring_token1] = ACTIONS(260),
    [sym_bstring] = ACTIONS(260),
    [sym_raw_string] = ACTIONS(260),
    [aux_sym_raw_fstring_token1] = ACTIONS(262),
    [sym_raw_bstring] = ACTIONS(260),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_symbol] = ACTIONS(266),
    [sym_comment] = ACTIONS(264),
    [sym_discard_prefix] = ACTIONS(264),
    [sym_decimal] = ACTIONS(266),
    [sym_binary] = ACTIONS(266),
    [sym_hexadecimal] = ACTIONS(266),
    [sym_octal] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [sym_complex] = ACTIONS(266),
    [sym_boolean] = ACTIONS(266),
    [sym_none] = ACTIONS(266),
    [aux_sym_expression_token1] = ACTIONS(264),
    [aux_sym_expression_token2] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [aux_sym_list_token1] = ACTIONS(264),
    [aux_sym_list_token2] = ACTIONS(264),
    [aux_sym_set_token1] = ACTIONS(264),
    [aux_sym_set_token2] = ACTIONS(264),
    [aux_sym_dictionary_token1] = ACTIONS(264),
    [sym_keyword] = ACTIONS(264),
    [sym_string] = ACTIONS(264),
    [aux_sym_fstring_token1] = ACTIONS(264),
    [sym_bstring] = ACTIONS(264),
    [sym_raw_string] = ACTIONS(264),
    [aux_sym_raw_fstring_token1] = ACTIONS(266),
    [sym_raw_bstring] = ACTIONS(264),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_symbol] = ACTIONS(270),
    [sym_comment] = ACTIONS(268),
    [sym_discard_prefix] = ACTIONS(268),
    [sym_decimal] = ACTIONS(270),
    [sym_binary] = ACTIONS(270),
    [sym_hexadecimal] = ACTIONS(270),
    [sym_octal] = ACTIONS(270),
    [sym_float] = ACTIONS(270),
    [sym_complex] = ACTIONS(270),
    [sym_boolean] = ACTIONS(270),
    [sym_none] = ACTIONS(270),
    [aux_sym_expression_token1] = ACTIONS(268),
    [aux_sym_expression_token2] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [aux_sym_list_token1] = ACTIONS(268),
    [aux_sym_list_token2] = ACTIONS(268),
    [aux_sym_set_token1] = ACTIONS(268),
    [aux_sym_set_token2] = ACTIONS(268),
    [aux_sym_dictionary_token1] = ACTIONS(268),
    [sym_keyword] = ACTIONS(268),
    [sym_string] = ACTIONS(268),
    [aux_sym_fstring_token1] = ACTIONS(268),
    [sym_bstring] = ACTIONS(268),
    [sym_raw_string] = ACTIONS(268),
    [aux_sym_raw_fstring_token1] = ACTIONS(270),
    [sym_raw_bstring] = ACTIONS(268),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_symbol] = ACTIONS(274),
    [sym_comment] = ACTIONS(272),
    [sym_discard_prefix] = ACTIONS(272),
    [sym_decimal] = ACTIONS(274),
    [sym_binary] = ACTIONS(274),
    [sym_hexadecimal] = ACTIONS(274),
    [sym_octal] = ACTIONS(274),
    [sym_float] = ACTIONS(274),
    [sym_complex] = ACTIONS(274),
    [sym_boolean] = ACTIONS(274),
    [sym_none] = ACTIONS(274),
    [aux_sym_expression_token1] = ACTIONS(272),
    [aux_sym_expression_token2] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [aux_sym_list_token1] = ACTIONS(272),
    [aux_sym_list_token2] = ACTIONS(272),
    [aux_sym_set_token1] = ACTIONS(272),
    [aux_sym_set_token2] = ACTIONS(272),
    [aux_sym_dictionary_token1] = ACTIONS(272),
    [sym_keyword] = ACTIONS(272),
    [sym_string] = ACTIONS(272),
    [aux_sym_fstring_token1] = ACTIONS(272),
    [sym_bstring] = ACTIONS(272),
    [sym_raw_string] = ACTIONS(272),
    [aux_sym_raw_fstring_token1] = ACTIONS(274),
    [sym_raw_bstring] = ACTIONS(272),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym_symbol] = ACTIONS(278),
    [sym_comment] = ACTIONS(276),
    [sym_discard_prefix] = ACTIONS(276),
    [sym_decimal] = ACTIONS(278),
    [sym_binary] = ACTIONS(278),
    [sym_hexadecimal] = ACTIONS(278),
    [sym_octal] = ACTIONS(278),
    [sym_float] = ACTIONS(278),
    [sym_complex] = ACTIONS(278),
    [sym_boolean] = ACTIONS(278),
    [sym_none] = ACTIONS(278),
    [aux_sym_expression_token1] = ACTIONS(276),
    [aux_sym_expression_token2] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [aux_sym_list_token1] = ACTIONS(276),
    [aux_sym_list_token2] = ACTIONS(276),
    [aux_sym_set_token1] = ACTIONS(276),
    [aux_sym_set_token2] = ACTIONS(276),
    [aux_sym_dictionary_token1] = ACTIONS(276),
    [sym_keyword] = ACTIONS(276),
    [sym_string] = ACTIONS(276),
    [aux_sym_fstring_token1] = ACTIONS(276),
    [sym_bstring] = ACTIONS(276),
    [sym_raw_string] = ACTIONS(276),
    [aux_sym_raw_fstring_token1] = ACTIONS(278),
    [sym_raw_bstring] = ACTIONS(276),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_symbol] = ACTIONS(282),
    [sym_comment] = ACTIONS(280),
    [sym_discard_prefix] = ACTIONS(280),
    [sym_decimal] = ACTIONS(282),
    [sym_binary] = ACTIONS(282),
    [sym_hexadecimal] = ACTIONS(282),
    [sym_octal] = ACTIONS(282),
    [sym_float] = ACTIONS(282),
    [sym_complex] = ACTIONS(282),
    [sym_boolean] = ACTIONS(282),
    [sym_none] = ACTIONS(282),
    [aux_sym_expression_token1] = ACTIONS(280),
    [aux_sym_expression_token2] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [aux_sym_list_token1] = ACTIONS(280),
    [aux_sym_list_token2] = ACTIONS(280),
    [aux_sym_set_token1] = ACTIONS(280),
    [aux_sym_set_token2] = ACTIONS(280),
    [aux_sym_dictionary_token1] = ACTIONS(280),
    [sym_keyword] = ACTIONS(280),
    [sym_string] = ACTIONS(280),
    [aux_sym_fstring_token1] = ACTIONS(280),
    [sym_bstring] = ACTIONS(280),
    [sym_raw_string] = ACTIONS(280),
    [aux_sym_raw_fstring_token1] = ACTIONS(282),
    [sym_raw_bstring] = ACTIONS(280),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_symbol] = ACTIONS(286),
    [sym_comment] = ACTIONS(284),
    [sym_discard_prefix] = ACTIONS(284),
    [sym_decimal] = ACTIONS(286),
    [sym_binary] = ACTIONS(286),
    [sym_hexadecimal] = ACTIONS(286),
    [sym_octal] = ACTIONS(286),
    [sym_float] = ACTIONS(286),
    [sym_complex] = ACTIONS(286),
    [sym_boolean] = ACTIONS(286),
    [sym_none] = ACTIONS(286),
    [aux_sym_expression_token1] = ACTIONS(284),
    [aux_sym_expression_token2] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [aux_sym_list_token1] = ACTIONS(284),
    [aux_sym_list_token2] = ACTIONS(284),
    [aux_sym_set_token1] = ACTIONS(284),
    [aux_sym_set_token2] = ACTIONS(284),
    [aux_sym_dictionary_token1] = ACTIONS(284),
    [sym_keyword] = ACTIONS(284),
    [sym_string] = ACTIONS(284),
    [aux_sym_fstring_token1] = ACTIONS(284),
    [sym_bstring] = ACTIONS(284),
    [sym_raw_string] = ACTIONS(284),
    [aux_sym_raw_fstring_token1] = ACTIONS(286),
    [sym_raw_bstring] = ACTIONS(284),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_symbol] = ACTIONS(290),
    [sym_comment] = ACTIONS(288),
    [sym_discard_prefix] = ACTIONS(288),
    [sym_decimal] = ACTIONS(290),
    [sym_binary] = ACTIONS(290),
    [sym_hexadecimal] = ACTIONS(290),
    [sym_octal] = ACTIONS(290),
    [sym_float] = ACTIONS(290),
    [sym_complex] = ACTIONS(290),
    [sym_boolean] = ACTIONS(290),
    [sym_none] = ACTIONS(290),
    [aux_sym_expression_token1] = ACTIONS(288),
    [aux_sym_expression_token2] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [aux_sym_list_token1] = ACTIONS(288),
    [aux_sym_list_token2] = ACTIONS(288),
    [aux_sym_set_token1] = ACTIONS(288),
    [aux_sym_set_token2] = ACTIONS(288),
    [aux_sym_dictionary_token1] = ACTIONS(288),
    [sym_keyword] = ACTIONS(288),
    [sym_string] = ACTIONS(288),
    [aux_sym_fstring_token1] = ACTIONS(288),
    [sym_bstring] = ACTIONS(288),
    [sym_raw_string] = ACTIONS(288),
    [aux_sym_raw_fstring_token1] = ACTIONS(290),
    [sym_raw_bstring] = ACTIONS(288),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_symbol] = ACTIONS(294),
    [sym_comment] = ACTIONS(292),
    [sym_discard_prefix] = ACTIONS(292),
    [sym_decimal] = ACTIONS(294),
    [sym_binary] = ACTIONS(294),
    [sym_hexadecimal] = ACTIONS(294),
    [sym_octal] = ACTIONS(294),
    [sym_float] = ACTIONS(294),
    [sym_complex] = ACTIONS(294),
    [sym_boolean] = ACTIONS(294),
    [sym_none] = ACTIONS(294),
    [aux_sym_expression_token1] = ACTIONS(292),
    [aux_sym_expression_token2] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [aux_sym_list_token1] = ACTIONS(292),
    [aux_sym_list_token2] = ACTIONS(292),
    [aux_sym_set_token1] = ACTIONS(292),
    [aux_sym_set_token2] = ACTIONS(292),
    [aux_sym_dictionary_token1] = ACTIONS(292),
    [sym_keyword] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [aux_sym_fstring_token1] = ACTIONS(292),
    [sym_bstring] = ACTIONS(292),
    [sym_raw_string] = ACTIONS(292),
    [aux_sym_raw_fstring_token1] = ACTIONS(294),
    [sym_raw_bstring] = ACTIONS(292),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym_symbol] = ACTIONS(298),
    [sym_comment] = ACTIONS(296),
    [sym_discard_prefix] = ACTIONS(296),
    [sym_decimal] = ACTIONS(298),
    [sym_binary] = ACTIONS(298),
    [sym_hexadecimal] = ACTIONS(298),
    [sym_octal] = ACTIONS(298),
    [sym_float] = ACTIONS(298),
    [sym_complex] = ACTIONS(298),
    [sym_boolean] = ACTIONS(298),
    [sym_none] = ACTIONS(298),
    [aux_sym_expression_token1] = ACTIONS(296),
    [aux_sym_expression_token2] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [aux_sym_list_token1] = ACTIONS(296),
    [aux_sym_list_token2] = ACTIONS(296),
    [aux_sym_set_token1] = ACTIONS(296),
    [aux_sym_set_token2] = ACTIONS(296),
    [aux_sym_dictionary_token1] = ACTIONS(296),
    [sym_keyword] = ACTIONS(296),
    [sym_string] = ACTIONS(296),
    [aux_sym_fstring_token1] = ACTIONS(296),
    [sym_bstring] = ACTIONS(296),
    [sym_raw_string] = ACTIONS(296),
    [aux_sym_raw_fstring_token1] = ACTIONS(298),
    [sym_raw_bstring] = ACTIONS(296),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_symbol] = ACTIONS(302),
    [sym_comment] = ACTIONS(300),
    [sym_discard_prefix] = ACTIONS(300),
    [sym_decimal] = ACTIONS(302),
    [sym_binary] = ACTIONS(302),
    [sym_hexadecimal] = ACTIONS(302),
    [sym_octal] = ACTIONS(302),
    [sym_float] = ACTIONS(302),
    [sym_complex] = ACTIONS(302),
    [sym_boolean] = ACTIONS(302),
    [sym_none] = ACTIONS(302),
    [aux_sym_expression_token1] = ACTIONS(300),
    [aux_sym_expression_token2] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [aux_sym_list_token1] = ACTIONS(300),
    [aux_sym_list_token2] = ACTIONS(300),
    [aux_sym_set_token1] = ACTIONS(300),
    [aux_sym_set_token2] = ACTIONS(300),
    [aux_sym_dictionary_token1] = ACTIONS(300),
    [sym_keyword] = ACTIONS(300),
    [sym_string] = ACTIONS(300),
    [aux_sym_fstring_token1] = ACTIONS(300),
    [sym_bstring] = ACTIONS(300),
    [sym_raw_string] = ACTIONS(300),
    [aux_sym_raw_fstring_token1] = ACTIONS(302),
    [sym_raw_bstring] = ACTIONS(300),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(304), 10,
      sym_decimal,
      sym_binary,
      sym_hexadecimal,
      sym_octal,
      sym_float,
      sym_complex,
      sym_boolean,
      sym_none,
      sym_symbol,
      aux_sym_raw_fstring_token1,
    ACTIONS(306), 13,
      sym_discard_prefix,
      aux_sym_expression_token1,
      anon_sym_SQUOTE,
      aux_sym_list_token1,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_dictionary_token1,
      sym_keyword,
      sym_string,
      aux_sym_fstring_token1,
      sym_bstring,
      sym_raw_string,
      sym_raw_bstring,
  [28] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(310), 1,
      aux_sym_fstring_token2,
    ACTIONS(312), 1,
      aux_sym_fstring_token4,
    STATE(50), 1,
      aux_sym_fstring_repeat1,
  [41] = 4,
    ACTIONS(314), 1,
      aux_sym_dictionary_token1,
    ACTIONS(317), 1,
      aux_sym_fstring_token2,
    ACTIONS(320), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [54] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(322), 1,
      aux_sym_fstring_token2,
    ACTIONS(324), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [67] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(322), 1,
      aux_sym_fstring_token2,
    ACTIONS(326), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [80] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(328), 1,
      aux_sym_fstring_token2,
    ACTIONS(330), 1,
      aux_sym_fstring_token4,
    STATE(47), 1,
      aux_sym_fstring_repeat1,
  [93] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(332), 1,
      aux_sym_fstring_token2,
    ACTIONS(334), 1,
      aux_sym_fstring_token4,
    STATE(52), 1,
      aux_sym_fstring_repeat1,
  [106] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(322), 1,
      aux_sym_fstring_token2,
    ACTIONS(336), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [119] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(338), 1,
      aux_sym_fstring_token2,
    ACTIONS(340), 1,
      aux_sym_fstring_token4,
    STATE(46), 1,
      aux_sym_fstring_repeat1,
  [132] = 4,
    ACTIONS(308), 1,
      aux_sym_dictionary_token1,
    ACTIONS(322), 1,
      aux_sym_fstring_token2,
    ACTIONS(342), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [145] = 2,
    ACTIONS(346), 1,
      aux_sym_fstring_token2,
    ACTIONS(344), 2,
      aux_sym_dictionary_token1,
      aux_sym_fstring_token4,
  [153] = 2,
    ACTIONS(224), 1,
      aux_sym_expression_token1,
    STATE(65), 1,
      sym_expression,
  [160] = 2,
    ACTIONS(15), 1,
      aux_sym_expression_token1,
    STATE(33), 1,
      sym_expression,
  [167] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [171] = 1,
    ACTIONS(244), 1,
      aux_sym_fstring_token3,
  [175] = 1,
    ACTIONS(280), 1,
      aux_sym_fstring_token3,
  [179] = 1,
    ACTIONS(272), 1,
      aux_sym_fstring_token3,
  [183] = 1,
    ACTIONS(248), 1,
      aux_sym_fstring_token3,
  [187] = 1,
    ACTIONS(350), 1,
      aux_sym_discard_token1,
  [191] = 1,
    ACTIONS(296), 1,
      aux_sym_fstring_token3,
  [195] = 1,
    ACTIONS(352), 1,
      aux_sym_fstring_token3,
  [199] = 1,
    ACTIONS(252), 1,
      aux_sym_fstring_token3,
  [203] = 1,
    ACTIONS(264), 1,
      aux_sym_fstring_token3,
  [207] = 1,
    ACTIONS(276), 1,
      aux_sym_fstring_token3,
  [211] = 1,
    ACTIONS(292), 1,
      aux_sym_fstring_token3,
  [215] = 1,
    ACTIONS(300), 1,
      aux_sym_fstring_token3,
  [219] = 1,
    ACTIONS(354), 1,
      aux_sym_discard_token1,
  [223] = 1,
    ACTIONS(288), 1,
      aux_sym_fstring_token3,
  [227] = 1,
    ACTIONS(284), 1,
      aux_sym_fstring_token3,
  [231] = 1,
    ACTIONS(256), 1,
      aux_sym_fstring_token3,
  [235] = 1,
    ACTIONS(260), 1,
      aux_sym_fstring_token3,
  [239] = 1,
    ACTIONS(268), 1,
      aux_sym_fstring_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 28,
  [SMALL_STATE(45)] = 41,
  [SMALL_STATE(46)] = 54,
  [SMALL_STATE(47)] = 67,
  [SMALL_STATE(48)] = 80,
  [SMALL_STATE(49)] = 93,
  [SMALL_STATE(50)] = 106,
  [SMALL_STATE(51)] = 119,
  [SMALL_STATE(52)] = 132,
  [SMALL_STATE(53)] = 145,
  [SMALL_STATE(54)] = 153,
  [SMALL_STATE(55)] = 160,
  [SMALL_STATE(56)] = 167,
  [SMALL_STATE(57)] = 171,
  [SMALL_STATE(58)] = 175,
  [SMALL_STATE(59)] = 179,
  [SMALL_STATE(60)] = 183,
  [SMALL_STATE(61)] = 187,
  [SMALL_STATE(62)] = 191,
  [SMALL_STATE(63)] = 195,
  [SMALL_STATE(64)] = 199,
  [SMALL_STATE(65)] = 203,
  [SMALL_STATE(66)] = 207,
  [SMALL_STATE(67)] = 211,
  [SMALL_STATE(68)] = 215,
  [SMALL_STATE(69)] = 219,
  [SMALL_STATE(70)] = 223,
  [SMALL_STATE(71)] = 227,
  [SMALL_STATE(72)] = 231,
  [SMALL_STATE(73)] = 235,
  [SMALL_STATE(74)] = 239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 3, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 3, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
