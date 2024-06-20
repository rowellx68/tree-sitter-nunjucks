#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  anon_sym_CR = 3,
  sym__block_start = 4,
  sym__block_end = 5,
  anon_sym_LBRACE_POUND = 6,
  anon_sym_DASH = 7,
  aux_sym__comment_start_token1 = 8,
  anon_sym_POUND_RBRACE = 9,
  anon_sym_as = 10,
  sym_with_context = 11,
  sym_template_path = 12,
  anon_sym_and = 13,
  anon_sym_or = 14,
  anon_sym_not = 15,
  anon_sym_andnot = 16,
  anon_sym_ornot = 17,
  anon_sym_PLUS = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_EQ_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_BANG_EQ_EQ_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_COMMA = 32,
  aux_sym_comment_token1 = 33,
  anon_sym_import = 34,
  anon_sym_from = 35,
  sym_identifier = 36,
  sym_number = 37,
  anon_sym_if = 38,
  sym_source_file = 39,
  sym__definition = 40,
  sym__newline = 41,
  sym__comment_start = 42,
  sym__comment_end = 43,
  sym_alias = 44,
  sym_logical_operator = 45,
  sym_comparators = 46,
  sym_condition = 47,
  sym_import_target = 48,
  sym_comment = 49,
  sym_import = 50,
  sym_if = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_import_repeat1 = 53,
  aux_sym_if_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_DASH] = "-",
  [aux_sym__comment_start_token1] = "_comment_start_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_as] = "as",
  [sym_with_context] = "with_context",
  [sym_template_path] = "template_path",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_andnot] = "and not",
  [anon_sym_ornot] = "or not",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ_EQ] = "!===",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_if] = "if",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__newline] = "_newline",
  [sym__comment_start] = "_comment_start",
  [sym__comment_end] = "_comment_end",
  [sym_alias] = "alias",
  [sym_logical_operator] = "logical_operator",
  [sym_comparators] = "comparators",
  [sym_condition] = "condition",
  [sym_import_target] = "import_target",
  [sym_comment] = "comment",
  [sym_import] = "import",
  [sym_if] = "if",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__comment_start_token1] = aux_sym__comment_start_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [sym_with_context] = sym_with_context,
  [sym_template_path] = sym_template_path,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_andnot] = anon_sym_andnot,
  [anon_sym_ornot] = anon_sym_ornot,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_EQ_EQ_EQ] = anon_sym_BANG_EQ_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_if] = anon_sym_if,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__newline] = sym__newline,
  [sym__comment_start] = sym__comment_start,
  [sym__comment_end] = sym__comment_end,
  [sym_alias] = sym_alias,
  [sym_logical_operator] = sym_logical_operator,
  [sym_comparators] = sym_comparators,
  [sym_condition] = sym_condition,
  [sym_import_target] = sym_import_target,
  [sym_comment] = sym_comment,
  [sym_import] = sym_import,
  [sym_if] = sym_if,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_start_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_with_context] = {
    .visible = true,
    .named = true,
  },
  [sym_template_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ornot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_start] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_end] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparators] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_target] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_target = 6,
  field_target_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_target] = "target",
  [field_target_name] = "target_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 4},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 0},
  [1] =
    {field_condition, 0},
  [2] =
    {field_condition, 2, .inherited = true},
    {field_target, 2, .inherited = true},
  [4] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_target, 0, .inherited = true},
    {field_target, 1, .inherited = true},
  [8] =
    {field_name, 1},
  [9] =
    {field_target_name, 0},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '!', 21,
        '"', 20,
        '#', 55,
        '%', 85,
        '(', 95,
        ')', 96,
        '*', 83,
        '+', 82,
        ',', 97,
        '-', 65,
        '/', 84,
        '<', 93,
        '=', 22,
        '>', 91,
        'a', 32,
        'f', 44,
        'i', 28,
        'n', 36,
        'o', 43,
        'w', 30,
        '{', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 21,
        '"', 20,
        '#', 55,
        '%', 86,
        '(', 95,
        ')', 96,
        '*', 83,
        '+', 82,
        ',', 97,
        '-', 66,
        '/', 84,
        '<', 93,
        '=', 22,
        '>', 91,
        'a', 32,
        'f', 44,
        'i', 28,
        'n', 36,
        'o', 43,
        'w', 30,
        '{', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 21,
        '%', 56,
        '(', 95,
        ')', 96,
        '-', 7,
        '<', 93,
        '=', 22,
        '>', 91,
        'a', 107,
        'n', 109,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 21,
        '(', 95,
        ')', 96,
        '<', 93,
        '=', 22,
        '>', 91,
        'a', 107,
        'n', 109,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '%') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'j') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'k') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 57:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '{') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__block_start);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__block_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(56);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__comment_start_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_with_context);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_with_context);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_template_path);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_andnot);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ornot);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 98},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_with_context] = ACTIONS(1),
    [sym_template_path] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_andnot] = ACTIONS(1),
    [anon_sym_ornot] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym__definition] = STATE(3),
    [sym__newline] = STATE(3),
    [sym__comment_start] = STATE(54),
    [sym_comment] = STATE(3),
    [sym_import] = STATE(3),
    [sym_if] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(5),
    [sym__block_start] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(32), 1,
      sym_logical_operator,
    STATE(39), 1,
      sym_comparators,
    ACTIONS(11), 2,
      sym__block_end,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_andnot,
      anon_sym_ornot,
    ACTIONS(13), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
    ACTIONS(17), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [35] = 6,
    ACTIONS(7), 1,
      sym__block_start,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym__comment_start,
    ACTIONS(25), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
    STATE(4), 6,
      sym__definition,
      sym__newline,
      sym_comment,
      sym_import,
      sym_if,
      aux_sym_source_file_repeat1,
  [61] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym__block_start,
    ACTIONS(35), 1,
      anon_sym_LBRACE_POUND,
    STATE(54), 1,
      sym__comment_start,
    ACTIONS(29), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
    STATE(4), 6,
      sym__definition,
      sym__newline,
      sym_comment,
      sym_import,
      sym_if,
      aux_sym_source_file_repeat1,
  [87] = 3,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 4,
      sym__block_end,
      anon_sym_andnot,
      anon_sym_ornot,
      anon_sym_LPAREN,
    ACTIONS(40), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
  [103] = 3,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 4,
      sym__block_end,
      anon_sym_andnot,
      anon_sym_ornot,
      anon_sym_LPAREN,
    ACTIONS(46), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
  [119] = 3,
    STATE(38), 1,
      sym_comparators,
    ACTIONS(17), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [135] = 5,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(34), 1,
      sym_logical_operator,
    ACTIONS(15), 2,
      anon_sym_andnot,
      anon_sym_ornot,
    ACTIONS(50), 2,
      sym__block_end,
      anon_sym_LPAREN,
    ACTIONS(13), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [155] = 2,
    ACTIONS(54), 4,
      sym__block_end,
      anon_sym_andnot,
      anon_sym_ornot,
      anon_sym_LPAREN,
    ACTIONS(56), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
  [168] = 2,
    ACTIONS(58), 4,
      sym__block_end,
      anon_sym_andnot,
      anon_sym_ornot,
      anon_sym_LPAREN,
    ACTIONS(60), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
  [181] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [192] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [203] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [214] = 5,
    ACTIONS(74), 1,
      sym__block_end,
    ACTIONS(76), 1,
      anon_sym_as,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_alias,
    ACTIONS(78), 2,
      sym_with_context,
      sym_identifier,
  [231] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [242] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [253] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [264] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [275] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [286] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_CR,
      sym__block_start,
      anon_sym_LBRACE_POUND,
  [297] = 4,
    ACTIONS(106), 1,
      sym__block_end,
    ACTIONS(108), 1,
      sym_with_context,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(23), 2,
      sym_import_target,
      aux_sym_import_repeat1,
  [311] = 5,
    ACTIONS(112), 1,
      sym__block_end,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(8), 1,
      sym_condition,
    STATE(26), 1,
      aux_sym_if_repeat1,
  [327] = 4,
    ACTIONS(118), 1,
      sym__block_end,
    ACTIONS(120), 1,
      sym_with_context,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(23), 2,
      sym_import_target,
      aux_sym_import_repeat1,
  [341] = 4,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__block_end,
    ACTIONS(127), 1,
      sym_with_context,
    STATE(21), 2,
      sym_import_target,
      aux_sym_import_repeat1,
  [355] = 5,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym__block_end,
    STATE(8), 1,
      sym_condition,
    STATE(22), 1,
      aux_sym_if_repeat1,
  [371] = 5,
    ACTIONS(131), 1,
      sym__block_end,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(8), 1,
      sym_condition,
    STATE(26), 1,
      aux_sym_if_repeat1,
  [387] = 2,
    ACTIONS(139), 2,
      sym__block_end,
      anon_sym_COMMA,
    ACTIONS(141), 2,
      sym_with_context,
      sym_identifier,
  [396] = 3,
    ACTIONS(143), 1,
      sym__block_end,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(145), 2,
      sym_with_context,
      sym_identifier,
  [407] = 2,
    ACTIONS(149), 1,
      sym__block_end,
    ACTIONS(151), 2,
      sym_with_context,
      sym_identifier,
  [415] = 2,
    ACTIONS(143), 1,
      sym__block_end,
    ACTIONS(145), 2,
      sym_with_context,
      sym_identifier,
  [423] = 1,
    ACTIONS(153), 3,
      sym__block_end,
      anon_sym_LPAREN,
      sym_identifier,
  [429] = 1,
    ACTIONS(155), 3,
      sym__block_end,
      anon_sym_LPAREN,
      sym_identifier,
  [435] = 3,
    ACTIONS(157), 1,
      sym__block_end,
    ACTIONS(159), 1,
      anon_sym_as,
    STATE(50), 1,
      sym_alias,
  [445] = 1,
    ACTIONS(161), 3,
      sym__block_end,
      anon_sym_LPAREN,
      sym_identifier,
  [451] = 3,
    ACTIONS(163), 1,
      anon_sym_import,
    ACTIONS(165), 1,
      anon_sym_from,
    ACTIONS(167), 1,
      anon_sym_if,
  [461] = 1,
    ACTIONS(169), 2,
      sym_identifier,
      sym_number,
  [466] = 2,
    ACTIONS(171), 1,
      aux_sym__comment_start_token1,
    STATE(20), 1,
      sym__comment_end,
  [473] = 1,
    ACTIONS(173), 2,
      sym_identifier,
      sym_number,
  [478] = 1,
    ACTIONS(175), 2,
      sym_identifier,
      sym_number,
  [483] = 2,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_POUND_RBRACE,
  [490] = 2,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      aux_sym__comment_start_token1,
  [497] = 1,
    ACTIONS(185), 1,
      anon_sym_POUND_RBRACE,
  [501] = 1,
    ACTIONS(187), 1,
      anon_sym_import,
  [505] = 1,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
  [509] = 1,
    ACTIONS(106), 1,
      sym__block_end,
  [513] = 1,
    ACTIONS(191), 1,
      aux_sym_comment_token1,
  [517] = 1,
    ACTIONS(193), 1,
      aux_sym__comment_start_token1,
  [521] = 1,
    ACTIONS(195), 1,
      sym_template_path,
  [525] = 1,
    ACTIONS(197), 1,
      sym_identifier,
  [529] = 1,
    ACTIONS(125), 1,
      sym__block_end,
  [533] = 1,
    ACTIONS(199), 1,
      sym__block_end,
  [537] = 1,
    ACTIONS(201), 1,
      sym_identifier,
  [541] = 1,
    ACTIONS(203), 1,
      sym_template_path,
  [545] = 1,
    ACTIONS(205), 1,
      aux_sym_comment_token1,
  [549] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 181,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 297,
  [SMALL_STATE(22)] = 311,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 407,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 435,
  [SMALL_STATE(34)] = 445,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 478,
  [SMALL_STATE(40)] = 483,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 509,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 517,
  [SMALL_STATE(48)] = 521,
  [SMALL_STATE(49)] = 525,
  [SMALL_STATE(50)] = 529,
  [SMALL_STATE(51)] = 533,
  [SMALL_STATE(52)] = 537,
  [SMALL_STATE(53)] = 541,
  [SMALL_STATE(54)] = 545,
  [SMALL_STATE(55)] = 549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 1, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 8),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, 0, 8),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 7),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 1, 0, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 1, 0, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 8),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, 0, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_end, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_end, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_target, 1, 0, 6),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_target, 1, 0, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_end, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_end, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 7, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2, 0, 4),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2, 0, 4), SHIFT_REPEAT(49),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2, 0, 4), SHIFT_REPEAT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 2, 0, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_target, 2, 0, 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_target, 2, 0, 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_target, 3, 0, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_target, 3, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2, 0, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparators, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_start, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_start, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_nunjucks(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
