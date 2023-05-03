#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token2 = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_identifier = 24,
  sym_escape_sequence = 25,
  sym_number = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym_block = 29,
  sym_command = 30,
  sym__command_unit = 31,
  sym_operators = 32,
  sym_unit = 33,
  sym__unit = 34,
  sym_func = 35,
  sym_arg_block = 36,
  sym_string = 37,
  sym_list = 38,
  sym__args = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_block_repeat1 = 41,
  aux_sym_unit_repeat1 = 42,
  aux_sym_string_repeat1 = 43,
  aux_sym_string_repeat2 = 44,
  aux_sym__args_repeat1 = 45,
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
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym__command_unit] = "_command_unit",
  [sym_operators] = "operators",
  [sym_unit] = "unit",
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
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [sym__command_unit] = sym__command_unit,
  [sym_operators] = sym_operators,
  [sym_unit] = sym_unit,
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
  [sym_comment] = {
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 5,
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
  [33] = 13,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 35,
  [38] = 15,
  [39] = 16,
  [40] = 14,
  [41] = 21,
  [42] = 19,
  [43] = 22,
  [44] = 17,
  [45] = 20,
  [46] = 18,
  [47] = 47,
  [48] = 27,
  [49] = 24,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 59,
  [65] = 28,
  [66] = 25,
  [67] = 26,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_arg_spliter);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_leading_key);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
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
  [29] = {.lex_state = 0},
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
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_block] = STATE(23),
    [sym_command] = STATE(3),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [sym_arg_spliter] = ACTIONS(23),
    [anon_sym_PLUS_EQ] = ACTIONS(26),
    [anon_sym_EQ] = ACTIONS(26),
    [anon_sym_DASH_EQ] = ACTIONS(26),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(26),
    [anon_sym_DASH_GT] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(4),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(2),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(11),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_arg_spliter] = ACTIONS(7),
    [anon_sym_PLUS_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_DASH_EQ] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(23),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LF] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [sym_arg_spliter] = ACTIONS(58),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_number] = ACTIONS(58),
    [sym_comment] = ACTIONS(68),
  },
  [8] = {
    [sym_block] = STATE(23),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LF] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_arg_spliter] = ACTIONS(74),
    [anon_sym_PLUS_EQ] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_DASH_EQ] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_identifier] = ACTIONS(89),
    [sym_number] = ACTIONS(74),
    [sym_comment] = ACTIONS(68),
  },
  [9] = {
    [sym_block] = STATE(23),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_LF] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [sym_arg_spliter] = ACTIONS(58),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_number] = ACTIONS(58),
    [sym_comment] = ACTIONS(68),
  },
  [10] = {
    [sym_block] = STATE(23),
    [sym_command] = STATE(6),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_block_repeat1] = STATE(7),
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
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_block] = STATE(23),
    [sym__command_unit] = STATE(23),
    [sym_operators] = STATE(23),
    [sym_unit] = STATE(23),
    [sym__unit] = STATE(14),
    [sym_func] = STATE(14),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_LF] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [sym_arg_spliter] = ACTIONS(58),
    [anon_sym_PLUS_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_DASH_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_number] = ACTIONS(58),
    [sym_comment] = ACTIONS(68),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(100), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(40), 2,
      sym__unit,
      sym_func,
    ACTIONS(96), 3,
      anon_sym_COLON,
      sym_arg_spliter,
      sym_number,
    ACTIONS(98), 5,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
    STATE(68), 6,
      sym_block,
      sym__command_unit,
      sym_operators,
      sym_unit,
      sym_string,
      sym_list,
  [44] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arg_block,
    ACTIONS(110), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [77] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_unit_repeat1,
    ACTIONS(116), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [109] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_unit_repeat1,
    ACTIONS(122), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [141] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(131), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_unit_repeat1,
    ACTIONS(129), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [173] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(133), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [200] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(137), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [227] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(141), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [254] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(145), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [281] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(149), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [308] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(122), 18,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [335] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(155), 16,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [363] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(159), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [389] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(163), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [415] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(167), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [441] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(171), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [467] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(175), 17,
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
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_DASH_EQ,
      anon_sym_TILDE,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      sym_number,
  [517] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(185), 1,
      sym_arg_spliter,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(32), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [553] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      sym_arg_spliter,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(195), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(31), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [589] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_arg_spliter,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(31), 4,
      sym_unit,
      sym_string,
      sym_list,
      aux_sym__args_repeat1,
  [625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_arg_block,
    ACTIONS(112), 11,
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
  [648] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym__args,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(30), 3,
      sym_unit,
      sym_string,
      sym_list,
  [682] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym__args,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(30), 3,
      sym_unit,
      sym_string,
      sym_list,
  [716] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym__args,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(30), 3,
      sym_unit,
      sym_string,
      sym_list,
  [750] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym__args,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(30), 3,
      sym_unit,
      sym_string,
      sym_list,
  [784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_unit_repeat1,
    ACTIONS(124), 10,
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
  [806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_unit_repeat1,
    ACTIONS(131), 10,
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
  [828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_unit_repeat1,
    ACTIONS(118), 10,
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
  [850] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 11,
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
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 11,
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
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 11,
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
  [952] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_COLON,
    STATE(40), 2,
      sym__unit,
      sym_func,
    STATE(50), 3,
      sym_unit,
      sym_string,
      sym_list,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 10,
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
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 10,
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
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 8,
      anon_sym_COLON,
      sym_arg_spliter,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [1026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(22), 3,
      sym__unit,
      sym_func,
      sym_string,
  [1044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(43), 3,
      sym__unit,
      sym_func,
      sym_string,
  [1062] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_leading_key,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat2,
    ACTIONS(236), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1079] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_leading_key,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat2,
    ACTIONS(240), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1096] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_leading_key,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat2,
    ACTIONS(247), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1113] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_leading_key,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat2,
    ACTIONS(252), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1130] = 5,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_leading_key,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat2,
    ACTIONS(236), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1147] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(258), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1159] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(260), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1173] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(262), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1187] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym_leading_key,
      anon_sym_DQUOTE,
    ACTIONS(264), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [1199] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(262), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1213] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(268), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1227] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(271), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      sym_identifier,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 44,
  [SMALL_STATE(14)] = 77,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 335,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 415,
  [SMALL_STATE(27)] = 441,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 517,
  [SMALL_STATE(31)] = 553,
  [SMALL_STATE(32)] = 589,
  [SMALL_STATE(33)] = 625,
  [SMALL_STATE(34)] = 648,
  [SMALL_STATE(35)] = 682,
  [SMALL_STATE(36)] = 716,
  [SMALL_STATE(37)] = 750,
  [SMALL_STATE(38)] = 784,
  [SMALL_STATE(39)] = 806,
  [SMALL_STATE(40)] = 828,
  [SMALL_STATE(41)] = 850,
  [SMALL_STATE(42)] = 867,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 901,
  [SMALL_STATE(45)] = 918,
  [SMALL_STATE(46)] = 935,
  [SMALL_STATE(47)] = 952,
  [SMALL_STATE(48)] = 980,
  [SMALL_STATE(49)] = 996,
  [SMALL_STATE(50)] = 1012,
  [SMALL_STATE(51)] = 1026,
  [SMALL_STATE(52)] = 1044,
  [SMALL_STATE(53)] = 1062,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1096,
  [SMALL_STATE(56)] = 1113,
  [SMALL_STATE(57)] = 1130,
  [SMALL_STATE(58)] = 1147,
  [SMALL_STATE(59)] = 1159,
  [SMALL_STATE(60)] = 1173,
  [SMALL_STATE(61)] = 1187,
  [SMALL_STATE(62)] = 1199,
  [SMALL_STATE(63)] = 1213,
  [SMALL_STATE(64)] = 1227,
  [SMALL_STATE(65)] = 1241,
  [SMALL_STATE(66)] = 1249,
  [SMALL_STATE(67)] = 1257,
  [SMALL_STATE(68)] = 1265,
  [SMALL_STATE(69)] = 1275,
  [SMALL_STATE(70)] = 1285,
  [SMALL_STATE(71)] = 1292,
  [SMALL_STATE(72)] = 1299,
  [SMALL_STATE(73)] = 1306,
  [SMALL_STATE(74)] = 1313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unit, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unit, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(51),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_block, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_block, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operators, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operators, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(31),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(47),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(64),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(54),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(37),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(52),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(69),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(55),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
