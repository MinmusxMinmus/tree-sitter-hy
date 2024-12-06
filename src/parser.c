#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  sym_keyword = 14,
  sym_dotted_identifier = 15,
  sym_ellipsis = 16,
  sym_string = 17,
  aux_sym_fstring_token1 = 18,
  aux_sym_fstring_token2 = 19,
  aux_sym_fstring_token3 = 20,
  aux_sym_fstring_token4 = 21,
  aux_sym_fstring_token5 = 22,
  sym_bstring = 23,
  sym_raw_string = 24,
  aux_sym_raw_fstring_token1 = 25,
  sym_raw_bstring = 26,
  sym_boolean = 27,
  sym_none = 28,
  aux_sym_list_token1 = 29,
  aux_sym_list_token2 = 30,
  aux_sym_set_token1 = 31,
  aux_sym_set_token2 = 32,
  aux_sym_expression_token1 = 33,
  aux_sym_expression_token2 = 34,
  anon_sym_SQUOTE = 35,
  sym_program = 36,
  sym__item = 37,
  sym__form = 38,
  sym_reader_macro = 39,
  sym_discard = 40,
  sym__identifier = 41,
  sym__number = 42,
  sym_integer = 43,
  sym_float = 44,
  sym__string = 45,
  sym_fstring = 46,
  sym_raw_fstring = 47,
  sym_list = 48,
  sym_set = 49,
  sym_dictionary = 50,
  sym_dictionary_item = 51,
  sym_expression = 52,
  sym_quoted_expression = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym_fstring_repeat1 = 55,
  aux_sym_list_repeat1 = 56,
  aux_sym_dictionary_repeat1 = 57,
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
  [sym_keyword] = "keyword",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_ellipsis] = "ellipsis",
  [sym_string] = "string",
  [aux_sym_fstring_token1] = "fstring_token1",
  [aux_sym_fstring_token2] = "fstring_token2",
  [aux_sym_fstring_token3] = "fstring_token3",
  [aux_sym_fstring_token4] = "fstring_token4",
  [aux_sym_fstring_token5] = "fstring_token5",
  [sym_bstring] = "bstring",
  [sym_raw_string] = "raw_string",
  [aux_sym_raw_fstring_token1] = "raw_fstring_token1",
  [sym_raw_bstring] = "raw_bstring",
  [sym_boolean] = "boolean",
  [sym_none] = "none",
  [aux_sym_list_token1] = "list_token1",
  [aux_sym_list_token2] = "list_token2",
  [aux_sym_set_token1] = "set_token1",
  [aux_sym_set_token2] = "set_token2",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_expression_token2] = "expression_token2",
  [anon_sym_SQUOTE] = "'",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym__form] = "_form",
  [sym_reader_macro] = "reader_macro",
  [sym_discard] = "discard",
  [sym__identifier] = "_identifier",
  [sym__number] = "_number",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym__string] = "_string",
  [sym_fstring] = "fstring",
  [sym_raw_fstring] = "raw_fstring",
  [sym_list] = "list",
  [sym_set] = "set",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_item] = "dictionary_item",
  [sym_expression] = "expression",
  [sym_quoted_expression] = "quoted_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_fstring_repeat1] = "fstring_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
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
  [sym_keyword] = sym_keyword,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_ellipsis] = sym_ellipsis,
  [sym_string] = sym_string,
  [aux_sym_fstring_token1] = aux_sym_fstring_token1,
  [aux_sym_fstring_token2] = aux_sym_fstring_token2,
  [aux_sym_fstring_token3] = aux_sym_fstring_token3,
  [aux_sym_fstring_token4] = aux_sym_fstring_token4,
  [aux_sym_fstring_token5] = aux_sym_fstring_token5,
  [sym_bstring] = sym_bstring,
  [sym_raw_string] = sym_raw_string,
  [aux_sym_raw_fstring_token1] = aux_sym_raw_fstring_token1,
  [sym_raw_bstring] = sym_raw_bstring,
  [sym_boolean] = sym_boolean,
  [sym_none] = sym_none,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [aux_sym_list_token2] = aux_sym_list_token2,
  [aux_sym_set_token1] = aux_sym_set_token1,
  [aux_sym_set_token2] = aux_sym_set_token2,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_expression_token2] = aux_sym_expression_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym__form] = sym__form,
  [sym_reader_macro] = sym_reader_macro,
  [sym_discard] = sym_discard,
  [sym__identifier] = sym__identifier,
  [sym__number] = sym__number,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym__string] = sym__string,
  [sym_fstring] = sym_fstring,
  [sym_raw_fstring] = sym_raw_fstring,
  [sym_list] = sym_list,
  [sym_set] = sym_set,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_item] = sym_dictionary_item,
  [sym_expression] = sym_expression,
  [sym_quoted_expression] = sym_quoted_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_fstring_repeat1] = aux_sym_fstring_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipsis] = {
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
  [aux_sym_fstring_token5] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
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
  [sym_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fstring_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
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
  [9] = 8,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 12,
  [19] = 19,
  [20] = 14,
  [21] = 15,
  [22] = 16,
  [23] = 19,
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
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 50,
  [52] = 48,
  [53] = 46,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 37,
  [59] = 41,
  [60] = 32,
  [61] = 42,
  [62] = 44,
  [63] = 39,
  [64] = 40,
  [65] = 43,
  [66] = 28,
  [67] = 29,
  [68] = 30,
  [69] = 31,
  [70] = 33,
  [71] = 34,
  [72] = 35,
  [73] = 73,
  [74] = 74,
  [75] = 38,
  [76] = 74,
  [77] = 36,
  [78] = 78,
};

static TSCharacterRange sym_keyword_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '-'}, {'/', '9'}, {'<', 'Z'}, {'\\', '\\'},
  {'^', '_'}, {'a', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static TSCharacterRange sym_dotted_identifier_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '9'}, {'<', 'Z'}, {'\\', '\\'}, {'^', '_'},
  {'a', 'z'}, {'|', '|'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '"', 79,
        '#', 1,
        '\'', 90,
        '(', 88,
        ')', 89,
        '.', 38,
        '0', 31,
        ':', 45,
        ';', 28,
        'F', 53,
        'I', 58,
        'N', 54,
        'T', 59,
        '[', 84,
        ']', 85,
        'b', 46,
        'f', 47,
        'r', 50,
        '{', 76,
        '}', 78,
        '+', 69,
        '-', 69,
        ',', 69,
        '_', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(71);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(11);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_keyword_character_set_1, 12, lookahead))) ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(43);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(16);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 19:
      if ((!eof && set_contains(sym_keyword_character_set_1, 12, lookahead))) ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '"', 7,
        '#', 1,
        '\'', 90,
        '(', 88,
        ')', 89,
        '.', 38,
        '0', 31,
        ':', 45,
        ';', 28,
        'F', 53,
        'I', 58,
        'N', 54,
        'T', 59,
        '[', 84,
        ']', 85,
        'b', 46,
        'f', 47,
        'r', 50,
        '{', 76,
        '}', 87,
        '+', 69,
        '-', 69,
        ',', 69,
        '_', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '_' &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(68);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_discard_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_discard_prefix);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_decimal);
      ADVANCE_MAP(
        '.', 42,
        '[', 8,
        ',', 31,
        '_', 31,
        'B', 63,
        'b', 63,
        'E', 62,
        'e', 62,
        'J', 44,
        'j', 44,
        'O', 64,
        'o', 64,
        'X', 65,
        'x', 65,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(44);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(33);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_nan);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_infinity);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_numeric_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      if ((!eof && set_contains(sym_keyword_character_set_1, 12, lookahead))) ADVANCE(68);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_complex);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(sym_keyword_character_set_1, 12, lookahead))) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(51);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(48);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(68);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(36);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(57);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(52);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(68);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(37);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(60);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(56);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(61);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 's') ADVANCE(55);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(55);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(19);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(6);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ellipsis);
      if (lookahead == '.') ADVANCE(11);
      if ((!eof && set_contains(sym_dotted_identifier_character_set_1, 11, lookahead))) ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_fstring_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_fstring_token2);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_fstring_token3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_fstring_token3);
      if (lookahead == '{') ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_fstring_token4);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_fstring_token5);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_bstring);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_raw_fstring_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_bstring);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_list_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_set_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_expression_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
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
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 0},
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
    [sym_keyword] = ACTIONS(1),
    [sym_dotted_identifier] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [aux_sym_fstring_token1] = ACTIONS(1),
    [aux_sym_fstring_token3] = ACTIONS(1),
    [aux_sym_fstring_token4] = ACTIONS(1),
    [aux_sym_fstring_token5] = ACTIONS(1),
    [sym_bstring] = ACTIONS(1),
    [sym_raw_string] = ACTIONS(1),
    [aux_sym_raw_fstring_token1] = ACTIONS(1),
    [sym_raw_bstring] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [aux_sym_list_token1] = ACTIONS(1),
    [aux_sym_list_token2] = ACTIONS(1),
    [aux_sym_set_token1] = ACTIONS(1),
    [aux_sym_set_token2] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_expression_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(78),
    [sym__item] = STATE(3),
    [sym__form] = STATE(3),
    [sym_reader_macro] = STATE(3),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(3),
    [sym__number] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_float] = STATE(3),
    [sym__string] = STATE(3),
    [sym_fstring] = STATE(3),
    [sym_raw_fstring] = STATE(3),
    [sym_list] = STATE(3),
    [sym_set] = STATE(3),
    [sym_dictionary] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_quoted_expression] = STATE(3),
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
    [sym_keyword] = ACTIONS(9),
    [sym_dotted_identifier] = ACTIONS(5),
    [sym_ellipsis] = ACTIONS(5),
    [sym_string] = ACTIONS(9),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(9),
    [sym_raw_string] = ACTIONS(9),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(9),
    [sym_boolean] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [2] = {
    [sym__item] = STATE(4),
    [sym__form] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(4),
    [sym__number] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_float] = STATE(4),
    [sym__string] = STATE(4),
    [sym_fstring] = STATE(4),
    [sym_raw_fstring] = STATE(4),
    [sym_list] = STATE(4),
    [sym_set] = STATE(4),
    [sym_dictionary] = STATE(4),
    [sym_expression] = STATE(4),
    [sym_quoted_expression] = STATE(4),
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
    [sym_keyword] = ACTIONS(35),
    [sym_dotted_identifier] = ACTIONS(33),
    [sym_ellipsis] = ACTIONS(33),
    [sym_string] = ACTIONS(35),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(35),
    [sym_raw_string] = ACTIONS(35),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(35),
    [sym_boolean] = ACTIONS(33),
    [sym_none] = ACTIONS(33),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [3] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
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
    [sym_keyword] = ACTIONS(39),
    [sym_dotted_identifier] = ACTIONS(37),
    [sym_ellipsis] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(39),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [4] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
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
    [sym_keyword] = ACTIONS(39),
    [sym_dotted_identifier] = ACTIONS(37),
    [sym_ellipsis] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(39),
    [sym_raw_string] = ACTIONS(39),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(39),
    [sym_boolean] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [5] = {
    [sym__item] = STATE(5),
    [sym__form] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(5),
    [sym__number] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym__string] = STATE(5),
    [sym_fstring] = STATE(5),
    [sym_raw_fstring] = STATE(5),
    [sym_list] = STATE(5),
    [sym_set] = STATE(5),
    [sym_dictionary] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_quoted_expression] = STATE(5),
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
    [sym_keyword] = ACTIONS(48),
    [sym_dotted_identifier] = ACTIONS(45),
    [sym_ellipsis] = ACTIONS(45),
    [sym_string] = ACTIONS(48),
    [aux_sym_fstring_token1] = ACTIONS(60),
    [aux_sym_fstring_token3] = ACTIONS(63),
    [sym_bstring] = ACTIONS(48),
    [sym_raw_string] = ACTIONS(48),
    [aux_sym_raw_fstring_token1] = ACTIONS(66),
    [sym_raw_bstring] = ACTIONS(48),
    [sym_boolean] = ACTIONS(45),
    [sym_none] = ACTIONS(45),
    [aux_sym_list_token1] = ACTIONS(69),
    [aux_sym_set_token1] = ACTIONS(72),
    [aux_sym_expression_token1] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(78),
  },
  [6] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(93),
    [sym_dotted_identifier] = ACTIONS(81),
    [sym_ellipsis] = ACTIONS(81),
    [sym_string] = ACTIONS(93),
    [aux_sym_fstring_token1] = ACTIONS(96),
    [aux_sym_fstring_token3] = ACTIONS(99),
    [sym_bstring] = ACTIONS(93),
    [sym_raw_string] = ACTIONS(93),
    [aux_sym_raw_fstring_token1] = ACTIONS(102),
    [sym_raw_bstring] = ACTIONS(93),
    [sym_boolean] = ACTIONS(81),
    [sym_none] = ACTIONS(81),
    [aux_sym_list_token1] = ACTIONS(105),
    [aux_sym_list_token2] = ACTIONS(108),
    [aux_sym_set_token1] = ACTIONS(110),
    [aux_sym_set_token2] = ACTIONS(108),
    [aux_sym_expression_token1] = ACTIONS(113),
    [aux_sym_expression_token2] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(116),
  },
  [7] = {
    [sym__form] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(9),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
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
    [sym_keyword] = ACTIONS(121),
    [sym_dotted_identifier] = ACTIONS(119),
    [sym_ellipsis] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(121),
    [sym_raw_string] = ACTIONS(121),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(123),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [8] = {
    [sym__form] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(10),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(10),
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
    [sym_keyword] = ACTIONS(121),
    [sym_dotted_identifier] = ACTIONS(119),
    [sym_ellipsis] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(121),
    [sym_raw_string] = ACTIONS(121),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(125),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [9] = {
    [sym__form] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(10),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(10),
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
    [sym_keyword] = ACTIONS(121),
    [sym_dotted_identifier] = ACTIONS(119),
    [sym_ellipsis] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(121),
    [sym_raw_string] = ACTIONS(121),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(127),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [10] = {
    [sym__form] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(10),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
    [aux_sym_dictionary_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(129),
    [sym_discard_prefix] = ACTIONS(132),
    [sym_decimal] = ACTIONS(135),
    [sym_binary] = ACTIONS(135),
    [sym_hexadecimal] = ACTIONS(135),
    [sym_octal] = ACTIONS(135),
    [sym_nan] = ACTIONS(138),
    [sym_infinity] = ACTIONS(138),
    [sym_numeric_float] = ACTIONS(138),
    [sym_complex] = ACTIONS(129),
    [sym_keyword] = ACTIONS(141),
    [sym_dotted_identifier] = ACTIONS(129),
    [sym_ellipsis] = ACTIONS(129),
    [sym_string] = ACTIONS(141),
    [aux_sym_fstring_token1] = ACTIONS(144),
    [aux_sym_fstring_token3] = ACTIONS(147),
    [sym_bstring] = ACTIONS(141),
    [sym_raw_string] = ACTIONS(141),
    [aux_sym_raw_fstring_token1] = ACTIONS(150),
    [sym_raw_bstring] = ACTIONS(141),
    [sym_boolean] = ACTIONS(129),
    [sym_none] = ACTIONS(129),
    [aux_sym_list_token1] = ACTIONS(153),
    [aux_sym_set_token1] = ACTIONS(156),
    [aux_sym_set_token2] = ACTIONS(159),
    [aux_sym_expression_token1] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(164),
  },
  [11] = {
    [sym__form] = STATE(25),
    [sym_reader_macro] = STATE(25),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(25),
    [sym__number] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_float] = STATE(25),
    [sym__string] = STATE(25),
    [sym_fstring] = STATE(25),
    [sym_raw_fstring] = STATE(25),
    [sym_list] = STATE(25),
    [sym_set] = STATE(25),
    [sym_dictionary] = STATE(25),
    [sym_dictionary_item] = STATE(8),
    [sym_expression] = STATE(25),
    [sym_quoted_expression] = STATE(25),
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
    [sym_keyword] = ACTIONS(121),
    [sym_dotted_identifier] = ACTIONS(119),
    [sym_ellipsis] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(121),
    [sym_raw_string] = ACTIONS(121),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [sym_none] = ACTIONS(119),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(167),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [12] = {
    [sym__form] = STATE(15),
    [sym_reader_macro] = STATE(15),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(15),
    [sym__number] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_float] = STATE(15),
    [sym__string] = STATE(15),
    [sym_fstring] = STATE(15),
    [sym_raw_fstring] = STATE(15),
    [sym_list] = STATE(15),
    [sym_set] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym_expression] = STATE(15),
    [sym_quoted_expression] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
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
    [sym_keyword] = ACTIONS(171),
    [sym_dotted_identifier] = ACTIONS(169),
    [sym_ellipsis] = ACTIONS(169),
    [sym_string] = ACTIONS(171),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(171),
    [sym_raw_string] = ACTIONS(171),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(171),
    [sym_boolean] = ACTIONS(169),
    [sym_none] = ACTIONS(169),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(173),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [13] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [aux_sym_expression_token2] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [14] = {
    [sym__form] = STATE(17),
    [sym_reader_macro] = STATE(17),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(17),
    [sym__number] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_float] = STATE(17),
    [sym__string] = STATE(17),
    [sym_fstring] = STATE(17),
    [sym_raw_fstring] = STATE(17),
    [sym_list] = STATE(17),
    [sym_set] = STATE(17),
    [sym_dictionary] = STATE(17),
    [sym_expression] = STATE(17),
    [sym_quoted_expression] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
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
    [sym_keyword] = ACTIONS(183),
    [sym_dotted_identifier] = ACTIONS(181),
    [sym_ellipsis] = ACTIONS(181),
    [sym_string] = ACTIONS(183),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(183),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(183),
    [sym_boolean] = ACTIONS(181),
    [sym_none] = ACTIONS(181),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [aux_sym_expression_token2] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [15] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(187),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [16] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(189),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [17] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [aux_sym_expression_token2] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [18] = {
    [sym__form] = STATE(21),
    [sym_reader_macro] = STATE(21),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(21),
    [sym__number] = STATE(21),
    [sym_integer] = STATE(21),
    [sym_float] = STATE(21),
    [sym__string] = STATE(21),
    [sym_fstring] = STATE(21),
    [sym_raw_fstring] = STATE(21),
    [sym_list] = STATE(21),
    [sym_set] = STATE(21),
    [sym_dictionary] = STATE(21),
    [sym_expression] = STATE(21),
    [sym_quoted_expression] = STATE(21),
    [aux_sym_list_repeat1] = STATE(21),
    [sym_symbol] = ACTIONS(193),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(193),
    [sym_keyword] = ACTIONS(195),
    [sym_dotted_identifier] = ACTIONS(193),
    [sym_ellipsis] = ACTIONS(193),
    [sym_string] = ACTIONS(195),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(195),
    [sym_raw_string] = ACTIONS(195),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(195),
    [sym_boolean] = ACTIONS(193),
    [sym_none] = ACTIONS(193),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(197),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [19] = {
    [sym__form] = STATE(22),
    [sym_reader_macro] = STATE(22),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(22),
    [sym__number] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_float] = STATE(22),
    [sym__string] = STATE(22),
    [sym_fstring] = STATE(22),
    [sym_raw_fstring] = STATE(22),
    [sym_list] = STATE(22),
    [sym_set] = STATE(22),
    [sym_dictionary] = STATE(22),
    [sym_expression] = STATE(22),
    [sym_quoted_expression] = STATE(22),
    [aux_sym_list_repeat1] = STATE(22),
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
    [sym_keyword] = ACTIONS(201),
    [sym_dotted_identifier] = ACTIONS(199),
    [sym_ellipsis] = ACTIONS(199),
    [sym_string] = ACTIONS(201),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(201),
    [sym_raw_string] = ACTIONS(201),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(201),
    [sym_boolean] = ACTIONS(199),
    [sym_none] = ACTIONS(199),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(203),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [20] = {
    [sym__form] = STATE(13),
    [sym_reader_macro] = STATE(13),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(13),
    [sym__number] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_float] = STATE(13),
    [sym__string] = STATE(13),
    [sym_fstring] = STATE(13),
    [sym_raw_fstring] = STATE(13),
    [sym_list] = STATE(13),
    [sym_set] = STATE(13),
    [sym_dictionary] = STATE(13),
    [sym_expression] = STATE(13),
    [sym_quoted_expression] = STATE(13),
    [aux_sym_list_repeat1] = STATE(13),
    [sym_symbol] = ACTIONS(205),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(205),
    [sym_keyword] = ACTIONS(207),
    [sym_dotted_identifier] = ACTIONS(205),
    [sym_ellipsis] = ACTIONS(205),
    [sym_string] = ACTIONS(207),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(207),
    [sym_raw_string] = ACTIONS(207),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(207),
    [sym_boolean] = ACTIONS(205),
    [sym_none] = ACTIONS(205),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [aux_sym_expression_token2] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [21] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_list_token2] = ACTIONS(211),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [22] = {
    [sym__form] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(6),
    [sym__number] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym__string] = STATE(6),
    [sym_fstring] = STATE(6),
    [sym_raw_fstring] = STATE(6),
    [sym_list] = STATE(6),
    [sym_set] = STATE(6),
    [sym_dictionary] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_quoted_expression] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym_keyword] = ACTIONS(177),
    [sym_dotted_identifier] = ACTIONS(175),
    [sym_ellipsis] = ACTIONS(175),
    [sym_string] = ACTIONS(177),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(177),
    [sym_raw_string] = ACTIONS(177),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(177),
    [sym_boolean] = ACTIONS(175),
    [sym_none] = ACTIONS(175),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(213),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [23] = {
    [sym__form] = STATE(16),
    [sym_reader_macro] = STATE(16),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(16),
    [sym__number] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_float] = STATE(16),
    [sym__string] = STATE(16),
    [sym_fstring] = STATE(16),
    [sym_raw_fstring] = STATE(16),
    [sym_list] = STATE(16),
    [sym_set] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym_expression] = STATE(16),
    [sym_quoted_expression] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [sym_symbol] = ACTIONS(215),
    [sym_discard_prefix] = ACTIONS(11),
    [sym_decimal] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(13),
    [sym_octal] = ACTIONS(13),
    [sym_nan] = ACTIONS(15),
    [sym_infinity] = ACTIONS(15),
    [sym_numeric_float] = ACTIONS(15),
    [sym_complex] = ACTIONS(215),
    [sym_keyword] = ACTIONS(217),
    [sym_dotted_identifier] = ACTIONS(215),
    [sym_ellipsis] = ACTIONS(215),
    [sym_string] = ACTIONS(217),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(217),
    [sym_raw_string] = ACTIONS(217),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(217),
    [sym_boolean] = ACTIONS(215),
    [sym_none] = ACTIONS(215),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_set_token2] = ACTIONS(219),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [24] = {
    [sym__form] = STATE(30),
    [sym_reader_macro] = STATE(30),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(30),
    [sym__number] = STATE(30),
    [sym_integer] = STATE(30),
    [sym_float] = STATE(30),
    [sym__string] = STATE(30),
    [sym_fstring] = STATE(30),
    [sym_raw_fstring] = STATE(30),
    [sym_list] = STATE(30),
    [sym_set] = STATE(30),
    [sym_dictionary] = STATE(30),
    [sym_expression] = STATE(30),
    [sym_quoted_expression] = STATE(30),
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
    [sym_keyword] = ACTIONS(223),
    [sym_dotted_identifier] = ACTIONS(221),
    [sym_ellipsis] = ACTIONS(221),
    [sym_string] = ACTIONS(223),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(223),
    [sym_raw_string] = ACTIONS(223),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(223),
    [sym_boolean] = ACTIONS(221),
    [sym_none] = ACTIONS(221),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [25] = {
    [sym__form] = STATE(45),
    [sym_reader_macro] = STATE(45),
    [sym_discard] = STATE(32),
    [sym__identifier] = STATE(45),
    [sym__number] = STATE(45),
    [sym_integer] = STATE(45),
    [sym_float] = STATE(45),
    [sym__string] = STATE(45),
    [sym_fstring] = STATE(45),
    [sym_raw_fstring] = STATE(45),
    [sym_list] = STATE(45),
    [sym_set] = STATE(45),
    [sym_dictionary] = STATE(45),
    [sym_expression] = STATE(45),
    [sym_quoted_expression] = STATE(45),
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
    [sym_keyword] = ACTIONS(227),
    [sym_dotted_identifier] = ACTIONS(225),
    [sym_ellipsis] = ACTIONS(225),
    [sym_string] = ACTIONS(227),
    [aux_sym_fstring_token1] = ACTIONS(17),
    [aux_sym_fstring_token3] = ACTIONS(19),
    [sym_bstring] = ACTIONS(227),
    [sym_raw_string] = ACTIONS(227),
    [aux_sym_raw_fstring_token1] = ACTIONS(21),
    [sym_raw_bstring] = ACTIONS(227),
    [sym_boolean] = ACTIONS(225),
    [sym_none] = ACTIONS(225),
    [aux_sym_list_token1] = ACTIONS(23),
    [aux_sym_set_token1] = ACTIONS(25),
    [aux_sym_expression_token1] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
  },
  [26] = {
    [sym__form] = STATE(68),
    [sym_reader_macro] = STATE(68),
    [sym_discard] = STATE(60),
    [sym__identifier] = STATE(68),
    [sym__number] = STATE(68),
    [sym_integer] = STATE(68),
    [sym_float] = STATE(68),
    [sym__string] = STATE(68),
    [sym_fstring] = STATE(68),
    [sym_raw_fstring] = STATE(68),
    [sym_list] = STATE(68),
    [sym_set] = STATE(68),
    [sym_dictionary] = STATE(68),
    [sym_expression] = STATE(68),
    [sym_quoted_expression] = STATE(68),
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
    [sym_keyword] = ACTIONS(237),
    [sym_dotted_identifier] = ACTIONS(229),
    [sym_ellipsis] = ACTIONS(229),
    [sym_string] = ACTIONS(237),
    [aux_sym_fstring_token1] = ACTIONS(239),
    [aux_sym_fstring_token3] = ACTIONS(241),
    [sym_bstring] = ACTIONS(237),
    [sym_raw_string] = ACTIONS(237),
    [aux_sym_raw_fstring_token1] = ACTIONS(243),
    [sym_raw_bstring] = ACTIONS(237),
    [sym_boolean] = ACTIONS(229),
    [sym_none] = ACTIONS(229),
    [aux_sym_list_token1] = ACTIONS(245),
    [aux_sym_set_token1] = ACTIONS(247),
    [aux_sym_expression_token1] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
  },
  [27] = {
    [sym__form] = STATE(73),
    [sym_reader_macro] = STATE(73),
    [sym_discard] = STATE(60),
    [sym__identifier] = STATE(73),
    [sym__number] = STATE(73),
    [sym_integer] = STATE(73),
    [sym_float] = STATE(73),
    [sym__string] = STATE(73),
    [sym_fstring] = STATE(73),
    [sym_raw_fstring] = STATE(73),
    [sym_list] = STATE(73),
    [sym_set] = STATE(73),
    [sym_dictionary] = STATE(73),
    [sym_expression] = STATE(73),
    [sym_quoted_expression] = STATE(73),
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
    [sym_keyword] = ACTIONS(255),
    [sym_dotted_identifier] = ACTIONS(253),
    [sym_ellipsis] = ACTIONS(253),
    [sym_string] = ACTIONS(255),
    [aux_sym_fstring_token1] = ACTIONS(239),
    [aux_sym_fstring_token3] = ACTIONS(241),
    [sym_bstring] = ACTIONS(255),
    [sym_raw_string] = ACTIONS(255),
    [aux_sym_raw_fstring_token1] = ACTIONS(243),
    [sym_raw_bstring] = ACTIONS(255),
    [sym_boolean] = ACTIONS(253),
    [sym_none] = ACTIONS(253),
    [aux_sym_list_token1] = ACTIONS(245),
    [aux_sym_set_token1] = ACTIONS(247),
    [aux_sym_expression_token1] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
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
    [sym_keyword] = ACTIONS(257),
    [sym_dotted_identifier] = ACTIONS(259),
    [sym_ellipsis] = ACTIONS(259),
    [sym_string] = ACTIONS(257),
    [aux_sym_fstring_token1] = ACTIONS(257),
    [aux_sym_fstring_token3] = ACTIONS(257),
    [sym_bstring] = ACTIONS(257),
    [sym_raw_string] = ACTIONS(257),
    [aux_sym_raw_fstring_token1] = ACTIONS(259),
    [sym_raw_bstring] = ACTIONS(257),
    [sym_boolean] = ACTIONS(259),
    [sym_none] = ACTIONS(259),
    [aux_sym_list_token1] = ACTIONS(257),
    [aux_sym_list_token2] = ACTIONS(257),
    [aux_sym_set_token1] = ACTIONS(257),
    [aux_sym_set_token2] = ACTIONS(257),
    [aux_sym_expression_token1] = ACTIONS(257),
    [aux_sym_expression_token2] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
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
    [sym_keyword] = ACTIONS(261),
    [sym_dotted_identifier] = ACTIONS(263),
    [sym_ellipsis] = ACTIONS(263),
    [sym_string] = ACTIONS(261),
    [aux_sym_fstring_token1] = ACTIONS(261),
    [aux_sym_fstring_token3] = ACTIONS(261),
    [sym_bstring] = ACTIONS(261),
    [sym_raw_string] = ACTIONS(261),
    [aux_sym_raw_fstring_token1] = ACTIONS(263),
    [sym_raw_bstring] = ACTIONS(261),
    [sym_boolean] = ACTIONS(263),
    [sym_none] = ACTIONS(263),
    [aux_sym_list_token1] = ACTIONS(261),
    [aux_sym_list_token2] = ACTIONS(261),
    [aux_sym_set_token1] = ACTIONS(261),
    [aux_sym_set_token2] = ACTIONS(261),
    [aux_sym_expression_token1] = ACTIONS(261),
    [aux_sym_expression_token2] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
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
    [sym_keyword] = ACTIONS(265),
    [sym_dotted_identifier] = ACTIONS(267),
    [sym_ellipsis] = ACTIONS(267),
    [sym_string] = ACTIONS(265),
    [aux_sym_fstring_token1] = ACTIONS(265),
    [aux_sym_fstring_token3] = ACTIONS(265),
    [sym_bstring] = ACTIONS(265),
    [sym_raw_string] = ACTIONS(265),
    [aux_sym_raw_fstring_token1] = ACTIONS(267),
    [sym_raw_bstring] = ACTIONS(265),
    [sym_boolean] = ACTIONS(267),
    [sym_none] = ACTIONS(267),
    [aux_sym_list_token1] = ACTIONS(265),
    [aux_sym_list_token2] = ACTIONS(265),
    [aux_sym_set_token1] = ACTIONS(265),
    [aux_sym_set_token2] = ACTIONS(265),
    [aux_sym_expression_token1] = ACTIONS(265),
    [aux_sym_expression_token2] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
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
    [sym_keyword] = ACTIONS(269),
    [sym_dotted_identifier] = ACTIONS(271),
    [sym_ellipsis] = ACTIONS(271),
    [sym_string] = ACTIONS(269),
    [aux_sym_fstring_token1] = ACTIONS(269),
    [aux_sym_fstring_token3] = ACTIONS(269),
    [sym_bstring] = ACTIONS(269),
    [sym_raw_string] = ACTIONS(269),
    [aux_sym_raw_fstring_token1] = ACTIONS(271),
    [sym_raw_bstring] = ACTIONS(269),
    [sym_boolean] = ACTIONS(271),
    [sym_none] = ACTIONS(271),
    [aux_sym_list_token1] = ACTIONS(269),
    [aux_sym_list_token2] = ACTIONS(269),
    [aux_sym_set_token1] = ACTIONS(269),
    [aux_sym_set_token2] = ACTIONS(269),
    [aux_sym_expression_token1] = ACTIONS(269),
    [aux_sym_expression_token2] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
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
    [sym_keyword] = ACTIONS(273),
    [sym_dotted_identifier] = ACTIONS(275),
    [sym_ellipsis] = ACTIONS(275),
    [sym_string] = ACTIONS(273),
    [aux_sym_fstring_token1] = ACTIONS(273),
    [aux_sym_fstring_token3] = ACTIONS(273),
    [sym_bstring] = ACTIONS(273),
    [sym_raw_string] = ACTIONS(273),
    [aux_sym_raw_fstring_token1] = ACTIONS(275),
    [sym_raw_bstring] = ACTIONS(273),
    [sym_boolean] = ACTIONS(275),
    [sym_none] = ACTIONS(275),
    [aux_sym_list_token1] = ACTIONS(273),
    [aux_sym_list_token2] = ACTIONS(273),
    [aux_sym_set_token1] = ACTIONS(273),
    [aux_sym_set_token2] = ACTIONS(273),
    [aux_sym_expression_token1] = ACTIONS(273),
    [aux_sym_expression_token2] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
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
    [sym_keyword] = ACTIONS(277),
    [sym_dotted_identifier] = ACTIONS(279),
    [sym_ellipsis] = ACTIONS(279),
    [sym_string] = ACTIONS(277),
    [aux_sym_fstring_token1] = ACTIONS(277),
    [aux_sym_fstring_token3] = ACTIONS(277),
    [sym_bstring] = ACTIONS(277),
    [sym_raw_string] = ACTIONS(277),
    [aux_sym_raw_fstring_token1] = ACTIONS(279),
    [sym_raw_bstring] = ACTIONS(277),
    [sym_boolean] = ACTIONS(279),
    [sym_none] = ACTIONS(279),
    [aux_sym_list_token1] = ACTIONS(277),
    [aux_sym_list_token2] = ACTIONS(277),
    [aux_sym_set_token1] = ACTIONS(277),
    [aux_sym_set_token2] = ACTIONS(277),
    [aux_sym_expression_token1] = ACTIONS(277),
    [aux_sym_expression_token2] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
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
    [sym_keyword] = ACTIONS(281),
    [sym_dotted_identifier] = ACTIONS(283),
    [sym_ellipsis] = ACTIONS(283),
    [sym_string] = ACTIONS(281),
    [aux_sym_fstring_token1] = ACTIONS(281),
    [aux_sym_fstring_token3] = ACTIONS(281),
    [sym_bstring] = ACTIONS(281),
    [sym_raw_string] = ACTIONS(281),
    [aux_sym_raw_fstring_token1] = ACTIONS(283),
    [sym_raw_bstring] = ACTIONS(281),
    [sym_boolean] = ACTIONS(283),
    [sym_none] = ACTIONS(283),
    [aux_sym_list_token1] = ACTIONS(281),
    [aux_sym_list_token2] = ACTIONS(281),
    [aux_sym_set_token1] = ACTIONS(281),
    [aux_sym_set_token2] = ACTIONS(281),
    [aux_sym_expression_token1] = ACTIONS(281),
    [aux_sym_expression_token2] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
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
    [sym_keyword] = ACTIONS(285),
    [sym_dotted_identifier] = ACTIONS(287),
    [sym_ellipsis] = ACTIONS(287),
    [sym_string] = ACTIONS(285),
    [aux_sym_fstring_token1] = ACTIONS(285),
    [aux_sym_fstring_token3] = ACTIONS(285),
    [sym_bstring] = ACTIONS(285),
    [sym_raw_string] = ACTIONS(285),
    [aux_sym_raw_fstring_token1] = ACTIONS(287),
    [sym_raw_bstring] = ACTIONS(285),
    [sym_boolean] = ACTIONS(287),
    [sym_none] = ACTIONS(287),
    [aux_sym_list_token1] = ACTIONS(285),
    [aux_sym_list_token2] = ACTIONS(285),
    [aux_sym_set_token1] = ACTIONS(285),
    [aux_sym_set_token2] = ACTIONS(285),
    [aux_sym_expression_token1] = ACTIONS(285),
    [aux_sym_expression_token2] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
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
    [sym_keyword] = ACTIONS(289),
    [sym_dotted_identifier] = ACTIONS(291),
    [sym_ellipsis] = ACTIONS(291),
    [sym_string] = ACTIONS(289),
    [aux_sym_fstring_token1] = ACTIONS(289),
    [aux_sym_fstring_token3] = ACTIONS(289),
    [sym_bstring] = ACTIONS(289),
    [sym_raw_string] = ACTIONS(289),
    [aux_sym_raw_fstring_token1] = ACTIONS(291),
    [sym_raw_bstring] = ACTIONS(289),
    [sym_boolean] = ACTIONS(291),
    [sym_none] = ACTIONS(291),
    [aux_sym_list_token1] = ACTIONS(289),
    [aux_sym_list_token2] = ACTIONS(289),
    [aux_sym_set_token1] = ACTIONS(289),
    [aux_sym_set_token2] = ACTIONS(289),
    [aux_sym_expression_token1] = ACTIONS(289),
    [aux_sym_expression_token2] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
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
    [sym_keyword] = ACTIONS(293),
    [sym_dotted_identifier] = ACTIONS(295),
    [sym_ellipsis] = ACTIONS(295),
    [sym_string] = ACTIONS(293),
    [aux_sym_fstring_token1] = ACTIONS(293),
    [aux_sym_fstring_token3] = ACTIONS(293),
    [sym_bstring] = ACTIONS(293),
    [sym_raw_string] = ACTIONS(293),
    [aux_sym_raw_fstring_token1] = ACTIONS(295),
    [sym_raw_bstring] = ACTIONS(293),
    [sym_boolean] = ACTIONS(295),
    [sym_none] = ACTIONS(295),
    [aux_sym_list_token1] = ACTIONS(293),
    [aux_sym_list_token2] = ACTIONS(293),
    [aux_sym_set_token1] = ACTIONS(293),
    [aux_sym_set_token2] = ACTIONS(293),
    [aux_sym_expression_token1] = ACTIONS(293),
    [aux_sym_expression_token2] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
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
    [sym_keyword] = ACTIONS(297),
    [sym_dotted_identifier] = ACTIONS(299),
    [sym_ellipsis] = ACTIONS(299),
    [sym_string] = ACTIONS(297),
    [aux_sym_fstring_token1] = ACTIONS(297),
    [aux_sym_fstring_token3] = ACTIONS(297),
    [sym_bstring] = ACTIONS(297),
    [sym_raw_string] = ACTIONS(297),
    [aux_sym_raw_fstring_token1] = ACTIONS(299),
    [sym_raw_bstring] = ACTIONS(297),
    [sym_boolean] = ACTIONS(299),
    [sym_none] = ACTIONS(299),
    [aux_sym_list_token1] = ACTIONS(297),
    [aux_sym_list_token2] = ACTIONS(297),
    [aux_sym_set_token1] = ACTIONS(297),
    [aux_sym_set_token2] = ACTIONS(297),
    [aux_sym_expression_token1] = ACTIONS(297),
    [aux_sym_expression_token2] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
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
    [sym_keyword] = ACTIONS(301),
    [sym_dotted_identifier] = ACTIONS(303),
    [sym_ellipsis] = ACTIONS(303),
    [sym_string] = ACTIONS(301),
    [aux_sym_fstring_token1] = ACTIONS(301),
    [aux_sym_fstring_token3] = ACTIONS(301),
    [sym_bstring] = ACTIONS(301),
    [sym_raw_string] = ACTIONS(301),
    [aux_sym_raw_fstring_token1] = ACTIONS(303),
    [sym_raw_bstring] = ACTIONS(301),
    [sym_boolean] = ACTIONS(303),
    [sym_none] = ACTIONS(303),
    [aux_sym_list_token1] = ACTIONS(301),
    [aux_sym_list_token2] = ACTIONS(301),
    [aux_sym_set_token1] = ACTIONS(301),
    [aux_sym_set_token2] = ACTIONS(301),
    [aux_sym_expression_token1] = ACTIONS(301),
    [aux_sym_expression_token2] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
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
    [sym_keyword] = ACTIONS(305),
    [sym_dotted_identifier] = ACTIONS(307),
    [sym_ellipsis] = ACTIONS(307),
    [sym_string] = ACTIONS(305),
    [aux_sym_fstring_token1] = ACTIONS(305),
    [aux_sym_fstring_token3] = ACTIONS(305),
    [sym_bstring] = ACTIONS(305),
    [sym_raw_string] = ACTIONS(305),
    [aux_sym_raw_fstring_token1] = ACTIONS(307),
    [sym_raw_bstring] = ACTIONS(305),
    [sym_boolean] = ACTIONS(307),
    [sym_none] = ACTIONS(307),
    [aux_sym_list_token1] = ACTIONS(305),
    [aux_sym_list_token2] = ACTIONS(305),
    [aux_sym_set_token1] = ACTIONS(305),
    [aux_sym_set_token2] = ACTIONS(305),
    [aux_sym_expression_token1] = ACTIONS(305),
    [aux_sym_expression_token2] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
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
    [sym_keyword] = ACTIONS(309),
    [sym_dotted_identifier] = ACTIONS(311),
    [sym_ellipsis] = ACTIONS(311),
    [sym_string] = ACTIONS(309),
    [aux_sym_fstring_token1] = ACTIONS(309),
    [aux_sym_fstring_token3] = ACTIONS(309),
    [sym_bstring] = ACTIONS(309),
    [sym_raw_string] = ACTIONS(309),
    [aux_sym_raw_fstring_token1] = ACTIONS(311),
    [sym_raw_bstring] = ACTIONS(309),
    [sym_boolean] = ACTIONS(311),
    [sym_none] = ACTIONS(311),
    [aux_sym_list_token1] = ACTIONS(309),
    [aux_sym_list_token2] = ACTIONS(309),
    [aux_sym_set_token1] = ACTIONS(309),
    [aux_sym_set_token2] = ACTIONS(309),
    [aux_sym_expression_token1] = ACTIONS(309),
    [aux_sym_expression_token2] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
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
    [sym_keyword] = ACTIONS(313),
    [sym_dotted_identifier] = ACTIONS(315),
    [sym_ellipsis] = ACTIONS(315),
    [sym_string] = ACTIONS(313),
    [aux_sym_fstring_token1] = ACTIONS(313),
    [aux_sym_fstring_token3] = ACTIONS(313),
    [sym_bstring] = ACTIONS(313),
    [sym_raw_string] = ACTIONS(313),
    [aux_sym_raw_fstring_token1] = ACTIONS(315),
    [sym_raw_bstring] = ACTIONS(313),
    [sym_boolean] = ACTIONS(315),
    [sym_none] = ACTIONS(315),
    [aux_sym_list_token1] = ACTIONS(313),
    [aux_sym_list_token2] = ACTIONS(313),
    [aux_sym_set_token1] = ACTIONS(313),
    [aux_sym_set_token2] = ACTIONS(313),
    [aux_sym_expression_token1] = ACTIONS(313),
    [aux_sym_expression_token2] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
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
    [sym_keyword] = ACTIONS(317),
    [sym_dotted_identifier] = ACTIONS(319),
    [sym_ellipsis] = ACTIONS(319),
    [sym_string] = ACTIONS(317),
    [aux_sym_fstring_token1] = ACTIONS(317),
    [aux_sym_fstring_token3] = ACTIONS(317),
    [sym_bstring] = ACTIONS(317),
    [sym_raw_string] = ACTIONS(317),
    [aux_sym_raw_fstring_token1] = ACTIONS(319),
    [sym_raw_bstring] = ACTIONS(317),
    [sym_boolean] = ACTIONS(319),
    [sym_none] = ACTIONS(319),
    [aux_sym_list_token1] = ACTIONS(317),
    [aux_sym_list_token2] = ACTIONS(317),
    [aux_sym_set_token1] = ACTIONS(317),
    [aux_sym_set_token2] = ACTIONS(317),
    [aux_sym_expression_token1] = ACTIONS(317),
    [aux_sym_expression_token2] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_symbol] = ACTIONS(323),
    [sym_comment] = ACTIONS(321),
    [sym_discard_prefix] = ACTIONS(321),
    [sym_decimal] = ACTIONS(323),
    [sym_binary] = ACTIONS(323),
    [sym_hexadecimal] = ACTIONS(323),
    [sym_octal] = ACTIONS(323),
    [sym_nan] = ACTIONS(323),
    [sym_infinity] = ACTIONS(323),
    [sym_numeric_float] = ACTIONS(323),
    [sym_complex] = ACTIONS(323),
    [sym_keyword] = ACTIONS(321),
    [sym_dotted_identifier] = ACTIONS(323),
    [sym_ellipsis] = ACTIONS(323),
    [sym_string] = ACTIONS(321),
    [aux_sym_fstring_token1] = ACTIONS(321),
    [aux_sym_fstring_token3] = ACTIONS(321),
    [sym_bstring] = ACTIONS(321),
    [sym_raw_string] = ACTIONS(321),
    [aux_sym_raw_fstring_token1] = ACTIONS(323),
    [sym_raw_bstring] = ACTIONS(321),
    [sym_boolean] = ACTIONS(323),
    [sym_none] = ACTIONS(323),
    [aux_sym_list_token1] = ACTIONS(321),
    [aux_sym_list_token2] = ACTIONS(321),
    [aux_sym_set_token1] = ACTIONS(321),
    [aux_sym_set_token2] = ACTIONS(321),
    [aux_sym_expression_token1] = ACTIONS(321),
    [aux_sym_expression_token2] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(327), 13,
      sym_discard_prefix,
      sym_keyword,
      sym_string,
      aux_sym_fstring_token1,
      aux_sym_fstring_token3,
      sym_bstring,
      sym_raw_string,
      sym_raw_bstring,
      aux_sym_list_token1,
      aux_sym_set_token1,
      aux_sym_set_token2,
      aux_sym_expression_token1,
      anon_sym_SQUOTE,
    ACTIONS(325), 14,
      sym_decimal,
      sym_binary,
      sym_hexadecimal,
      sym_octal,
      sym_nan,
      sym_infinity,
      sym_numeric_float,
      sym_complex,
      sym_dotted_identifier,
      sym_ellipsis,
      sym_symbol,
      aux_sym_raw_fstring_token1,
      sym_boolean,
      sym_none,
  [32] = 4,
    ACTIONS(329), 1,
      aux_sym_fstring_token2,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(333), 1,
      aux_sym_fstring_token5,
    STATE(48), 1,
      aux_sym_fstring_repeat1,
  [45] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(335), 1,
      aux_sym_fstring_token2,
    ACTIONS(337), 1,
      aux_sym_fstring_token5,
    STATE(54), 1,
      aux_sym_fstring_repeat1,
  [58] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(335), 1,
      aux_sym_fstring_token2,
    ACTIONS(339), 1,
      aux_sym_fstring_token5,
    STATE(54), 1,
      aux_sym_fstring_repeat1,
  [71] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(335), 1,
      aux_sym_fstring_token2,
    ACTIONS(341), 1,
      aux_sym_fstring_token5,
    STATE(54), 1,
      aux_sym_fstring_repeat1,
  [84] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(343), 1,
      aux_sym_fstring_token2,
    ACTIONS(345), 1,
      aux_sym_fstring_token5,
    STATE(49), 1,
      aux_sym_fstring_repeat1,
  [97] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(347), 1,
      aux_sym_fstring_token2,
    ACTIONS(349), 1,
      aux_sym_fstring_token5,
    STATE(47), 1,
      aux_sym_fstring_repeat1,
  [110] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(335), 1,
      aux_sym_fstring_token2,
    ACTIONS(351), 1,
      aux_sym_fstring_token5,
    STATE(54), 1,
      aux_sym_fstring_repeat1,
  [123] = 4,
    ACTIONS(331), 1,
      aux_sym_fstring_token3,
    ACTIONS(353), 1,
      aux_sym_fstring_token2,
    ACTIONS(355), 1,
      aux_sym_fstring_token5,
    STATE(52), 1,
      aux_sym_fstring_repeat1,
  [136] = 4,
    ACTIONS(357), 1,
      aux_sym_fstring_token2,
    ACTIONS(360), 1,
      aux_sym_fstring_token3,
    ACTIONS(363), 1,
      aux_sym_fstring_token5,
    STATE(54), 1,
      aux_sym_fstring_repeat1,
  [149] = 2,
    ACTIONS(365), 1,
      aux_sym_fstring_token2,
    ACTIONS(367), 2,
      aux_sym_fstring_token3,
      aux_sym_fstring_token5,
  [157] = 2,
    ACTIONS(249), 1,
      aux_sym_expression_token1,
    STATE(67), 1,
      sym_expression,
  [164] = 2,
    ACTIONS(27), 1,
      aux_sym_expression_token1,
    STATE(29), 1,
      sym_expression,
  [171] = 1,
    ACTIONS(293), 1,
      aux_sym_fstring_token4,
  [175] = 1,
    ACTIONS(309), 1,
      aux_sym_fstring_token4,
  [179] = 1,
    ACTIONS(273), 1,
      aux_sym_fstring_token4,
  [183] = 1,
    ACTIONS(313), 1,
      aux_sym_fstring_token4,
  [187] = 1,
    ACTIONS(321), 1,
      aux_sym_fstring_token4,
  [191] = 1,
    ACTIONS(301), 1,
      aux_sym_fstring_token4,
  [195] = 1,
    ACTIONS(305), 1,
      aux_sym_fstring_token4,
  [199] = 1,
    ACTIONS(317), 1,
      aux_sym_fstring_token4,
  [203] = 1,
    ACTIONS(257), 1,
      aux_sym_fstring_token4,
  [207] = 1,
    ACTIONS(261), 1,
      aux_sym_fstring_token4,
  [211] = 1,
    ACTIONS(265), 1,
      aux_sym_fstring_token4,
  [215] = 1,
    ACTIONS(269), 1,
      aux_sym_fstring_token4,
  [219] = 1,
    ACTIONS(277), 1,
      aux_sym_fstring_token4,
  [223] = 1,
    ACTIONS(281), 1,
      aux_sym_fstring_token4,
  [227] = 1,
    ACTIONS(285), 1,
      aux_sym_fstring_token4,
  [231] = 1,
    ACTIONS(369), 1,
      aux_sym_fstring_token4,
  [235] = 1,
    ACTIONS(371), 1,
      aux_sym_discard_token1,
  [239] = 1,
    ACTIONS(297), 1,
      aux_sym_fstring_token4,
  [243] = 1,
    ACTIONS(373), 1,
      aux_sym_discard_token1,
  [247] = 1,
    ACTIONS(289), 1,
      aux_sym_fstring_token4,
  [251] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 32,
  [SMALL_STATE(47)] = 45,
  [SMALL_STATE(48)] = 58,
  [SMALL_STATE(49)] = 71,
  [SMALL_STATE(50)] = 84,
  [SMALL_STATE(51)] = 97,
  [SMALL_STATE(52)] = 110,
  [SMALL_STATE(53)] = 123,
  [SMALL_STATE(54)] = 136,
  [SMALL_STATE(55)] = 149,
  [SMALL_STATE(56)] = 157,
  [SMALL_STATE(57)] = 164,
  [SMALL_STATE(58)] = 171,
  [SMALL_STATE(59)] = 175,
  [SMALL_STATE(60)] = 179,
  [SMALL_STATE(61)] = 183,
  [SMALL_STATE(62)] = 187,
  [SMALL_STATE(63)] = 191,
  [SMALL_STATE(64)] = 195,
  [SMALL_STATE(65)] = 199,
  [SMALL_STATE(66)] = 203,
  [SMALL_STATE(67)] = 207,
  [SMALL_STATE(68)] = 211,
  [SMALL_STATE(69)] = 215,
  [SMALL_STATE(70)] = 219,
  [SMALL_STATE(71)] = 223,
  [SMALL_STATE(72)] = 227,
  [SMALL_STATE(73)] = 231,
  [SMALL_STATE(74)] = 235,
  [SMALL_STATE(75)] = 239,
  [SMALL_STATE(76)] = 243,
  [SMALL_STATE(77)] = 247,
  [SMALL_STATE(78)] = 251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_expression, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 3, 0, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 3, 0, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_fstring, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fstring, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fstring, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_item, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fstring_repeat1, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
