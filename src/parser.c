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
        '"', 73,
        '#', 1,
        '\'', 44,
        '(', 42,
        ')', 43,
        '.', 37,
        '0', 30,
        ':', 18,
        ';', 27,
        'I', 61,
        'N', 59,
        '[', 45,
        ']', 46,
        'b', 51,
        'f', 52,
        'r', 55,
        '{', 49,
        '}', 48,
        '+', 57,
        '-', 57,
        ',', 57,
        '_', 57,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '{') ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(68);
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
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(72);
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
          lookahead == 'j') ADVANCE(40);
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
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(70);
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
        '\'', 44,
        '(', 42,
        ')', 43,
        '.', 37,
        '0', 30,
        ':', 18,
        ';', 27,
        'I', 61,
        'N', 59,
        '[', 45,
        ']', 46,
        'b', 51,
        'f', 52,
        'r', 55,
        '{', 49,
        '}', 48,
        '+', 57,
        '-', 57,
        ',', 57,
        '_', 57,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(66);
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
        'B', 62,
        'b', 62,
        'J', 41,
        'j', 41,
        'O', 63,
        'o', 63,
        'X', 64,
        'x', 64,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(41);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_nan);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_infinity);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
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
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_complex);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_list_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_set_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_dictionary_token1);
      if (lookahead == '{') ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(56);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(53);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(76);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 54:
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
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(66);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(5);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(35);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(58);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(36);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(60);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      if ((!eof && set_contains(sym_symbol_character_set_2, 12, lookahead))) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
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
      if (lookahead != 0) ADVANCE(54);
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
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(10);
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
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(9),
    [sym_raw_string] = ACTIONS(9),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
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
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_symbol] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(35),
    [sym_boolean] = ACTIONS(35),
    [sym_none] = ACTIONS(35),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(37),
    [sym_raw_string] = ACTIONS(37),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(37),
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
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_symbol] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(39),
    [sym_boolean] = ACTIONS(39),
    [sym_none] = ACTIONS(39),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(41),
    [sym_raw_string] = ACTIONS(41),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(41),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_symbol] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(39),
    [sym_boolean] = ACTIONS(39),
    [sym_none] = ACTIONS(39),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(41),
    [sym_raw_string] = ACTIONS(41),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(41),
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
    [sym_comment] = ACTIONS(50),
    [sym_discard_prefix] = ACTIONS(53),
    [sym_decimal] = ACTIONS(56),
    [sym_binary] = ACTIONS(56),
    [sym_hexadecimal] = ACTIONS(56),
    [sym_octal] = ACTIONS(56),
    [sym_nan] = ACTIONS(59),
    [sym_infinity] = ACTIONS(59),
    [sym_numeric_float] = ACTIONS(62),
    [sym_complex] = ACTIONS(47),
    [sym_boolean] = ACTIONS(47),
    [sym_none] = ACTIONS(47),
    [aux_sym_expression_token1] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [aux_sym_list_token1] = ACTIONS(71),
    [aux_sym_set_token1] = ACTIONS(74),
    [aux_sym_dictionary_token1] = ACTIONS(77),
    [sym_keyword] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
    [aux_sym_fstring_token1] = ACTIONS(80),
    [sym_bstring] = ACTIONS(50),
    [sym_raw_string] = ACTIONS(50),
    [aux_sym_raw_fstring_token1] = ACTIONS(83),
    [sym_raw_bstring] = ACTIONS(50),
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
    [sym_symbol] = ACTIONS(86),
    [sym_discard_prefix] = ACTIONS(89),
    [sym_decimal] = ACTIONS(92),
    [sym_binary] = ACTIONS(92),
    [sym_hexadecimal] = ACTIONS(92),
    [sym_octal] = ACTIONS(92),
    [sym_nan] = ACTIONS(95),
    [sym_infinity] = ACTIONS(95),
    [sym_numeric_float] = ACTIONS(98),
    [sym_complex] = ACTIONS(86),
    [sym_boolean] = ACTIONS(86),
    [sym_none] = ACTIONS(86),
    [aux_sym_expression_token1] = ACTIONS(101),
    [aux_sym_expression_token2] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [aux_sym_list_token1] = ACTIONS(109),
    [aux_sym_list_token2] = ACTIONS(104),
    [aux_sym_set_token1] = ACTIONS(112),
    [aux_sym_set_token2] = ACTIONS(104),
    [aux_sym_dictionary_token1] = ACTIONS(115),
    [sym_keyword] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [aux_sym_fstring_token1] = ACTIONS(121),
    [sym_bstring] = ACTIONS(118),
    [sym_raw_string] = ACTIONS(118),
    [aux_sym_raw_fstring_token1] = ACTIONS(124),
    [sym_raw_bstring] = ACTIONS(118),
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
    [sym_symbol] = ACTIONS(127),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(127),
    [sym_boolean] = ACTIONS(127),
    [sym_none] = ACTIONS(127),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(129),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(131),
    [sym_raw_string] = ACTIONS(131),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(131),
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
    [sym_symbol] = ACTIONS(133),
    [sym_discard_prefix] = ACTIONS(136),
    [sym_decimal] = ACTIONS(139),
    [sym_binary] = ACTIONS(139),
    [sym_hexadecimal] = ACTIONS(139),
    [sym_octal] = ACTIONS(139),
    [sym_nan] = ACTIONS(142),
    [sym_infinity] = ACTIONS(142),
    [sym_numeric_float] = ACTIONS(145),
    [sym_complex] = ACTIONS(133),
    [sym_boolean] = ACTIONS(133),
    [sym_none] = ACTIONS(133),
    [aux_sym_expression_token1] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [aux_sym_list_token1] = ACTIONS(154),
    [aux_sym_set_token1] = ACTIONS(157),
    [aux_sym_set_token2] = ACTIONS(160),
    [aux_sym_dictionary_token1] = ACTIONS(162),
    [sym_keyword] = ACTIONS(165),
    [sym_string] = ACTIONS(165),
    [aux_sym_fstring_token1] = ACTIONS(168),
    [sym_bstring] = ACTIONS(165),
    [sym_raw_string] = ACTIONS(165),
    [aux_sym_raw_fstring_token1] = ACTIONS(171),
    [sym_raw_bstring] = ACTIONS(165),
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
    [sym_symbol] = ACTIONS(127),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(127),
    [sym_boolean] = ACTIONS(127),
    [sym_none] = ACTIONS(127),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(174),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(131),
    [sym_raw_string] = ACTIONS(131),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(131),
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
    [sym_symbol] = ACTIONS(127),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(127),
    [sym_boolean] = ACTIONS(127),
    [sym_none] = ACTIONS(127),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(176),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(131),
    [sym_raw_string] = ACTIONS(131),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(131),
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
    [sym_symbol] = ACTIONS(127),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(127),
    [sym_boolean] = ACTIONS(127),
    [sym_none] = ACTIONS(127),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(178),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(131),
    [sym_raw_string] = ACTIONS(131),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(131),
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
    [sym_symbol] = ACTIONS(180),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(180),
    [sym_boolean] = ACTIONS(180),
    [sym_none] = ACTIONS(180),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(182),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(184),
    [sym_string] = ACTIONS(184),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(184),
    [sym_raw_string] = ACTIONS(184),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(184),
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
    [sym_symbol] = ACTIONS(186),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(186),
    [sym_boolean] = ACTIONS(186),
    [sym_none] = ACTIONS(186),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(188),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(190),
    [sym_string] = ACTIONS(190),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(190),
    [sym_raw_string] = ACTIONS(190),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(190),
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
    [sym_symbol] = ACTIONS(192),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(192),
    [sym_boolean] = ACTIONS(192),
    [sym_none] = ACTIONS(192),
    [aux_sym_expression_token1] = ACTIONS(19),
    [aux_sym_expression_token2] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(196),
    [sym_string] = ACTIONS(196),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(196),
    [sym_raw_string] = ACTIONS(196),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(196),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [aux_sym_expression_token2] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(204),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(206),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [aux_sym_expression_token2] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(210),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(210),
    [sym_boolean] = ACTIONS(210),
    [sym_none] = ACTIONS(210),
    [aux_sym_expression_token1] = ACTIONS(19),
    [aux_sym_expression_token2] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(214),
    [sym_string] = ACTIONS(214),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(214),
    [sym_raw_string] = ACTIONS(214),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(214),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(216),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(218),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(218),
    [sym_boolean] = ACTIONS(218),
    [sym_none] = ACTIONS(218),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(220),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(222),
    [sym_string] = ACTIONS(222),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(222),
    [sym_raw_string] = ACTIONS(222),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(222),
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
    [sym_symbol] = ACTIONS(224),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(224),
    [sym_boolean] = ACTIONS(224),
    [sym_none] = ACTIONS(224),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(226),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(228),
    [sym_string] = ACTIONS(228),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(228),
    [sym_raw_string] = ACTIONS(228),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(228),
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
    [sym_symbol] = ACTIONS(198),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [sym_none] = ACTIONS(198),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(230),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(202),
    [sym_raw_string] = ACTIONS(202),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(202),
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
    [sym_symbol] = ACTIONS(232),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(232),
    [sym_boolean] = ACTIONS(232),
    [sym_none] = ACTIONS(232),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(234),
    [sym_string] = ACTIONS(234),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(234),
    [sym_raw_string] = ACTIONS(234),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(234),
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
    [sym_symbol] = ACTIONS(236),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(17),
    [sym_complex] = ACTIONS(236),
    [sym_boolean] = ACTIONS(236),
    [sym_none] = ACTIONS(236),
    [aux_sym_expression_token1] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_dictionary_token1] = ACTIONS(27),
    [sym_keyword] = ACTIONS(238),
    [sym_string] = ACTIONS(238),
    [aux_sym_fstring_token1] = ACTIONS(29),
    [sym_bstring] = ACTIONS(238),
    [sym_raw_string] = ACTIONS(238),
    [aux_sym_raw_fstring_token1] = ACTIONS(31),
    [sym_raw_bstring] = ACTIONS(238),
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
    [sym_symbol] = ACTIONS(240),
    [sym_discard_prefix] = ACTIONS(242),
    [sym_decimal] = ACTIONS(244),
    [sym_binary] = ACTIONS(244),
    [sym_hexadecimal] = ACTIONS(244),
    [sym_octal] = ACTIONS(244),
    [sym_nan] = ACTIONS(246),
    [sym_infinity] = ACTIONS(246),
    [sym_numeric_float] = ACTIONS(248),
    [sym_complex] = ACTIONS(240),
    [sym_boolean] = ACTIONS(240),
    [sym_none] = ACTIONS(240),
    [aux_sym_expression_token1] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [aux_sym_list_token1] = ACTIONS(254),
    [aux_sym_set_token1] = ACTIONS(256),
    [aux_sym_dictionary_token1] = ACTIONS(258),
    [sym_keyword] = ACTIONS(260),
    [sym_string] = ACTIONS(260),
    [aux_sym_fstring_token1] = ACTIONS(262),
    [sym_bstring] = ACTIONS(260),
    [sym_raw_string] = ACTIONS(260),
    [aux_sym_raw_fstring_token1] = ACTIONS(264),
    [sym_raw_bstring] = ACTIONS(260),
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
    [sym_symbol] = ACTIONS(266),
    [sym_discard_prefix] = ACTIONS(242),
    [sym_decimal] = ACTIONS(244),
    [sym_binary] = ACTIONS(244),
    [sym_hexadecimal] = ACTIONS(244),
    [sym_octal] = ACTIONS(244),
    [sym_nan] = ACTIONS(246),
    [sym_infinity] = ACTIONS(246),
    [sym_numeric_float] = ACTIONS(248),
    [sym_complex] = ACTIONS(266),
    [sym_boolean] = ACTIONS(266),
    [sym_none] = ACTIONS(266),
    [aux_sym_expression_token1] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [aux_sym_list_token1] = ACTIONS(254),
    [aux_sym_set_token1] = ACTIONS(256),
    [aux_sym_dictionary_token1] = ACTIONS(258),
    [sym_keyword] = ACTIONS(268),
    [sym_string] = ACTIONS(268),
    [aux_sym_fstring_token1] = ACTIONS(262),
    [sym_bstring] = ACTIONS(268),
    [sym_raw_string] = ACTIONS(268),
    [aux_sym_raw_fstring_token1] = ACTIONS(264),
    [sym_raw_bstring] = ACTIONS(268),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_symbol] = ACTIONS(272),
    [sym_comment] = ACTIONS(270),
    [sym_discard_prefix] = ACTIONS(270),
    [sym_decimal] = ACTIONS(272),
    [sym_binary] = ACTIONS(272),
    [sym_hexadecimal] = ACTIONS(272),
    [sym_octal] = ACTIONS(272),
    [sym_nan] = ACTIONS(272),
    [sym_infinity] = ACTIONS(272),
    [sym_numeric_float] = ACTIONS(270),
    [sym_complex] = ACTIONS(272),
    [sym_boolean] = ACTIONS(272),
    [sym_none] = ACTIONS(272),
    [aux_sym_expression_token1] = ACTIONS(270),
    [aux_sym_expression_token2] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [aux_sym_list_token1] = ACTIONS(270),
    [aux_sym_list_token2] = ACTIONS(270),
    [aux_sym_set_token1] = ACTIONS(270),
    [aux_sym_set_token2] = ACTIONS(270),
    [aux_sym_dictionary_token1] = ACTIONS(270),
    [sym_keyword] = ACTIONS(270),
    [sym_string] = ACTIONS(270),
    [aux_sym_fstring_token1] = ACTIONS(270),
    [sym_bstring] = ACTIONS(270),
    [sym_raw_string] = ACTIONS(270),
    [aux_sym_raw_fstring_token1] = ACTIONS(272),
    [sym_raw_bstring] = ACTIONS(270),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_symbol] = ACTIONS(276),
    [sym_comment] = ACTIONS(274),
    [sym_discard_prefix] = ACTIONS(274),
    [sym_decimal] = ACTIONS(276),
    [sym_binary] = ACTIONS(276),
    [sym_hexadecimal] = ACTIONS(276),
    [sym_octal] = ACTIONS(276),
    [sym_nan] = ACTIONS(276),
    [sym_infinity] = ACTIONS(276),
    [sym_numeric_float] = ACTIONS(274),
    [sym_complex] = ACTIONS(276),
    [sym_boolean] = ACTIONS(276),
    [sym_none] = ACTIONS(276),
    [aux_sym_expression_token1] = ACTIONS(274),
    [aux_sym_expression_token2] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [aux_sym_list_token1] = ACTIONS(274),
    [aux_sym_list_token2] = ACTIONS(274),
    [aux_sym_set_token1] = ACTIONS(274),
    [aux_sym_set_token2] = ACTIONS(274),
    [aux_sym_dictionary_token1] = ACTIONS(274),
    [sym_keyword] = ACTIONS(274),
    [sym_string] = ACTIONS(274),
    [aux_sym_fstring_token1] = ACTIONS(274),
    [sym_bstring] = ACTIONS(274),
    [sym_raw_string] = ACTIONS(274),
    [aux_sym_raw_fstring_token1] = ACTIONS(276),
    [sym_raw_bstring] = ACTIONS(274),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_symbol] = ACTIONS(280),
    [sym_comment] = ACTIONS(278),
    [sym_discard_prefix] = ACTIONS(278),
    [sym_decimal] = ACTIONS(280),
    [sym_binary] = ACTIONS(280),
    [sym_hexadecimal] = ACTIONS(280),
    [sym_octal] = ACTIONS(280),
    [sym_nan] = ACTIONS(280),
    [sym_infinity] = ACTIONS(280),
    [sym_numeric_float] = ACTIONS(278),
    [sym_complex] = ACTIONS(280),
    [sym_boolean] = ACTIONS(280),
    [sym_none] = ACTIONS(280),
    [aux_sym_expression_token1] = ACTIONS(278),
    [aux_sym_expression_token2] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [aux_sym_list_token1] = ACTIONS(278),
    [aux_sym_list_token2] = ACTIONS(278),
    [aux_sym_set_token1] = ACTIONS(278),
    [aux_sym_set_token2] = ACTIONS(278),
    [aux_sym_dictionary_token1] = ACTIONS(278),
    [sym_keyword] = ACTIONS(278),
    [sym_string] = ACTIONS(278),
    [aux_sym_fstring_token1] = ACTIONS(278),
    [sym_bstring] = ACTIONS(278),
    [sym_raw_string] = ACTIONS(278),
    [aux_sym_raw_fstring_token1] = ACTIONS(280),
    [sym_raw_bstring] = ACTIONS(278),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_symbol] = ACTIONS(284),
    [sym_comment] = ACTIONS(282),
    [sym_discard_prefix] = ACTIONS(282),
    [sym_decimal] = ACTIONS(284),
    [sym_binary] = ACTIONS(284),
    [sym_hexadecimal] = ACTIONS(284),
    [sym_octal] = ACTIONS(284),
    [sym_nan] = ACTIONS(284),
    [sym_infinity] = ACTIONS(284),
    [sym_numeric_float] = ACTIONS(282),
    [sym_complex] = ACTIONS(284),
    [sym_boolean] = ACTIONS(284),
    [sym_none] = ACTIONS(284),
    [aux_sym_expression_token1] = ACTIONS(282),
    [aux_sym_expression_token2] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [aux_sym_list_token1] = ACTIONS(282),
    [aux_sym_list_token2] = ACTIONS(282),
    [aux_sym_set_token1] = ACTIONS(282),
    [aux_sym_set_token2] = ACTIONS(282),
    [aux_sym_dictionary_token1] = ACTIONS(282),
    [sym_keyword] = ACTIONS(282),
    [sym_string] = ACTIONS(282),
    [aux_sym_fstring_token1] = ACTIONS(282),
    [sym_bstring] = ACTIONS(282),
    [sym_raw_string] = ACTIONS(282),
    [aux_sym_raw_fstring_token1] = ACTIONS(284),
    [sym_raw_bstring] = ACTIONS(282),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_symbol] = ACTIONS(288),
    [sym_comment] = ACTIONS(286),
    [sym_discard_prefix] = ACTIONS(286),
    [sym_decimal] = ACTIONS(288),
    [sym_binary] = ACTIONS(288),
    [sym_hexadecimal] = ACTIONS(288),
    [sym_octal] = ACTIONS(288),
    [sym_nan] = ACTIONS(288),
    [sym_infinity] = ACTIONS(288),
    [sym_numeric_float] = ACTIONS(286),
    [sym_complex] = ACTIONS(288),
    [sym_boolean] = ACTIONS(288),
    [sym_none] = ACTIONS(288),
    [aux_sym_expression_token1] = ACTIONS(286),
    [aux_sym_expression_token2] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [aux_sym_list_token1] = ACTIONS(286),
    [aux_sym_list_token2] = ACTIONS(286),
    [aux_sym_set_token1] = ACTIONS(286),
    [aux_sym_set_token2] = ACTIONS(286),
    [aux_sym_dictionary_token1] = ACTIONS(286),
    [sym_keyword] = ACTIONS(286),
    [sym_string] = ACTIONS(286),
    [aux_sym_fstring_token1] = ACTIONS(286),
    [sym_bstring] = ACTIONS(286),
    [sym_raw_string] = ACTIONS(286),
    [aux_sym_raw_fstring_token1] = ACTIONS(288),
    [sym_raw_bstring] = ACTIONS(286),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_symbol] = ACTIONS(292),
    [sym_comment] = ACTIONS(290),
    [sym_discard_prefix] = ACTIONS(290),
    [sym_decimal] = ACTIONS(292),
    [sym_binary] = ACTIONS(292),
    [sym_hexadecimal] = ACTIONS(292),
    [sym_octal] = ACTIONS(292),
    [sym_nan] = ACTIONS(292),
    [sym_infinity] = ACTIONS(292),
    [sym_numeric_float] = ACTIONS(290),
    [sym_complex] = ACTIONS(292),
    [sym_boolean] = ACTIONS(292),
    [sym_none] = ACTIONS(292),
    [aux_sym_expression_token1] = ACTIONS(290),
    [aux_sym_expression_token2] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [aux_sym_list_token1] = ACTIONS(290),
    [aux_sym_list_token2] = ACTIONS(290),
    [aux_sym_set_token1] = ACTIONS(290),
    [aux_sym_set_token2] = ACTIONS(290),
    [aux_sym_dictionary_token1] = ACTIONS(290),
    [sym_keyword] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [aux_sym_fstring_token1] = ACTIONS(290),
    [sym_bstring] = ACTIONS(290),
    [sym_raw_string] = ACTIONS(290),
    [aux_sym_raw_fstring_token1] = ACTIONS(292),
    [sym_raw_bstring] = ACTIONS(290),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_symbol] = ACTIONS(296),
    [sym_comment] = ACTIONS(294),
    [sym_discard_prefix] = ACTIONS(294),
    [sym_decimal] = ACTIONS(296),
    [sym_binary] = ACTIONS(296),
    [sym_hexadecimal] = ACTIONS(296),
    [sym_octal] = ACTIONS(296),
    [sym_nan] = ACTIONS(296),
    [sym_infinity] = ACTIONS(296),
    [sym_numeric_float] = ACTIONS(294),
    [sym_complex] = ACTIONS(296),
    [sym_boolean] = ACTIONS(296),
    [sym_none] = ACTIONS(296),
    [aux_sym_expression_token1] = ACTIONS(294),
    [aux_sym_expression_token2] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [aux_sym_list_token1] = ACTIONS(294),
    [aux_sym_list_token2] = ACTIONS(294),
    [aux_sym_set_token1] = ACTIONS(294),
    [aux_sym_set_token2] = ACTIONS(294),
    [aux_sym_dictionary_token1] = ACTIONS(294),
    [sym_keyword] = ACTIONS(294),
    [sym_string] = ACTIONS(294),
    [aux_sym_fstring_token1] = ACTIONS(294),
    [sym_bstring] = ACTIONS(294),
    [sym_raw_string] = ACTIONS(294),
    [aux_sym_raw_fstring_token1] = ACTIONS(296),
    [sym_raw_bstring] = ACTIONS(294),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_symbol] = ACTIONS(300),
    [sym_comment] = ACTIONS(298),
    [sym_discard_prefix] = ACTIONS(298),
    [sym_decimal] = ACTIONS(300),
    [sym_binary] = ACTIONS(300),
    [sym_hexadecimal] = ACTIONS(300),
    [sym_octal] = ACTIONS(300),
    [sym_nan] = ACTIONS(300),
    [sym_infinity] = ACTIONS(300),
    [sym_numeric_float] = ACTIONS(298),
    [sym_complex] = ACTIONS(300),
    [sym_boolean] = ACTIONS(300),
    [sym_none] = ACTIONS(300),
    [aux_sym_expression_token1] = ACTIONS(298),
    [aux_sym_expression_token2] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [aux_sym_list_token1] = ACTIONS(298),
    [aux_sym_list_token2] = ACTIONS(298),
    [aux_sym_set_token1] = ACTIONS(298),
    [aux_sym_set_token2] = ACTIONS(298),
    [aux_sym_dictionary_token1] = ACTIONS(298),
    [sym_keyword] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [aux_sym_fstring_token1] = ACTIONS(298),
    [sym_bstring] = ACTIONS(298),
    [sym_raw_string] = ACTIONS(298),
    [aux_sym_raw_fstring_token1] = ACTIONS(300),
    [sym_raw_bstring] = ACTIONS(298),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_symbol] = ACTIONS(304),
    [sym_comment] = ACTIONS(302),
    [sym_discard_prefix] = ACTIONS(302),
    [sym_decimal] = ACTIONS(304),
    [sym_binary] = ACTIONS(304),
    [sym_hexadecimal] = ACTIONS(304),
    [sym_octal] = ACTIONS(304),
    [sym_nan] = ACTIONS(304),
    [sym_infinity] = ACTIONS(304),
    [sym_numeric_float] = ACTIONS(302),
    [sym_complex] = ACTIONS(304),
    [sym_boolean] = ACTIONS(304),
    [sym_none] = ACTIONS(304),
    [aux_sym_expression_token1] = ACTIONS(302),
    [aux_sym_expression_token2] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [aux_sym_list_token1] = ACTIONS(302),
    [aux_sym_list_token2] = ACTIONS(302),
    [aux_sym_set_token1] = ACTIONS(302),
    [aux_sym_set_token2] = ACTIONS(302),
    [aux_sym_dictionary_token1] = ACTIONS(302),
    [sym_keyword] = ACTIONS(302),
    [sym_string] = ACTIONS(302),
    [aux_sym_fstring_token1] = ACTIONS(302),
    [sym_bstring] = ACTIONS(302),
    [sym_raw_string] = ACTIONS(302),
    [aux_sym_raw_fstring_token1] = ACTIONS(304),
    [sym_raw_bstring] = ACTIONS(302),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_symbol] = ACTIONS(308),
    [sym_comment] = ACTIONS(306),
    [sym_discard_prefix] = ACTIONS(306),
    [sym_decimal] = ACTIONS(308),
    [sym_binary] = ACTIONS(308),
    [sym_hexadecimal] = ACTIONS(308),
    [sym_octal] = ACTIONS(308),
    [sym_nan] = ACTIONS(308),
    [sym_infinity] = ACTIONS(308),
    [sym_numeric_float] = ACTIONS(306),
    [sym_complex] = ACTIONS(308),
    [sym_boolean] = ACTIONS(308),
    [sym_none] = ACTIONS(308),
    [aux_sym_expression_token1] = ACTIONS(306),
    [aux_sym_expression_token2] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [aux_sym_list_token1] = ACTIONS(306),
    [aux_sym_list_token2] = ACTIONS(306),
    [aux_sym_set_token1] = ACTIONS(306),
    [aux_sym_set_token2] = ACTIONS(306),
    [aux_sym_dictionary_token1] = ACTIONS(306),
    [sym_keyword] = ACTIONS(306),
    [sym_string] = ACTIONS(306),
    [aux_sym_fstring_token1] = ACTIONS(306),
    [sym_bstring] = ACTIONS(306),
    [sym_raw_string] = ACTIONS(306),
    [aux_sym_raw_fstring_token1] = ACTIONS(308),
    [sym_raw_bstring] = ACTIONS(306),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_symbol] = ACTIONS(312),
    [sym_comment] = ACTIONS(310),
    [sym_discard_prefix] = ACTIONS(310),
    [sym_decimal] = ACTIONS(312),
    [sym_binary] = ACTIONS(312),
    [sym_hexadecimal] = ACTIONS(312),
    [sym_octal] = ACTIONS(312),
    [sym_nan] = ACTIONS(312),
    [sym_infinity] = ACTIONS(312),
    [sym_numeric_float] = ACTIONS(310),
    [sym_complex] = ACTIONS(312),
    [sym_boolean] = ACTIONS(312),
    [sym_none] = ACTIONS(312),
    [aux_sym_expression_token1] = ACTIONS(310),
    [aux_sym_expression_token2] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [aux_sym_list_token1] = ACTIONS(310),
    [aux_sym_list_token2] = ACTIONS(310),
    [aux_sym_set_token1] = ACTIONS(310),
    [aux_sym_set_token2] = ACTIONS(310),
    [aux_sym_dictionary_token1] = ACTIONS(310),
    [sym_keyword] = ACTIONS(310),
    [sym_string] = ACTIONS(310),
    [aux_sym_fstring_token1] = ACTIONS(310),
    [sym_bstring] = ACTIONS(310),
    [sym_raw_string] = ACTIONS(310),
    [aux_sym_raw_fstring_token1] = ACTIONS(312),
    [sym_raw_bstring] = ACTIONS(310),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_symbol] = ACTIONS(316),
    [sym_comment] = ACTIONS(314),
    [sym_discard_prefix] = ACTIONS(314),
    [sym_decimal] = ACTIONS(316),
    [sym_binary] = ACTIONS(316),
    [sym_hexadecimal] = ACTIONS(316),
    [sym_octal] = ACTIONS(316),
    [sym_nan] = ACTIONS(316),
    [sym_infinity] = ACTIONS(316),
    [sym_numeric_float] = ACTIONS(314),
    [sym_complex] = ACTIONS(316),
    [sym_boolean] = ACTIONS(316),
    [sym_none] = ACTIONS(316),
    [aux_sym_expression_token1] = ACTIONS(314),
    [aux_sym_expression_token2] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [aux_sym_list_token1] = ACTIONS(314),
    [aux_sym_list_token2] = ACTIONS(314),
    [aux_sym_set_token1] = ACTIONS(314),
    [aux_sym_set_token2] = ACTIONS(314),
    [aux_sym_dictionary_token1] = ACTIONS(314),
    [sym_keyword] = ACTIONS(314),
    [sym_string] = ACTIONS(314),
    [aux_sym_fstring_token1] = ACTIONS(314),
    [sym_bstring] = ACTIONS(314),
    [sym_raw_string] = ACTIONS(314),
    [aux_sym_raw_fstring_token1] = ACTIONS(316),
    [sym_raw_bstring] = ACTIONS(314),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym_symbol] = ACTIONS(320),
    [sym_comment] = ACTIONS(318),
    [sym_discard_prefix] = ACTIONS(318),
    [sym_decimal] = ACTIONS(320),
    [sym_binary] = ACTIONS(320),
    [sym_hexadecimal] = ACTIONS(320),
    [sym_octal] = ACTIONS(320),
    [sym_nan] = ACTIONS(320),
    [sym_infinity] = ACTIONS(320),
    [sym_numeric_float] = ACTIONS(318),
    [sym_complex] = ACTIONS(320),
    [sym_boolean] = ACTIONS(320),
    [sym_none] = ACTIONS(320),
    [aux_sym_expression_token1] = ACTIONS(318),
    [aux_sym_expression_token2] = ACTIONS(318),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [aux_sym_list_token1] = ACTIONS(318),
    [aux_sym_list_token2] = ACTIONS(318),
    [aux_sym_set_token1] = ACTIONS(318),
    [aux_sym_set_token2] = ACTIONS(318),
    [aux_sym_dictionary_token1] = ACTIONS(318),
    [sym_keyword] = ACTIONS(318),
    [sym_string] = ACTIONS(318),
    [aux_sym_fstring_token1] = ACTIONS(318),
    [sym_bstring] = ACTIONS(318),
    [sym_raw_string] = ACTIONS(318),
    [aux_sym_raw_fstring_token1] = ACTIONS(320),
    [sym_raw_bstring] = ACTIONS(318),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_symbol] = ACTIONS(324),
    [sym_comment] = ACTIONS(322),
    [sym_discard_prefix] = ACTIONS(322),
    [sym_decimal] = ACTIONS(324),
    [sym_binary] = ACTIONS(324),
    [sym_hexadecimal] = ACTIONS(324),
    [sym_octal] = ACTIONS(324),
    [sym_nan] = ACTIONS(324),
    [sym_infinity] = ACTIONS(324),
    [sym_numeric_float] = ACTIONS(322),
    [sym_complex] = ACTIONS(324),
    [sym_boolean] = ACTIONS(324),
    [sym_none] = ACTIONS(324),
    [aux_sym_expression_token1] = ACTIONS(322),
    [aux_sym_expression_token2] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [aux_sym_list_token1] = ACTIONS(322),
    [aux_sym_list_token2] = ACTIONS(322),
    [aux_sym_set_token1] = ACTIONS(322),
    [aux_sym_set_token2] = ACTIONS(322),
    [aux_sym_dictionary_token1] = ACTIONS(322),
    [sym_keyword] = ACTIONS(322),
    [sym_string] = ACTIONS(322),
    [aux_sym_fstring_token1] = ACTIONS(322),
    [sym_bstring] = ACTIONS(322),
    [sym_raw_string] = ACTIONS(322),
    [aux_sym_raw_fstring_token1] = ACTIONS(324),
    [sym_raw_bstring] = ACTIONS(322),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_symbol] = ACTIONS(328),
    [sym_comment] = ACTIONS(326),
    [sym_discard_prefix] = ACTIONS(326),
    [sym_decimal] = ACTIONS(328),
    [sym_binary] = ACTIONS(328),
    [sym_hexadecimal] = ACTIONS(328),
    [sym_octal] = ACTIONS(328),
    [sym_nan] = ACTIONS(328),
    [sym_infinity] = ACTIONS(328),
    [sym_numeric_float] = ACTIONS(326),
    [sym_complex] = ACTIONS(328),
    [sym_boolean] = ACTIONS(328),
    [sym_none] = ACTIONS(328),
    [aux_sym_expression_token1] = ACTIONS(326),
    [aux_sym_expression_token2] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [aux_sym_list_token1] = ACTIONS(326),
    [aux_sym_list_token2] = ACTIONS(326),
    [aux_sym_set_token1] = ACTIONS(326),
    [aux_sym_set_token2] = ACTIONS(326),
    [aux_sym_dictionary_token1] = ACTIONS(326),
    [sym_keyword] = ACTIONS(326),
    [sym_string] = ACTIONS(326),
    [aux_sym_fstring_token1] = ACTIONS(326),
    [sym_bstring] = ACTIONS(326),
    [sym_raw_string] = ACTIONS(326),
    [aux_sym_raw_fstring_token1] = ACTIONS(328),
    [sym_raw_bstring] = ACTIONS(326),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_symbol] = ACTIONS(332),
    [sym_comment] = ACTIONS(330),
    [sym_discard_prefix] = ACTIONS(330),
    [sym_decimal] = ACTIONS(332),
    [sym_binary] = ACTIONS(332),
    [sym_hexadecimal] = ACTIONS(332),
    [sym_octal] = ACTIONS(332),
    [sym_nan] = ACTIONS(332),
    [sym_infinity] = ACTIONS(332),
    [sym_numeric_float] = ACTIONS(330),
    [sym_complex] = ACTIONS(332),
    [sym_boolean] = ACTIONS(332),
    [sym_none] = ACTIONS(332),
    [aux_sym_expression_token1] = ACTIONS(330),
    [aux_sym_expression_token2] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [aux_sym_list_token1] = ACTIONS(330),
    [aux_sym_list_token2] = ACTIONS(330),
    [aux_sym_set_token1] = ACTIONS(330),
    [aux_sym_set_token2] = ACTIONS(330),
    [aux_sym_dictionary_token1] = ACTIONS(330),
    [sym_keyword] = ACTIONS(330),
    [sym_string] = ACTIONS(330),
    [aux_sym_fstring_token1] = ACTIONS(330),
    [sym_bstring] = ACTIONS(330),
    [sym_raw_string] = ACTIONS(330),
    [aux_sym_raw_fstring_token1] = ACTIONS(332),
    [sym_raw_bstring] = ACTIONS(330),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(334), 11,
      sym_decimal,
      sym_binary,
      sym_hexadecimal,
      sym_octal,
      sym_nan,
      sym_infinity,
      sym_complex,
      sym_boolean,
      sym_none,
      sym_symbol,
      aux_sym_raw_fstring_token1,
    ACTIONS(336), 14,
      sym_discard_prefix,
      sym_numeric_float,
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
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(340), 1,
      aux_sym_fstring_token2,
    ACTIONS(342), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [43] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(344), 1,
      aux_sym_fstring_token2,
    ACTIONS(346), 1,
      aux_sym_fstring_token4,
    STATE(45), 1,
      aux_sym_fstring_repeat1,
  [56] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(340), 1,
      aux_sym_fstring_token2,
    ACTIONS(348), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [69] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(350), 1,
      aux_sym_fstring_token2,
    ACTIONS(352), 1,
      aux_sym_fstring_token4,
    STATE(53), 1,
      aux_sym_fstring_repeat1,
  [82] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(354), 1,
      aux_sym_fstring_token2,
    ACTIONS(356), 1,
      aux_sym_fstring_token4,
    STATE(47), 1,
      aux_sym_fstring_repeat1,
  [95] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(358), 1,
      aux_sym_fstring_token2,
    ACTIONS(360), 1,
      aux_sym_fstring_token4,
    STATE(52), 1,
      aux_sym_fstring_repeat1,
  [108] = 4,
    ACTIONS(362), 1,
      aux_sym_dictionary_token1,
    ACTIONS(365), 1,
      aux_sym_fstring_token2,
    ACTIONS(368), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [121] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(340), 1,
      aux_sym_fstring_token2,
    ACTIONS(370), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [134] = 4,
    ACTIONS(338), 1,
      aux_sym_dictionary_token1,
    ACTIONS(340), 1,
      aux_sym_fstring_token2,
    ACTIONS(372), 1,
      aux_sym_fstring_token4,
    STATE(51), 1,
      aux_sym_fstring_repeat1,
  [147] = 2,
    ACTIONS(376), 1,
      aux_sym_fstring_token2,
    ACTIONS(374), 2,
      aux_sym_dictionary_token1,
      aux_sym_fstring_token4,
  [155] = 2,
    ACTIONS(250), 1,
      aux_sym_expression_token1,
    STATE(61), 1,
      sym_expression,
  [162] = 2,
    ACTIONS(19), 1,
      aux_sym_expression_token1,
    STATE(35), 1,
      sym_expression,
  [169] = 1,
    ACTIONS(270), 1,
      aux_sym_fstring_token3,
  [173] = 1,
    ACTIONS(326), 1,
      aux_sym_fstring_token3,
  [177] = 1,
    ACTIONS(378), 1,
      aux_sym_fstring_token3,
  [181] = 1,
    ACTIONS(278), 1,
      aux_sym_fstring_token3,
  [185] = 1,
    ACTIONS(298), 1,
      aux_sym_fstring_token3,
  [189] = 1,
    ACTIONS(318), 1,
      aux_sym_fstring_token3,
  [193] = 1,
    ACTIONS(314), 1,
      aux_sym_fstring_token3,
  [197] = 1,
    ACTIONS(322), 1,
      aux_sym_fstring_token3,
  [201] = 1,
    ACTIONS(330), 1,
      aux_sym_fstring_token3,
  [205] = 1,
    ACTIONS(274), 1,
      aux_sym_fstring_token3,
  [209] = 1,
    ACTIONS(282), 1,
      aux_sym_fstring_token3,
  [213] = 1,
    ACTIONS(286), 1,
      aux_sym_fstring_token3,
  [217] = 1,
    ACTIONS(290), 1,
      aux_sym_fstring_token3,
  [221] = 1,
    ACTIONS(294), 1,
      aux_sym_fstring_token3,
  [225] = 1,
    ACTIONS(302), 1,
      aux_sym_fstring_token3,
  [229] = 1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
  [233] = 1,
    ACTIONS(382), 1,
      aux_sym_discard_token1,
  [237] = 1,
    ACTIONS(306), 1,
      aux_sym_fstring_token3,
  [241] = 1,
    ACTIONS(384), 1,
      aux_sym_discard_token1,
  [245] = 1,
    ACTIONS(310), 1,
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
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 3, 0, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 3, 0, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
