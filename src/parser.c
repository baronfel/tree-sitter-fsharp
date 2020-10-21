#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_comment = 1,
  sym__letter_char = 2,
  sym__digit_char = 3,
  sym__connecting_char = 4,
  sym__formatting_char = 5,
  aux_sym__identifier_start_char_token1 = 6,
  aux_sym__identifier_char_token1 = 7,
  sym__escaped_ident_text = 8,
  sym_test = 9,
  sym__identifier_start_char = 10,
  sym__identifier_char = 11,
  sym__ident_text = 12,
  sym_identifier = 13,
  aux_sym__ident_text_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__letter_char] = "_letter_char",
  [sym__digit_char] = "_digit_char",
  [sym__connecting_char] = "_connecting_char",
  [sym__formatting_char] = "_formatting_char",
  [aux_sym__identifier_start_char_token1] = "_identifier_start_char_token1",
  [aux_sym__identifier_char_token1] = "_identifier_char_token1",
  [sym__escaped_ident_text] = "_escaped_ident_text",
  [sym_test] = "test",
  [sym__identifier_start_char] = "_identifier_start_char",
  [sym__identifier_char] = "_identifier_char",
  [sym__ident_text] = "_ident_text",
  [sym_identifier] = "identifier",
  [aux_sym__ident_text_repeat1] = "_ident_text_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__letter_char] = sym__letter_char,
  [sym__digit_char] = sym__digit_char,
  [sym__connecting_char] = sym__connecting_char,
  [sym__formatting_char] = sym__formatting_char,
  [aux_sym__identifier_start_char_token1] = aux_sym__identifier_start_char_token1,
  [aux_sym__identifier_char_token1] = aux_sym__identifier_char_token1,
  [sym__escaped_ident_text] = sym__escaped_ident_text,
  [sym_test] = sym_test,
  [sym__identifier_start_char] = sym__identifier_start_char,
  [sym__identifier_char] = sym__identifier_char,
  [sym__ident_text] = sym__ident_text,
  [sym_identifier] = sym_identifier,
  [aux_sym__ident_text_repeat1] = aux_sym__ident_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__letter_char] = {
    .visible = false,
    .named = true,
  },
  [sym__digit_char] = {
    .visible = false,
    .named = true,
  },
  [sym__connecting_char] = {
    .visible = false,
    .named = true,
  },
  [sym__formatting_char] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__identifier_start_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escaped_ident_text] = {
    .visible = false,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_start_char] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_char] = {
    .visible = false,
    .named = true,
  },
  [sym__ident_text] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ident_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(15);
      if (lookahead == 'p' ||
          lookahead == 'u') ADVANCE(15);
      if (lookahead == 'c' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '`') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(9);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(9);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(9);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__letter_char);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__digit_char);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__letter_char] = ACTIONS(1),
    [sym__digit_char] = ACTIONS(1),
    [sym__connecting_char] = ACTIONS(1),
    [sym__formatting_char] = ACTIONS(1),
    [aux_sym__identifier_start_char_token1] = ACTIONS(1),
    [aux_sym__identifier_char_token1] = ACTIONS(1),
    [sym__escaped_ident_text] = ACTIONS(1),
  },
  [1] = {
    [sym_test] = STATE(7),
    [sym__identifier_start_char] = STATE(2),
    [sym__ident_text] = STATE(6),
    [sym_identifier] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [sym__letter_char] = ACTIONS(5),
    [aux_sym__identifier_start_char_token1] = ACTIONS(5),
    [sym__escaped_ident_text] = ACTIONS(7),
  },
  [2] = {
    [sym__identifier_char] = STATE(3),
    [aux_sym__ident_text_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__letter_char] = ACTIONS(11),
    [sym__digit_char] = ACTIONS(11),
    [sym__connecting_char] = ACTIONS(13),
    [sym__formatting_char] = ACTIONS(13),
    [aux_sym__identifier_start_char_token1] = ACTIONS(11),
    [aux_sym__identifier_char_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__identifier_char] = STATE(4),
    [aux_sym__ident_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__letter_char] = ACTIONS(17),
    [sym__digit_char] = ACTIONS(17),
    [sym__connecting_char] = ACTIONS(19),
    [sym__formatting_char] = ACTIONS(19),
    [aux_sym__identifier_start_char_token1] = ACTIONS(17),
    [aux_sym__identifier_char_token1] = ACTIONS(17),
  },
  [4] = {
    [sym__identifier_char] = STATE(4),
    [aux_sym__ident_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__letter_char] = ACTIONS(23),
    [sym__digit_char] = ACTIONS(23),
    [sym__connecting_char] = ACTIONS(26),
    [sym__formatting_char] = ACTIONS(26),
    [aux_sym__identifier_start_char_token1] = ACTIONS(23),
    [aux_sym__identifier_char_token1] = ACTIONS(23),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 4,
  [SMALL_STATE(7)] = 8,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fsharp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
