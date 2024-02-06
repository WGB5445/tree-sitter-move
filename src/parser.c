#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  anon_sym_use = 2,
  anon_sym_SEMI = 3,
  anon_sym_as = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_STAR = 9,
  anon_sym_POUND = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LPAREN = 13,
  anon_sym_EQ = 14,
  anon_sym_RPAREN = 15,
  anon_sym_AT = 16,
  sym_integer_literal = 17,
  sym_hex_literal = 18,
  sym_source_file = 19,
  sym__statement = 20,
  sym__declaration_statement = 21,
  sym_use_declaration = 22,
  sym__use_clause = 23,
  sym_use_as_clause = 24,
  sym_use_list = 25,
  sym_scoped_use_list = 26,
  sym_use_wildcard = 27,
  sym_attribute_item = 28,
  sym_attribute = 29,
  sym__path = 30,
  sym_scoped_identifier = 31,
  sym_address_literal = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_use_list_repeat1 = 34,
  aux_sym_attribute_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_use] = "use",
  [anon_sym_SEMI] = ";",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_EQ] = "=",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [sym_integer_literal] = "integer_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_use_declaration] = "use_declaration",
  [sym__use_clause] = "_use_clause",
  [sym_use_as_clause] = "use_as_clause",
  [sym_use_list] = "use_list",
  [sym_scoped_use_list] = "scoped_use_list",
  [sym_use_wildcard] = "use_wildcard",
  [sym_attribute_item] = "attribute_item",
  [sym_attribute] = "attribute",
  [sym__path] = "_path",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym_address_literal] = "address_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_list_repeat1] = "use_list_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [sym_integer_literal] = sym_integer_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_use_declaration] = sym_use_declaration,
  [sym__use_clause] = sym__use_clause,
  [sym_use_as_clause] = sym_use_as_clause,
  [sym_use_list] = sym_use_list,
  [sym_scoped_use_list] = sym_scoped_use_list,
  [sym_use_wildcard] = sym_use_wildcard,
  [sym_attribute_item] = sym_attribute_item,
  [sym_attribute] = sym_attribute,
  [sym__path] = sym__path,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym_address_literal] = sym_address_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_list_repeat1] = aux_sym_use_list_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_use_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__use_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_use_as_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_use_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_use_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_item] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_address_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_argument = 2,
  field_arguments = 3,
  field_list = 4,
  field_name = 5,
  field_path = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_list] = "list",
  [field_name] = "name",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_list, 1},
  [2] =
    {field_argument, 1},
  [3] =
    {field_alias, 2},
    {field_path, 0},
  [5] =
    {field_name, 2},
    {field_path, 0},
  [7] =
    {field_list, 2},
    {field_path, 0},
  [9] =
    {field_arguments, 2},
    {field_value, 4},
  [11] =
    {field_arguments, 2},
    {field_arguments, 5, .inherited = true},
    {field_value, 4},
    {field_value, 5, .inherited = true},
  [15] =
    {field_arguments, 0, .inherited = true},
    {field_arguments, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [19] =
    {field_arguments, 1},
    {field_value, 3},
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '2') ADVANCE(6);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(8);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '5') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '8') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(33);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'u') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'u') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'u') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_use);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__statement] = STATE(7),
    [sym__declaration_statement] = STATE(7),
    [sym_use_declaration] = STATE(7),
    [sym_attribute_item] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(11), 2,
      sym__path,
      sym_scoped_identifier,
    STATE(17), 5,
      sym__use_clause,
      sym_use_as_clause,
      sym_use_list,
      sym_scoped_use_list,
      sym_use_wildcard,
  [30] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__path,
      sym_scoped_identifier,
    STATE(35), 5,
      sym__use_clause,
      sym_use_as_clause,
      sym_use_list,
      sym_scoped_use_list,
      sym_use_wildcard,
  [57] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__path,
      sym_scoped_identifier,
    STATE(35), 5,
      sym__use_clause,
      sym_use_as_clause,
      sym_use_list,
      sym_scoped_use_list,
      sym_use_wildcard,
  [84] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(11), 2,
      sym__path,
      sym_scoped_identifier,
    STATE(48), 5,
      sym__use_clause,
      sym_use_as_clause,
      sym_use_list,
      sym_scoped_use_list,
      sym_use_wildcard,
  [108] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_COLON_COLON,
    ACTIONS(19), 1,
      anon_sym_STAR,
    STATE(11), 2,
      sym__path,
      sym_scoped_identifier,
    STATE(35), 5,
      sym__use_clause,
      sym_use_as_clause,
      sym_use_list,
      sym_scoped_use_list,
      sym_use_wildcard,
  [132] = 4,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 5,
      sym__statement,
      sym__declaration_statement,
      sym_use_declaration,
      sym_attribute_item,
      aux_sym_source_file_repeat1,
  [149] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_use,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(8), 5,
      sym__statement,
      sym__declaration_statement,
      sym_use_declaration,
      sym_attribute_item,
      aux_sym_source_file_repeat1,
  [166] = 1,
    ACTIONS(35), 7,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [176] = 1,
    ACTIONS(37), 7,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [186] = 3,
    ACTIONS(41), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [198] = 4,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      sym_attribute,
    STATE(23), 2,
      sym__path,
      sym_scoped_identifier,
  [212] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_use_list,
  [225] = 1,
    ACTIONS(53), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [231] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_use_list_repeat1,
  [241] = 1,
    ACTIONS(60), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [247] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_use_list_repeat1,
  [257] = 1,
    ACTIONS(66), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [263] = 1,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_POUND,
  [269] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_attribute_repeat1,
  [279] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_attribute_repeat1,
  [289] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_attribute_repeat1,
  [299] = 3,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
  [309] = 1,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [315] = 1,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [321] = 3,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_use_list_repeat1,
  [331] = 1,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [337] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(18), 1,
      sym_use_list,
  [347] = 1,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [353] = 1,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [359] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_POUND,
  [365] = 1,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [371] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [381] = 1,
    ACTIONS(113), 2,
      sym_identifier,
      sym_hex_literal,
  [386] = 1,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [391] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [396] = 2,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym_address_literal,
  [403] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [410] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
  [417] = 2,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym_address_literal,
  [424] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [429] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
  [433] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [437] = 1,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
  [441] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [445] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
  [449] = 1,
    ACTIONS(49), 1,
      sym_identifier,
  [453] = 1,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [457] = 1,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
  [461] = 1,
    ACTIONS(97), 1,
      sym_identifier,
  [465] = 1,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [469] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [473] = 1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
  [477] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
  [481] = 1,
    ACTIONS(149), 1,
      sym_identifier,
  [485] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [489] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
  [493] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [497] = 1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 257,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 315,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 371,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 386,
  [SMALL_STATE(36)] = 391,
  [SMALL_STATE(37)] = 396,
  [SMALL_STATE(38)] = 403,
  [SMALL_STATE(39)] = 410,
  [SMALL_STATE(40)] = 417,
  [SMALL_STATE(41)] = 424,
  [SMALL_STATE(42)] = 429,
  [SMALL_STATE(43)] = 433,
  [SMALL_STATE(44)] = 437,
  [SMALL_STATE(45)] = 441,
  [SMALL_STATE(46)] = 445,
  [SMALL_STATE(47)] = 449,
  [SMALL_STATE(48)] = 453,
  [SMALL_STATE(49)] = 457,
  [SMALL_STATE(50)] = 461,
  [SMALL_STATE(51)] = 465,
  [SMALL_STATE(52)] = 469,
  [SMALL_STATE(53)] = 473,
  [SMALL_STATE(54)] = 477,
  [SMALL_STATE(55)] = 481,
  [SMALL_STATE(56)] = 485,
  [SMALL_STATE(57)] = 489,
  [SMALL_STATE(58)] = 493,
  [SMALL_STATE(59)] = 497,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_clause, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_use_list, 3, .production_id = 6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_use_list, 2, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 3, .production_id = 3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 9), SHIFT_REPEAT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_as_clause, 3, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_wildcard, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_wildcard, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_item, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 4, .production_id = 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_literal, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 8, .production_id = 8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_move(void) {
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
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
