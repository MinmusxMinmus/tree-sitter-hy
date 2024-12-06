#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  sym_nan = 10,
  sym_infinity = 11,
  sym_numeric_float = 12,
  sym_complex = 13,
  sym_boolean = 14,
  sym_none = 15,
  aux_sym_expression_token1 = 16,
  aux_sym_expression_token2 = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_list_token1 = 19,
  aux_sym_list_token2 = 20,
  aux_sym_set_token1 = 21,
  aux_sym_set_token2 = 22,
  aux_sym_dictionary_token1 = 23,
  sym_keyword = 24,
  sym_string = 25,
  aux_sym_fstring_token1 = 26,
  aux_sym_fstring_token2 = 27,
  aux_sym_fstring_token3 = 28,
  aux_sym_fstring_token4 = 29,
  sym_bstring = 30,
  sym_raw_string = 31,
  aux_sym_raw_fstring_token1 = 32,
  sym_raw_bstring = 33,
  sym_program = 34,
  sym__item = 35,
  sym__form = 36,
  sym_discard = 37,
  sym__literal = 38,
  sym__number = 39,
  sym_integer = 40,
  sym_float = 41,
  sym_expression = 42,
  sym_quoted_expression = 43,
  sym_list = 44,
  sym_set = 45,
  sym_dictionary = 46,
  sym_dictionary_item = 47,
  sym__keywords_with_values = 48,
  sym__string = 49,
  sym_fstring = 50,
  sym_raw_fstring = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_expression_repeat1 = 53,
  aux_sym_dictionary_repeat1 = 54,
  aux_sym_fstring_repeat1 = 55,
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
  [sym_nan] = "nan",
  [sym_infinity] = "infinity",
  [sym_numeric_float] = "numeric_float",
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
  [sym_float] = "float",
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
  [sym_nan] = sym_nan,
  [sym_infinity] = sym_infinity,
  [sym_numeric_float] = sym_numeric_float,
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
  [sym_float] = sym_float,
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
  [sym_nan] = {
    .visible = true,
    .named = true,
  },
  [sym_infinity] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_float] = {
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
  [sym_float] = {
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
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 14,
  [20] = 17,
  [21] = 13,
  [22] = 12,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
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
  [48] = 48,
  [49] = 48,
  [50] = 46,
  [51] = 51,
  [52] = 45,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 28,
  [58] = 42,
  [59] = 59,
  [60] = 30,
  [61] = 35,
  [62] = 40,
  [63] = 39,
  [64] = 41,
  [65] = 43,
  [66] = 29,
  [67] = 31,
  [68] = 32,
  [69] = 33,
  [70] = 34,
  [71] = 36,
  [72] = 72,
  [73] = 73,
  [74] = 37,
  [75] = 73,
  [76] = 38,
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
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 76,
        '#', 1,
        '\'', 45,
        '(', 43,
        ')', 44,
        '.', 37,
        '0', 30,
        ':', 18,
        ';', 27,
        'I', 62,
        'N', 60,
        '[', 46,
        ']', 47,
        'b', 52,
        'f', 53,
        'r', 56,
        '{', 50,
        '}', 49,
        '+', 58,
        '-', 58,
        ',', 58,
        '_', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '{') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(41);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 18:
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 6,
        '#', 1,
        '\'', 45,
        '(', 43,
        ')', 44,
        '.', 37,
        '0', 30,
        ':', 18,
        ';', 27,
        'I', 62,
        'N', 60,
        '[', 46,
        ']', 47,
        'b', 52,
        'f', 53,
        'r', 56,
        '{', 50,
        '}', 49,
        '+', 58,
        '-', 58,
        ',', 58,
        '_', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(69);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_discard_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_discard_prefix);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_decimal);
      ADVANCE_MAP(
        '.', 38,
        '[', 7,
        ',', 30,
        '_', 30,
        'B', 64,
        'b', 64,
        'E', 63,
        'e', 63,
        'J', 42,
        'j', 42,
        'O', 65,
        'o', 65,
        'X', 66,
        'x', 66,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(42);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_nan);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_infinity);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_complex);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_list_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_set_token2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      if (lookahead == '{') ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(57);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(54);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(79);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(68);
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
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(69);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(5);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(59);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(36);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(61);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 68:
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
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_fstring_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_fstring_token3);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_fstring_token4);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_bstring);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_raw_fstring_token1);
      END_STATE();
    case 80:
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
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 11},
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
    [sym_nan] = ACTIONS(1),
    [sym_infinity] = ACTIONS(1),
    [sym_numeric_float] = ACTIONS(1),
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
    [sym_program] = STATE(72),
    [sym__item] = STATE(3),
    [sym__form] = STATE(3),
    [sym_discard] = STATE(3),
    [sym__literal] = STATE(3),
    [sym__number] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_float] = STATE(3),
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(9),
    [sym_raw_string] = ACTIONS(9),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(9),
  },
  [2] = {
    [sym__item] = STATE(4),
    [sym__form] = STATE(4),
    [sym_discard] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__number] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_float] = STATE(4),
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
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(33),
    [sym_boolean] = ACTIONS(33),
    [sym_none] = ACTIONS(33),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(35),
    [sym_raw_string] = ACTIONS(35),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(35),
  },
  [3] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_symbol] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(37),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(39),
  },
  [4] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_symbol] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(37),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(39),
  },
  [5] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_discard] = STATE(5),
    [sym__literal] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym__keywords_with_values] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [sym_comment] = ACTIONS(48),
    [sym_discard_prefix] = ACTIONS(51),
    [sym_decimal] = ACTIONS(54),
    [sym_binary] = ACTIONS(54),
    [sym_hexadecimal] = ACTIONS(54),
    [sym_octal] = ACTIONS(54),
    [sym_nan] = ACTIONS(57),
    [sym_infinity] = ACTIONS(57),
    [sym_numeric_float] = ACTIONS(57),
    [sym_complex] = ACTIONS(45),
    [sym_boolean] = ACTIONS(45),
    [sym_none] = ACTIONS(45),
    [aux_sym_expression_token1] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [aux_sym_list_token1] = ACTIONS(66),
    [aux_sym_set_token1] = ACTIONS(69),
    [aux_sym_dictionary_token1] = ACTIONS(72),
    [sym_keyword] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [aux_sym_fstring_token1] = ACTIONS(75),
    [sym_bstring] = ACTIONS(48),
    [sym_raw_string] = ACTIONS(48),
    [aux_sym_raw_fstring_token1] = ACTIONS(78),
    [sym_raw_bstring] = ACTIONS(48),
  },
  [6] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(81),
    [sym_discard_prefix] = ACTIONS(84),
    [sym_decimal] = ACTIONS(87),
    [sym_binary] = ACTIONS(87),
    [sym_hexadecimal] = ACTIONS(87),
    [sym_octal] = ACTIONS(87),
    [sym_nan] = ACTIONS(90),
    [sym_infinity] = ACTIONS(90),
    [sym_numeric_float] = ACTIONS(90),
    [sym_complex] = ACTIONS(81),
    [sym_boolean] = ACTIONS(81),
    [sym_none] = ACTIONS(81),
    [aux_sym_expression_token1] = ACTIONS(93),
    [aux_sym_expression_token2] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_list_token1] = ACTIONS(101),
    [aux_sym_list_token2] = ACTIONS(96),
    [aux_sym_set_token1] = ACTIONS(104),
    [aux_sym_set_token2] = ACTIONS(96),
    [aux_sym_dictionary_token1] = ACTIONS(107),
    [sym_keyword] = ACTIONS(110),
    [sym_string] = ACTIONS(110),
    [aux_sym_fstring_token1] = ACTIONS(113),
    [sym_bstring] = ACTIONS(110),
    [sym_raw_string] = ACTIONS(110),
    [aux_sym_raw_fstring_token1] = ACTIONS(116),
    [sym_raw_bstring] = ACTIONS(110),
  },
  [7] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
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
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(119),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(121),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(123),
    [sym_raw_string] = ACTIONS(123),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(123),
  },
  [8] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
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
    [sym_symbol] = ACTIONS(125),
    [sym_discard_prefix] = ACTIONS(128),
    [sym_decimal] = ACTIONS(131),
    [sym_binary] = ACTIONS(131),
    [sym_hexadecimal] = ACTIONS(131),
    [sym_octal] = ACTIONS(131),
    [sym_nan] = ACTIONS(134),
    [sym_infinity] = ACTIONS(134),
    [sym_numeric_float] = ACTIONS(134),
    [sym_complex] = ACTIONS(125),
    [sym_boolean] = ACTIONS(125),
    [sym_none] = ACTIONS(125),
    [aux_sym_expression_token1] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [aux_sym_list_token1] = ACTIONS(143),
    [aux_sym_set_token1] = ACTIONS(146),
    [aux_sym_set_token2] = ACTIONS(149),
    [aux_sym_dictionary_token1] = ACTIONS(151),
    [sym_keyword] = ACTIONS(154),
    [sym_string] = ACTIONS(154),
    [aux_sym_fstring_token1] = ACTIONS(157),
    [sym_bstring] = ACTIONS(154),
    [sym_raw_string] = ACTIONS(154),
    [aux_sym_raw_fstring_token1] = ACTIONS(160),
    [sym_raw_bstring] = ACTIONS(154),
  },
  [9] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
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
    [sym_symbol] = ACTIONS(119),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(119),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(163),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(123),
    [sym_raw_string] = ACTIONS(123),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(123),
  },
  [10] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
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
    [sym_symbol] = ACTIONS(119),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(119),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(165),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(123),
    [sym_raw_string] = ACTIONS(123),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(123),
  },
  [11] = {
    [sym__form] = STATE(25),
    [sym_discard] = STATE(25),
    [sym__literal] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
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
    [sym_symbol] = ACTIONS(119),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(119),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(167),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(123),
    [sym_string] = ACTIONS(123),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(123),
    [sym_raw_string] = ACTIONS(123),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(123),
  },
  [12] = {
    [sym__form] = STATE(17),
    [sym_discard] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__number] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_float] = STATE(17),
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
    [sym_symbol] = ACTIONS(169),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(169),
    [sym_boolean] = ACTIONS(169),
    [sym_none] = ACTIONS(169),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_list_token2] = ACTIONS(171),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(173),
    [sym_string] = ACTIONS(173),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(173),
    [sym_raw_string] = ACTIONS(173),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(173),
  },
  [13] = {
    [sym__form] = STATE(16),
    [sym_discard] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__number] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_float] = STATE(16),
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
    [sym_symbol] = ACTIONS(175),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(175),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(177),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(179),
    [sym_string] = ACTIONS(179),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(179),
    [sym_raw_string] = ACTIONS(179),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(179),
  },
  [14] = {
    [sym__form] = STATE(15),
    [sym_discard] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__number] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_float] = STATE(15),
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
    [sym_symbol] = ACTIONS(181),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(181),
    [sym_boolean] = ACTIONS(181),
    [sym_none] = ACTIONS(181),
    [aux_sym_expression_token1] = ACTIONS(17),
    [aux_sym_expression_token2] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(185),
    [sym_raw_string] = ACTIONS(185),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(185),
  },
  [15] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [aux_sym_expression_token2] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [16] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(193),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [17] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_list_token2] = ACTIONS(195),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [18] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [aux_sym_expression_token2] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [19] = {
    [sym__form] = STATE(18),
    [sym_discard] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_float] = STATE(18),
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
    [sym_symbol] = ACTIONS(199),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(199),
    [sym_boolean] = ACTIONS(199),
    [sym_none] = ACTIONS(199),
    [aux_sym_expression_token1] = ACTIONS(17),
    [aux_sym_expression_token2] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(203),
    [sym_string] = ACTIONS(203),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(203),
    [sym_raw_string] = ACTIONS(203),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(203),
  },
  [20] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_list_token2] = ACTIONS(205),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [21] = {
    [sym__form] = STATE(23),
    [sym_discard] = STATE(23),
    [sym__literal] = STATE(23),
    [sym__number] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_float] = STATE(23),
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
    [sym_symbol] = ACTIONS(207),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(207),
    [sym_boolean] = ACTIONS(207),
    [sym_none] = ACTIONS(207),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(209),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(211),
    [sym_string] = ACTIONS(211),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(211),
    [sym_raw_string] = ACTIONS(211),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(211),
  },
  [22] = {
    [sym__form] = STATE(20),
    [sym_discard] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__number] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_float] = STATE(20),
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
    [sym_symbol] = ACTIONS(213),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(213),
    [sym_boolean] = ACTIONS(213),
    [sym_none] = ACTIONS(213),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_list_token2] = ACTIONS(215),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(217),
    [sym_string] = ACTIONS(217),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(217),
    [sym_raw_string] = ACTIONS(217),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(217),
  },
  [23] = {
    [sym__form] = STATE(6),
    [sym_discard] = STATE(6),
    [sym__literal] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym__keywords_with_values] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [aux_sym_expression_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(187),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [sym_none] = ACTIONS(187),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_set_token2] = ACTIONS(219),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(191),
    [sym_string] = ACTIONS(191),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(191),
    [sym_raw_string] = ACTIONS(191),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(191),
  },
  [24] = {
    [sym__form] = STATE(31),
    [sym_discard] = STATE(31),
    [sym__literal] = STATE(31),
    [sym__number] = STATE(31),
    [sym_integer] = STATE(31),
    [sym_float] = STATE(31),
    [sym_expression] = STATE(31),
    [sym_quoted_expression] = STATE(31),
    [sym_list] = STATE(31),
    [sym_set] = STATE(31),
    [sym_dictionary] = STATE(31),
    [sym__keywords_with_values] = STATE(31),
    [sym__string] = STATE(31),
    [sym_fstring] = STATE(31),
    [sym_raw_fstring] = STATE(31),
    [sym_symbol] = ACTIONS(221),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(221),
    [sym_boolean] = ACTIONS(221),
    [sym_none] = ACTIONS(221),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(223),
    [sym_raw_string] = ACTIONS(223),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(223),
  },
  [25] = {
    [sym__form] = STATE(44),
    [sym_discard] = STATE(44),
    [sym__literal] = STATE(44),
    [sym__number] = STATE(44),
    [sym_integer] = STATE(44),
    [sym_float] = STATE(44),
    [sym_expression] = STATE(44),
    [sym_quoted_expression] = STATE(44),
    [sym_list] = STATE(44),
    [sym_set] = STATE(44),
    [sym_dictionary] = STATE(44),
    [sym__keywords_with_values] = STATE(44),
    [sym__string] = STATE(44),
    [sym_fstring] = STATE(44),
    [sym_raw_fstring] = STATE(44),
    [sym_symbol] = ACTIONS(225),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(225),
    [sym_boolean] = ACTIONS(225),
    [sym_none] = ACTIONS(225),
    [aux_sym_expression_token1] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_list_token1] = ACTIONS(21),
    [aux_sym_set_token1] = ACTIONS(23),
    [aux_sym_dictionary_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(227),
    [sym_string] = ACTIONS(227),
    [aux_sym_fstring_token1] = ACTIONS(27),
    [sym_bstring] = ACTIONS(227),
    [sym_raw_string] = ACTIONS(227),
    [aux_sym_raw_fstring_token1] = ACTIONS(29),
    [sym_raw_bstring] = ACTIONS(227),
  },
  [26] = {
    [sym__form] = STATE(59),
    [sym_discard] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__number] = STATE(59),
    [sym_integer] = STATE(59),
    [sym_float] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_quoted_expression] = STATE(59),
    [sym_list] = STATE(59),
    [sym_set] = STATE(59),
    [sym_dictionary] = STATE(59),
    [sym__keywords_with_values] = STATE(59),
    [sym__string] = STATE(59),
    [sym_fstring] = STATE(59),
    [sym_raw_fstring] = STATE(59),
    [sym_symbol] = ACTIONS(229),
    [sym_discard_prefix] = ACTIONS(231),
    [sym_decimal] = ACTIONS(233),
    [sym_binary] = ACTIONS(233),
    [sym_hexadecimal] = ACTIONS(233),
    [sym_octal] = ACTIONS(233),
    [sym_nan] = ACTIONS(235),
    [sym_infinity] = ACTIONS(235),
    [sym_numeric_float] = ACTIONS(235),
    [sym_complex] = ACTIONS(229),
    [sym_boolean] = ACTIONS(229),
    [sym_none] = ACTIONS(229),
    [aux_sym_expression_token1] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [aux_sym_list_token1] = ACTIONS(241),
    [aux_sym_set_token1] = ACTIONS(243),
    [aux_sym_dictionary_token1] = ACTIONS(245),
    [sym_keyword] = ACTIONS(247),
    [sym_string] = ACTIONS(247),
    [aux_sym_fstring_token1] = ACTIONS(249),
    [sym_bstring] = ACTIONS(247),
    [sym_raw_string] = ACTIONS(247),
    [aux_sym_raw_fstring_token1] = ACTIONS(251),
    [sym_raw_bstring] = ACTIONS(247),
  },
  [27] = {
    [sym__form] = STATE(67),
    [sym_discard] = STATE(67),
    [sym__literal] = STATE(67),
    [sym__number] = STATE(67),
    [sym_integer] = STATE(67),
    [sym_float] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_quoted_expression] = STATE(67),
    [sym_list] = STATE(67),
    [sym_set] = STATE(67),
    [sym_dictionary] = STATE(67),
    [sym__keywords_with_values] = STATE(67),
    [sym__string] = STATE(67),
    [sym_fstring] = STATE(67),
    [sym_raw_fstring] = STATE(67),
    [sym_symbol] = ACTIONS(253),
    [sym_discard_prefix] = ACTIONS(231),
    [sym_decimal] = ACTIONS(233),
    [sym_binary] = ACTIONS(233),
    [sym_hexadecimal] = ACTIONS(233),
    [sym_octal] = ACTIONS(233),
    [sym_nan] = ACTIONS(235),
    [sym_infinity] = ACTIONS(235),
    [sym_numeric_float] = ACTIONS(235),
    [sym_complex] = ACTIONS(253),
    [sym_boolean] = ACTIONS(253),
    [sym_none] = ACTIONS(253),
    [aux_sym_expression_token1] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [aux_sym_list_token1] = ACTIONS(241),
    [aux_sym_set_token1] = ACTIONS(243),
    [aux_sym_dictionary_token1] = ACTIONS(245),
    [sym_keyword] = ACTIONS(255),
    [sym_string] = ACTIONS(255),
    [aux_sym_fstring_token1] = ACTIONS(249),
    [sym_bstring] = ACTIONS(255),
    [sym_raw_string] = ACTIONS(255),
    [aux_sym_raw_fstring_token1] = ACTIONS(251),
    [sym_raw_bstring] = ACTIONS(255),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_symbol] = ACTIONS(259),
    [sym_comment] = ACTIONS(257),
    [sym_discard_prefix] = ACTIONS(257),
    [sym_decimal] = ACTIONS(259),
    [sym_binary] = ACTIONS(259),
    [sym_hexadecimal] = ACTIONS(259),
    [sym_octal] = ACTIONS(259),
    [sym_nan] = ACTIONS(259),
    [sym_infinity] = ACTIONS(259),
    [sym_numeric_float] = ACTIONS(259),
    [sym_complex] = ACTIONS(259),
    [sym_boolean] = ACTIONS(259),
    [sym_none] = ACTIONS(259),
    [aux_sym_expression_token1] = ACTIONS(257),
    [aux_sym_expression_token2] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [aux_sym_list_token1] = ACTIONS(257),
    [aux_sym_list_token2] = ACTIONS(257),
    [aux_sym_set_token1] = ACTIONS(257),
    [aux_sym_set_token2] = ACTIONS(257),
    [aux_sym_dictionary_token1] = ACTIONS(257),
    [sym_keyword] = ACTIONS(257),
    [sym_string] = ACTIONS(257),
    [aux_sym_fstring_token1] = ACTIONS(257),
    [sym_bstring] = ACTIONS(257),
    [sym_raw_string] = ACTIONS(257),
    [aux_sym_raw_fstring_token1] = ACTIONS(259),
    [sym_raw_bstring] = ACTIONS(257),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_symbol] = ACTIONS(263),
    [sym_comment] = ACTIONS(261),
    [sym_discard_prefix] = ACTIONS(261),
    [sym_decimal] = ACTIONS(263),
    [sym_binary] = ACTIONS(263),
    [sym_hexadecimal] = ACTIONS(263),
    [sym_octal] = ACTIONS(263),
    [sym_nan] = ACTIONS(263),
    [sym_infinity] = ACTIONS(263),
    [sym_numeric_float] = ACTIONS(263),
    [sym_complex] = ACTIONS(263),
    [sym_boolean] = ACTIONS(263),
    [sym_none] = ACTIONS(263),
    [aux_sym_expression_token1] = ACTIONS(261),
    [aux_sym_expression_token2] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [aux_sym_list_token1] = ACTIONS(261),
    [aux_sym_list_token2] = ACTIONS(261),
    [aux_sym_set_token1] = ACTIONS(261),
    [aux_sym_set_token2] = ACTIONS(261),
    [aux_sym_dictionary_token1] = ACTIONS(261),
    [sym_keyword] = ACTIONS(261),
    [sym_string] = ACTIONS(261),
    [aux_sym_fstring_token1] = ACTIONS(261),
    [sym_bstring] = ACTIONS(261),
    [sym_raw_string] = ACTIONS(261),
    [aux_sym_raw_fstring_token1] = ACTIONS(263),
    [sym_raw_bstring] = ACTIONS(261),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_symbol] = ACTIONS(267),
    [sym_comment] = ACTIONS(265),
    [sym_discard_prefix] = ACTIONS(265),
    [sym_decimal] = ACTIONS(267),
    [sym_binary] = ACTIONS(267),
    [sym_hexadecimal] = ACTIONS(267),
    [sym_octal] = ACTIONS(267),
    [sym_nan] = ACTIONS(267),
    [sym_infinity] = ACTIONS(267),
    [sym_numeric_float] = ACTIONS(267),
    [sym_complex] = ACTIONS(267),
    [sym_boolean] = ACTIONS(267),
    [sym_none] = ACTIONS(267),
    [aux_sym_expression_token1] = ACTIONS(265),
    [aux_sym_expression_token2] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [aux_sym_list_token1] = ACTIONS(265),
    [aux_sym_list_token2] = ACTIONS(265),
    [aux_sym_set_token1] = ACTIONS(265),
    [aux_sym_set_token2] = ACTIONS(265),
    [aux_sym_dictionary_token1] = ACTIONS(265),
    [sym_keyword] = ACTIONS(265),
    [sym_string] = ACTIONS(265),
    [aux_sym_fstring_token1] = ACTIONS(265),
    [sym_bstring] = ACTIONS(265),
    [sym_raw_string] = ACTIONS(265),
    [aux_sym_raw_fstring_token1] = ACTIONS(267),
    [sym_raw_bstring] = ACTIONS(265),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_symbol] = ACTIONS(271),
    [sym_comment] = ACTIONS(269),
    [sym_discard_prefix] = ACTIONS(269),
    [sym_decimal] = ACTIONS(271),
    [sym_binary] = ACTIONS(271),
    [sym_hexadecimal] = ACTIONS(271),
    [sym_octal] = ACTIONS(271),
    [sym_nan] = ACTIONS(271),
    [sym_infinity] = ACTIONS(271),
    [sym_numeric_float] = ACTIONS(271),
    [sym_complex] = ACTIONS(271),
    [sym_boolean] = ACTIONS(271),
    [sym_none] = ACTIONS(271),
    [aux_sym_expression_token1] = ACTIONS(269),
    [aux_sym_expression_token2] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [aux_sym_list_token1] = ACTIONS(269),
    [aux_sym_list_token2] = ACTIONS(269),
    [aux_sym_set_token1] = ACTIONS(269),
    [aux_sym_set_token2] = ACTIONS(269),
    [aux_sym_dictionary_token1] = ACTIONS(269),
    [sym_keyword] = ACTIONS(269),
    [sym_string] = ACTIONS(269),
    [aux_sym_fstring_token1] = ACTIONS(269),
    [sym_bstring] = ACTIONS(269),
    [sym_raw_string] = ACTIONS(269),
    [aux_sym_raw_fstring_token1] = ACTIONS(271),
    [sym_raw_bstring] = ACTIONS(269),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_symbol] = ACTIONS(275),
    [sym_comment] = ACTIONS(273),
    [sym_discard_prefix] = ACTIONS(273),
    [sym_decimal] = ACTIONS(275),
    [sym_binary] = ACTIONS(275),
    [sym_hexadecimal] = ACTIONS(275),
    [sym_octal] = ACTIONS(275),
    [sym_nan] = ACTIONS(275),
    [sym_infinity] = ACTIONS(275),
    [sym_numeric_float] = ACTIONS(275),
    [sym_complex] = ACTIONS(275),
    [sym_boolean] = ACTIONS(275),
    [sym_none] = ACTIONS(275),
    [aux_sym_expression_token1] = ACTIONS(273),
    [aux_sym_expression_token2] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [aux_sym_list_token1] = ACTIONS(273),
    [aux_sym_list_token2] = ACTIONS(273),
    [aux_sym_set_token1] = ACTIONS(273),
    [aux_sym_set_token2] = ACTIONS(273),
    [aux_sym_dictionary_token1] = ACTIONS(273),
    [sym_keyword] = ACTIONS(273),
    [sym_string] = ACTIONS(273),
    [aux_sym_fstring_token1] = ACTIONS(273),
    [sym_bstring] = ACTIONS(273),
    [sym_raw_string] = ACTIONS(273),
    [aux_sym_raw_fstring_token1] = ACTIONS(275),
    [sym_raw_bstring] = ACTIONS(273),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_symbol] = ACTIONS(279),
    [sym_comment] = ACTIONS(277),
    [sym_discard_prefix] = ACTIONS(277),
    [sym_decimal] = ACTIONS(279),
    [sym_binary] = ACTIONS(279),
    [sym_hexadecimal] = ACTIONS(279),
    [sym_octal] = ACTIONS(279),
    [sym_nan] = ACTIONS(279),
    [sym_infinity] = ACTIONS(279),
    [sym_numeric_float] = ACTIONS(279),
    [sym_complex] = ACTIONS(279),
    [sym_boolean] = ACTIONS(279),
    [sym_none] = ACTIONS(279),
    [aux_sym_expression_token1] = ACTIONS(277),
    [aux_sym_expression_token2] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [aux_sym_list_token1] = ACTIONS(277),
    [aux_sym_list_token2] = ACTIONS(277),
    [aux_sym_set_token1] = ACTIONS(277),
    [aux_sym_set_token2] = ACTIONS(277),
    [aux_sym_dictionary_token1] = ACTIONS(277),
    [sym_keyword] = ACTIONS(277),
    [sym_string] = ACTIONS(277),
    [aux_sym_fstring_token1] = ACTIONS(277),
    [sym_bstring] = ACTIONS(277),
    [sym_raw_string] = ACTIONS(277),
    [aux_sym_raw_fstring_token1] = ACTIONS(279),
    [sym_raw_bstring] = ACTIONS(277),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_symbol] = ACTIONS(283),
    [sym_comment] = ACTIONS(281),
    [sym_discard_prefix] = ACTIONS(281),
    [sym_decimal] = ACTIONS(283),
    [sym_binary] = ACTIONS(283),
    [sym_hexadecimal] = ACTIONS(283),
    [sym_octal] = ACTIONS(283),
    [sym_nan] = ACTIONS(283),
    [sym_infinity] = ACTIONS(283),
    [sym_numeric_float] = ACTIONS(283),
    [sym_complex] = ACTIONS(283),
    [sym_boolean] = ACTIONS(283),
    [sym_none] = ACTIONS(283),
    [aux_sym_expression_token1] = ACTIONS(281),
    [aux_sym_expression_token2] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [aux_sym_list_token1] = ACTIONS(281),
    [aux_sym_list_token2] = ACTIONS(281),
    [aux_sym_set_token1] = ACTIONS(281),
    [aux_sym_set_token2] = ACTIONS(281),
    [aux_sym_dictionary_token1] = ACTIONS(281),
    [sym_keyword] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [aux_sym_fstring_token1] = ACTIONS(281),
    [sym_bstring] = ACTIONS(281),
    [sym_raw_string] = ACTIONS(281),
    [aux_sym_raw_fstring_token1] = ACTIONS(283),
    [sym_raw_bstring] = ACTIONS(281),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_symbol] = ACTIONS(287),
    [sym_comment] = ACTIONS(285),
    [sym_discard_prefix] = ACTIONS(285),
    [sym_decimal] = ACTIONS(287),
    [sym_binary] = ACTIONS(287),
    [sym_hexadecimal] = ACTIONS(287),
    [sym_octal] = ACTIONS(287),
    [sym_nan] = ACTIONS(287),
    [sym_infinity] = ACTIONS(287),
    [sym_numeric_float] = ACTIONS(287),
    [sym_complex] = ACTIONS(287),
    [sym_boolean] = ACTIONS(287),
    [sym_none] = ACTIONS(287),
    [aux_sym_expression_token1] = ACTIONS(285),
    [aux_sym_expression_token2] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [aux_sym_list_token1] = ACTIONS(285),
    [aux_sym_list_token2] = ACTIONS(285),
    [aux_sym_set_token1] = ACTIONS(285),
    [aux_sym_set_token2] = ACTIONS(285),
    [aux_sym_dictionary_token1] = ACTIONS(285),
    [sym_keyword] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [aux_sym_fstring_token1] = ACTIONS(285),
    [sym_bstring] = ACTIONS(285),
    [sym_raw_string] = ACTIONS(285),
    [aux_sym_raw_fstring_token1] = ACTIONS(287),
    [sym_raw_bstring] = ACTIONS(285),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_symbol] = ACTIONS(291),
    [sym_comment] = ACTIONS(289),
    [sym_discard_prefix] = ACTIONS(289),
    [sym_decimal] = ACTIONS(291),
    [sym_binary] = ACTIONS(291),
    [sym_hexadecimal] = ACTIONS(291),
    [sym_octal] = ACTIONS(291),
    [sym_nan] = ACTIONS(291),
    [sym_infinity] = ACTIONS(291),
    [sym_numeric_float] = ACTIONS(291),
    [sym_complex] = ACTIONS(291),
    [sym_boolean] = ACTIONS(291),
    [sym_none] = ACTIONS(291),
    [aux_sym_expression_token1] = ACTIONS(289),
    [aux_sym_expression_token2] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [aux_sym_list_token1] = ACTIONS(289),
    [aux_sym_list_token2] = ACTIONS(289),
    [aux_sym_set_token1] = ACTIONS(289),
    [aux_sym_set_token2] = ACTIONS(289),
    [aux_sym_dictionary_token1] = ACTIONS(289),
    [sym_keyword] = ACTIONS(289),
    [sym_string] = ACTIONS(289),
    [aux_sym_fstring_token1] = ACTIONS(289),
    [sym_bstring] = ACTIONS(289),
    [sym_raw_string] = ACTIONS(289),
    [aux_sym_raw_fstring_token1] = ACTIONS(291),
    [sym_raw_bstring] = ACTIONS(289),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_symbol] = ACTIONS(295),
    [sym_comment] = ACTIONS(293),
    [sym_discard_prefix] = ACTIONS(293),
    [sym_decimal] = ACTIONS(295),
    [sym_binary] = ACTIONS(295),
    [sym_hexadecimal] = ACTIONS(295),
    [sym_octal] = ACTIONS(295),
    [sym_nan] = ACTIONS(295),
    [sym_infinity] = ACTIONS(295),
    [sym_numeric_float] = ACTIONS(295),
    [sym_complex] = ACTIONS(295),
    [sym_boolean] = ACTIONS(295),
    [sym_none] = ACTIONS(295),
    [aux_sym_expression_token1] = ACTIONS(293),
    [aux_sym_expression_token2] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [aux_sym_list_token1] = ACTIONS(293),
    [aux_sym_list_token2] = ACTIONS(293),
    [aux_sym_set_token1] = ACTIONS(293),
    [aux_sym_set_token2] = ACTIONS(293),
    [aux_sym_dictionary_token1] = ACTIONS(293),
    [sym_keyword] = ACTIONS(293),
    [sym_string] = ACTIONS(293),
    [aux_sym_fstring_token1] = ACTIONS(293),
    [sym_bstring] = ACTIONS(293),
    [sym_raw_string] = ACTIONS(293),
    [aux_sym_raw_fstring_token1] = ACTIONS(295),
    [sym_raw_bstring] = ACTIONS(293),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_symbol] = ACTIONS(299),
    [sym_comment] = ACTIONS(297),
    [sym_discard_prefix] = ACTIONS(297),
    [sym_decimal] = ACTIONS(299),
    [sym_binary] = ACTIONS(299),
    [sym_hexadecimal] = ACTIONS(299),
    [sym_octal] = ACTIONS(299),
    [sym_nan] = ACTIONS(299),
    [sym_infinity] = ACTIONS(299),
    [sym_numeric_float] = ACTIONS(299),
    [sym_complex] = ACTIONS(299),
    [sym_boolean] = ACTIONS(299),
    [sym_none] = ACTIONS(299),
    [aux_sym_expression_token1] = ACTIONS(297),
    [aux_sym_expression_token2] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [aux_sym_list_token1] = ACTIONS(297),
    [aux_sym_list_token2] = ACTIONS(297),
    [aux_sym_set_token1] = ACTIONS(297),
    [aux_sym_set_token2] = ACTIONS(297),
    [aux_sym_dictionary_token1] = ACTIONS(297),
    [sym_keyword] = ACTIONS(297),
    [sym_string] = ACTIONS(297),
    [aux_sym_fstring_token1] = ACTIONS(297),
    [sym_bstring] = ACTIONS(297),
    [sym_raw_string] = ACTIONS(297),
    [aux_sym_raw_fstring_token1] = ACTIONS(299),
    [sym_raw_bstring] = ACTIONS(297),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_symbol] = ACTIONS(303),
    [sym_comment] = ACTIONS(301),
    [sym_discard_prefix] = ACTIONS(301),
    [sym_decimal] = ACTIONS(303),
    [sym_binary] = ACTIONS(303),
    [sym_hexadecimal] = ACTIONS(303),
    [sym_octal] = ACTIONS(303),
    [sym_nan] = ACTIONS(303),
    [sym_infinity] = ACTIONS(303),
    [sym_numeric_float] = ACTIONS(303),
    [sym_complex] = ACTIONS(303),
    [sym_boolean] = ACTIONS(303),
    [sym_none] = ACTIONS(303),
    [aux_sym_expression_token1] = ACTIONS(301),
    [aux_sym_expression_token2] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [aux_sym_list_token1] = ACTIONS(301),
    [aux_sym_list_token2] = ACTIONS(301),
    [aux_sym_set_token1] = ACTIONS(301),
    [aux_sym_set_token2] = ACTIONS(301),
    [aux_sym_dictionary_token1] = ACTIONS(301),
    [sym_keyword] = ACTIONS(301),
    [sym_string] = ACTIONS(301),
    [aux_sym_fstring_token1] = ACTIONS(301),
    [sym_bstring] = ACTIONS(301),
    [sym_raw_string] = ACTIONS(301),
    [aux_sym_raw_fstring_token1] = ACTIONS(303),
    [sym_raw_bstring] = ACTIONS(301),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_symbol] = ACTIONS(307),
    [sym_comment] = ACTIONS(305),
    [sym_discard_prefix] = ACTIONS(305),
    [sym_decimal] = ACTIONS(307),
    [sym_binary] = ACTIONS(307),
    [sym_hexadecimal] = ACTIONS(307),
    [sym_octal] = ACTIONS(307),
    [sym_nan] = ACTIONS(307),
    [sym_infinity] = ACTIONS(307),
    [sym_numeric_float] = ACTIONS(307),
    [sym_complex] = ACTIONS(307),
    [sym_boolean] = ACTIONS(307),
    [sym_none] = ACTIONS(307),
    [aux_sym_expression_token1] = ACTIONS(305),
    [aux_sym_expression_token2] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [aux_sym_list_token1] = ACTIONS(305),
    [aux_sym_list_token2] = ACTIONS(305),
    [aux_sym_set_token1] = ACTIONS(305),
    [aux_sym_set_token2] = ACTIONS(305),
    [aux_sym_dictionary_token1] = ACTIONS(305),
    [sym_keyword] = ACTIONS(305),
    [sym_string] = ACTIONS(305),
    [aux_sym_fstring_token1] = ACTIONS(305),
    [sym_bstring] = ACTIONS(305),
    [sym_raw_string] = ACTIONS(305),
    [aux_sym_raw_fstring_token1] = ACTIONS(307),
    [sym_raw_bstring] = ACTIONS(305),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_symbol] = ACTIONS(311),
    [sym_comment] = ACTIONS(309),
    [sym_discard_prefix] = ACTIONS(309),
    [sym_decimal] = ACTIONS(311),
    [sym_binary] = ACTIONS(311),
    [sym_hexadecimal] = ACTIONS(311),
    [sym_octal] = ACTIONS(311),
    [sym_nan] = ACTIONS(311),
    [sym_infinity] = ACTIONS(311),
    [sym_numeric_float] = ACTIONS(311),
    [sym_complex] = ACTIONS(311),
    [sym_boolean] = ACTIONS(311),
    [sym_none] = ACTIONS(311),
    [aux_sym_expression_token1] = ACTIONS(309),
    [aux_sym_expression_token2] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [aux_sym_list_token1] = ACTIONS(309),
    [aux_sym_list_token2] = ACTIONS(309),
    [aux_sym_set_token1] = ACTIONS(309),
    [aux_sym_set_token2] = ACTIONS(309),
    [aux_sym_dictionary_token1] = ACTIONS(309),
    [sym_keyword] = ACTIONS(309),
    [sym_string] = ACTIONS(309),
    [aux_sym_fstring_token1] = ACTIONS(309),
    [sym_bstring] = ACTIONS(309),
    [sym_raw_string] = ACTIONS(309),
    [aux_sym_raw_fstring_token1] = ACTIONS(311),
    [sym_raw_bstring] = ACTIONS(309),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_symbol] = ACTIONS(315),
    [sym_comment] = ACTIONS(313),
    [sym_discard_prefix] = ACTIONS(313),
    [sym_decimal] = ACTIONS(315),
    [sym_binary] = ACTIONS(315),
    [sym_hexadecimal] = ACTIONS(315),
    [sym_octal] = ACTIONS(315),
    [sym_nan] = ACTIONS(315),
    [sym_infinity] = ACTIONS(315),
    [sym_numeric_float] = ACTIONS(315),
    [sym_complex] = ACTIONS(315),
    [sym_boolean] = ACTIONS(315),
    [sym_none] = ACTIONS(315),
    [aux_sym_expression_token1] = ACTIONS(313),
    [aux_sym_expression_token2] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [aux_sym_list_token1] = ACTIONS(313),
    [aux_sym_list_token2] = ACTIONS(313),
    [aux_sym_set_token1] = ACTIONS(313),
    [aux_sym_set_token2] = ACTIONS(313),
    [aux_sym_dictionary_token1] = ACTIONS(313),
    [sym_keyword] = ACTIONS(313),
    [sym_string] = ACTIONS(313),
    [aux_sym_fstring_token1] = ACTIONS(313),
    [sym_bstring] = ACTIONS(313),
    [sym_raw_string] = ACTIONS(313),
    [aux_sym_raw_fstring_token1] = ACTIONS(315),
    [sym_raw_bstring] = ACTIONS(313),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_symbol] = ACTIONS(319),
    [sym_comment] = ACTIONS(317),
    [sym_discard_prefix] = ACTIONS(317),
    [sym_decimal] = ACTIONS(319),
    [sym_binary] = ACTIONS(319),
    [sym_hexadecimal] = ACTIONS(319),
    [sym_octal] = ACTIONS(319),
    [sym_nan] = ACTIONS(319),
    [sym_infinity] = ACTIONS(319),
    [sym_numeric_float] = ACTIONS(319),
    [sym_complex] = ACTIONS(319),
    [sym_boolean] = ACTIONS(319),
    [sym_none] = ACTIONS(319),
    [aux_sym_expression_token1] = ACTIONS(317),
    [aux_sym_expression_token2] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [aux_sym_list_token1] = ACTIONS(317),
    [aux_sym_list_token2] = ACTIONS(317),
    [aux_sym_set_token1] = ACTIONS(317),
    [aux_sym_set_token2] = ACTIONS(317),
    [aux_sym_dictionary_token1] = ACTIONS(317),
    [sym_keyword] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [aux_sym_fstring_token1] = ACTIONS(317),
    [sym_bstring] = ACTIONS(317),
    [sym_raw_string] = ACTIONS(317),
    [aux_sym_raw_fstring_token1] = ACTIONS(319),
    [sym_raw_bstring] = ACTIONS(317),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(321), 12,
      sym_decimal,
      sym_binary,
      sym_hexadecimal,
      sym_octal,
      sym_nan,
      sym_infinity,
      sym_numeric_float,
      sym_complex,
      sym_boolean,
      sym_none,
      sym_symbol,
      aux_sym_raw_fstring_token1,
    ACTIONS(323), 13,
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
  [30] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(327), 1,
      aux_sym_fstring_token2,
    ACTIONS(329), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [43] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(331), 1,
      aux_sym_fstring_token2,
    ACTIONS(333), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [56] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(327), 1,
      aux_sym_fstring_token2,
    ACTIONS(335), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [69] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(337), 1,
      aux_sym_fstring_token2,
    ACTIONS(339), 1,
      aux_sym_fstring_token4,
    STATE(53), 1,
      aux_sym_fstring_repeat1,
  [82] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(341), 1,
      aux_sym_fstring_token2,
    ACTIONS(343), 1,
      aux_sym_fstring_token4,
    STATE(47), 1,
      aux_sym_fstring_repeat1,
  [95] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(345), 1,
      aux_sym_fstring_token2,
    ACTIONS(347), 1,
      aux_sym_fstring_token4,
    STATE(52), 1,
      aux_sym_fstring_repeat1,
  [108] = 4,
    ACTIONS(349), 1,
      aux_sym_dictionary_token1,
    ACTIONS(352), 1,
      aux_sym_fstring_token2,
    ACTIONS(355), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [121] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(327), 1,
      aux_sym_fstring_token2,
    ACTIONS(357), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [134] = 4,
    ACTIONS(325), 1,
      aux_sym_dictionary_token1,
    ACTIONS(327), 1,
      aux_sym_fstring_token2,
    ACTIONS(359), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [147] = 2,
    ACTIONS(363), 1,
      aux_sym_fstring_token2,
    ACTIONS(361), 2,
      aux_sym_dictionary_token1,
      aux_sym_fstring_token4,
  [155] = 2,
    ACTIONS(237), 1,
      aux_sym_expression_token1,
    STATE(61), 1,
      sym_expression,
  [162] = 2,
    ACTIONS(17), 1,
      aux_sym_expression_token1,
    STATE(35), 1,
      sym_expression,
  [169] = 1,
    ACTIONS(257), 1,
      aux_sym_fstring_token3,
  [173] = 1,
    ACTIONS(313), 1,
      aux_sym_fstring_token3,
  [177] = 1,
    ACTIONS(365), 1,
      aux_sym_fstring_token3,
  [181] = 1,
    ACTIONS(265), 1,
      aux_sym_fstring_token3,
  [185] = 1,
    ACTIONS(285), 1,
      aux_sym_fstring_token3,
  [189] = 1,
    ACTIONS(305), 1,
      aux_sym_fstring_token3,
  [193] = 1,
    ACTIONS(301), 1,
      aux_sym_fstring_token3,
  [197] = 1,
    ACTIONS(309), 1,
      aux_sym_fstring_token3,
  [201] = 1,
    ACTIONS(317), 1,
      aux_sym_fstring_token3,
  [205] = 1,
    ACTIONS(261), 1,
      aux_sym_fstring_token3,
  [209] = 1,
    ACTIONS(269), 1,
      aux_sym_fstring_token3,
  [213] = 1,
    ACTIONS(273), 1,
      aux_sym_fstring_token3,
  [217] = 1,
    ACTIONS(277), 1,
      aux_sym_fstring_token3,
  [221] = 1,
    ACTIONS(281), 1,
      aux_sym_fstring_token3,
  [225] = 1,
    ACTIONS(289), 1,
      aux_sym_fstring_token3,
  [229] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [233] = 1,
    ACTIONS(369), 1,
      aux_sym_discard_token1,
  [237] = 1,
    ACTIONS(293), 1,
      aux_sym_fstring_token3,
  [241] = 1,
    ACTIONS(371), 1,
      aux_sym_discard_token1,
  [245] = 1,
    ACTIONS(297), 1,
      aux_sym_fstring_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 30,
  [SMALL_STATE(46)] = 43,
  [SMALL_STATE(47)] = 56,
  [SMALL_STATE(48)] = 69,
  [SMALL_STATE(49)] = 82,
  [SMALL_STATE(50)] = 95,
  [SMALL_STATE(51)] = 108,
  [SMALL_STATE(52)] = 121,
  [SMALL_STATE(53)] = 134,
  [SMALL_STATE(54)] = 147,
  [SMALL_STATE(55)] = 155,
  [SMALL_STATE(56)] = 162,
  [SMALL_STATE(57)] = 169,
  [SMALL_STATE(58)] = 173,
  [SMALL_STATE(59)] = 177,
  [SMALL_STATE(60)] = 181,
  [SMALL_STATE(61)] = 185,
  [SMALL_STATE(62)] = 189,
  [SMALL_STATE(63)] = 193,
  [SMALL_STATE(64)] = 197,
  [SMALL_STATE(65)] = 201,
  [SMALL_STATE(66)] = 205,
  [SMALL_STATE(67)] = 209,
  [SMALL_STATE(68)] = 213,
  [SMALL_STATE(69)] = 217,
  [SMALL_STATE(70)] = 221,
  [SMALL_STATE(71)] = 225,
  [SMALL_STATE(72)] = 229,
  [SMALL_STATE(73)] = 233,
  [SMALL_STATE(74)] = 237,
  [SMALL_STATE(75)] = 241,
  [SMALL_STATE(76)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 3, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 3, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [367] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
