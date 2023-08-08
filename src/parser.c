#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LF = 3,
  anon_sym_SEMI = 4,
  anon_sym_COLON = 5,
  sym_arg_spliter = 6,
  sym_leading_key = 7,
  anon_sym_PLUS_EQ = 8,
  anon_sym_EQ = 9,
  anon_sym_DASH_EQ = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_TILDE = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_DOT = 15,
  anon_sym_AT = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_string_token1 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_string_token2 = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  sym_identifier = 25,
  sym_escape_sequence = 26,
  sym_number = 27,
  sym_line_comment = 28,
  sym_block_comment = 29,
  sym_source_file = 30,
  sym_block = 31,
  sym_command = 32,
  sym__command_unit = 33,
  sym_operators = 34,
  sym_unit = 35,
  sym_decorate = 36,
  sym__unit = 37,
  sym_func = 38,
  sym_arg_block = 39,
  sym_string = 40,
  sym_list = 41,
  sym__args = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_unit_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  aux_sym_string_repeat2 = 47,
  aux_sym__args_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_arg_spliter] = "arg_spliter",
  [sym_leading_key] = "leading_key",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym__command_unit] = "_command_unit",
  [sym_operators] = "operators",
  [sym_unit] = "unit",
  [sym_decorate] = "decorate",
  [sym__unit] = "_unit",
  [sym_func] = "func",
  [sym_arg_block] = "arg_block",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym__args] = "_args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym__args_repeat1] = "_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arg_spliter] = sym_arg_spliter,
  [sym_leading_key] = sym_leading_key,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [sym__command_unit] = sym__command_unit,
  [sym_operators] = sym_operators,
  [sym_unit] = sym_unit,
  [sym_decorate] = sym_decorate,
  [sym__unit] = sym__unit,
  [sym_func] = sym_func,
  [sym_arg_block] = sym_arg_block,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym__args] = sym__args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_spliter] = {
    .visible = true,
    .named = true,
  },
  [sym_leading_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_unit] = {
    .visible = false,
    .named = true,
  },
  [sym_operators] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_decorate] = {
    .visible = true,
    .named = true,
  },
  [sym__unit] = {
    .visible = false,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__args] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__args_repeat1] = {
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
  [7] = 5,
  [8] = 8,
  [9] = 6,
  [10] = 4,
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
  [34] = 13,
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 16,
  [41] = 14,
  [42] = 21,
  [43] = 17,
  [44] = 18,
  [45] = 19,
  [46] = 22,
  [47] = 20,
  [48] = 48,
  [49] = 24,
  [50] = 23,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 55,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 62,
  [66] = 26,
  [67] = 25,
  [68] = 68,
  [69] = 29,
  [70] = 70,
  [71] = 28,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 72,
  [78] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_arg_spliter);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_leading_key);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
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
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arg_spliter] = ACTIONS(1),
    [sym_leading_key] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_block] = STATE(27),
    [sym_command] = STATE(8),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [sym_arg_spliter] = ACTIONS(25),
    [anon_sym_PLUS_EQ] = ACTIONS(28),
    [anon_sym_EQ] = ACTIONS(28),
    [anon_sym_DASH_EQ] = ACTIONS(28),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_DASH_GT] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_identifier] = ACTIONS(46),
    [sym_number] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(27),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_arg_spliter] = ACTIONS(53),
    [anon_sym_PLUS_EQ] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_DASH_EQ] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_DASH_GT] = ACTIONS(56),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [sym_identifier] = ACTIONS(71),
    [sym_number] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [4] = {
    [sym_block] = STATE(27),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [sym_arg_spliter] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_number] = ACTIONS(82),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [5] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(5),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_block] = STATE(27),
    [sym_command] = STATE(7),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_block] = STATE(27),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [sym_arg_spliter] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_number] = ACTIONS(82),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [11] = {
    [sym_block] = STATE(27),
    [sym__command_unit] = STATE(27),
    [sym_operators] = STATE(27),
    [sym_unit] = STATE(27),
    [sym_decorate] = STATE(27),
    [sym__unit] = STATE(15),
    [sym_func] = STATE(15),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_LF] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [sym_arg_spliter] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_number] = ACTIONS(82),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [12] = {
    [sym_block] = STATE(68),
    [sym__command_unit] = STATE(68),
    [sym_operators] = STATE(68),
    [sym_unit] = STATE(68),
    [sym_decorate] = STATE(68),
    [sym__unit] = STATE(35),
    [sym_func] = STATE(35),
    [sym_string] = STATE(68),
    [sym_list] = STATE(68),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_arg_spliter] = ACTIONS(106),
    [anon_sym_PLUS_EQ] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_DASH_EQ] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_number] = ACTIONS(106),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arg_block,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [35] = 5,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_unit_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [69] = 5,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym_unit_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [103] = 5,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_unit_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [137] = 3,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [166] = 3,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [195] = 3,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [224] = 3,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [253] = 3,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [282] = 3,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [311] = 3,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [339] = 3,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [367] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [395] = 3,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [423] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 17,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [453] = 3,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [481] = 3,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [509] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 15,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [535] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      sym_arg_spliter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(32), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [572] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_arg_spliter,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(33), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [609] = 10,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      sym_arg_spliter,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(33), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [646] = 4,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_arg_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [670] = 4,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_unit_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [693] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym__args,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(31), 3,
      sym_unit,
      sym_string,
      sym_list,
  [728] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym__args,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(31), 3,
      sym_unit,
      sym_string,
      sym_list,
  [763] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym__args,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(31), 3,
      sym_unit,
      sym_string,
      sym_list,
  [798] = 10,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__args,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(31), 3,
      sym_unit,
      sym_string,
      sym_list,
  [833] = 4,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_unit_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [856] = 4,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_unit_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [879] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [897] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [915] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [933] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [951] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [969] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [987] = 8,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__unit,
      sym_func,
    STATE(51), 3,
      sym_unit,
      sym_string,
      sym_list,
  [1016] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [1033] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [1050] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 8,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [1065] = 5,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym__unit,
      sym_func,
      sym_string,
  [1084] = 5,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(44), 3,
      sym__unit,
      sym_func,
      sym_string,
  [1103] = 5,
    ACTIONS(248), 1,
      sym_leading_key,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1121] = 5,
    ACTIONS(256), 1,
      sym_leading_key,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1139] = 5,
    ACTIONS(256), 1,
      sym_leading_key,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat2,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1157] = 5,
    ACTIONS(256), 1,
      sym_leading_key,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym_string_repeat2,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1175] = 5,
    ACTIONS(256), 1,
      sym_leading_key,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1193] = 3,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(272), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1206] = 3,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(276), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1219] = 4,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1234] = 4,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1249] = 4,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1264] = 4,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1279] = 4,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1294] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1303] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1312] = 3,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1323] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1332] = 3,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1343] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1352] = 2,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1360] = 2,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1368] = 2,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1376] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1384] = 2,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1392] = 2,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1400] = 2,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 35,
  [SMALL_STATE(15)] = 69,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 137,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 339,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 535,
  [SMALL_STATE(32)] = 572,
  [SMALL_STATE(33)] = 609,
  [SMALL_STATE(34)] = 646,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 763,
  [SMALL_STATE(39)] = 798,
  [SMALL_STATE(40)] = 833,
  [SMALL_STATE(41)] = 856,
  [SMALL_STATE(42)] = 879,
  [SMALL_STATE(43)] = 897,
  [SMALL_STATE(44)] = 915,
  [SMALL_STATE(45)] = 933,
  [SMALL_STATE(46)] = 951,
  [SMALL_STATE(47)] = 969,
  [SMALL_STATE(48)] = 987,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1033,
  [SMALL_STATE(51)] = 1050,
  [SMALL_STATE(52)] = 1065,
  [SMALL_STATE(53)] = 1084,
  [SMALL_STATE(54)] = 1103,
  [SMALL_STATE(55)] = 1121,
  [SMALL_STATE(56)] = 1139,
  [SMALL_STATE(57)] = 1157,
  [SMALL_STATE(58)] = 1175,
  [SMALL_STATE(59)] = 1193,
  [SMALL_STATE(60)] = 1206,
  [SMALL_STATE(61)] = 1219,
  [SMALL_STATE(62)] = 1234,
  [SMALL_STATE(63)] = 1249,
  [SMALL_STATE(64)] = 1264,
  [SMALL_STATE(65)] = 1279,
  [SMALL_STATE(66)] = 1294,
  [SMALL_STATE(67)] = 1303,
  [SMALL_STATE(68)] = 1312,
  [SMALL_STATE(69)] = 1323,
  [SMALL_STATE(70)] = 1332,
  [SMALL_STATE(71)] = 1343,
  [SMALL_STATE(72)] = 1352,
  [SMALL_STATE(73)] = 1360,
  [SMALL_STATE(74)] = 1368,
  [SMALL_STATE(75)] = 1376,
  [SMALL_STATE(76)] = 1384,
  [SMALL_STATE(77)] = 1392,
  [SMALL_STATE(78)] = 1400,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(52),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decorate, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorate, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(33),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(48),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(64),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(57),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(39),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(70),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(54),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_groovy(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
