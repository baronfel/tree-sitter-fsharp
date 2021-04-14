#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  sym_comment = 3,
  anon_sym_POUNDif = 4,
  sym_else_directive = 5,
  sym_endif_directive = 6,
  anon_sym_PIPE_PIPE = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_BANG = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym__digit_char_imm = 12,
  sym__letter_char = 13,
  sym__connecting_char = 14,
  sym__combining_char = 15,
  sym__formatting_char = 16,
  aux_sym__identifier_start_char_token1 = 17,
  aux_sym__identifier_char_token1 = 18,
  sym__escaped_ident_text = 19,
  sym__escape_char = 20,
  sym__non_escape_char = 21,
  sym__simple_char_char = 22,
  sym__hex_digit_imm = 23,
  anon_sym_BSLASHu = 24,
  anon_sym_BSLASHU = 25,
  anon_sym_BSLASH = 26,
  sym__simple_string_char = 27,
  anon_sym_BSLASH2 = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_SQUOTE2 = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_DQUOTE2 = 32,
  anon_sym_ = 33,
  anon_sym_AT_DQUOTE = 34,
  anon_sym_SQUOTEB = 35,
  anon_sym_DQUOTEB = 36,
  aux_sym__simple_or_escape_char_token1 = 37,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 38,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 39,
  anon_sym_PIPE = 40,
  anon_sym_COLON = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_LBRACK_PIPE = 44,
  anon_sym_PIPE_RBRACK = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_POUND = 48,
  anon_sym_COLON_QMARK_GT = 49,
  anon_sym_COLON_QMARK = 50,
  anon_sym_COLON_GT = 51,
  anon_sym_COLON_EQ = 52,
  anon_sym_SEMI_SEMI = 53,
  anon_sym_SEMI = 54,
  anon_sym_QMARK = 55,
  anon_sym_LT_AT = 56,
  anon_sym_AT_GT = 57,
  anon_sym_LT_AT_AT = 58,
  anon_sym_AT_AT_GT = 59,
  anon_sym_TILDE = 60,
  anon_sym_BQUOTE = 61,
  sym__first_op_char = 62,
  anon_sym_QMARK_LT_DASH = 63,
  sym__octaldigit_imm = 64,
  sym__bitdigit_imm = 65,
  aux_sym_int_token1 = 66,
  aux_sym_xint_token1 = 67,
  aux_sym_xint_token2 = 68,
  aux_sym_xint_token3 = 69,
  anon_sym_y = 70,
  anon_sym_uy = 71,
  anon_sym_s = 72,
  anon_sym_us = 73,
  anon_sym_l = 74,
  aux_sym_uint32_token1 = 75,
  anon_sym_n = 76,
  anon_sym_un = 77,
  anon_sym_L = 78,
  aux_sym_uint64_token1 = 79,
  anon_sym_f = 80,
  anon_sym_lf = 81,
  anon_sym_LF2 = 82,
  aux_sym_bignum_token1 = 83,
  aux_sym_decimal_token1 = 84,
  sym__float = 85,
  sym_shebang = 86,
  anon_sym_POUND2 = 87,
  anon_sym_POUNDline = 88,
  anon_sym__ = 89,
  anon_sym_DOT = 90,
  anon_sym_PLUS = 91,
  anon_sym_DASH = 92,
  anon_sym_PERCENT = 93,
  anon_sym_AMP = 94,
  anon_sym_DOLLAR = 95,
  anon_sym_STAR = 96,
  anon_sym_LT = 97,
  anon_sym_GT = 98,
  anon_sym_COMMA = 99,
  anon_sym_DOLLAR_DOTmeasure = 100,
  anon_sym_DOLLAR_DOTstatic_parameter = 101,
  anon_sym_CARET = 102,
  anon_sym_EQ = 103,
  sym_test = 104,
  sym__newline = 105,
  sym_cond_directive = 106,
  sym_if_directive = 107,
  sym__if_expression_text = 108,
  sym__identifier_start_char = 109,
  sym__identifier_char = 110,
  sym__ident_text = 111,
  sym_ident = 112,
  sym__unicodegraph_short = 113,
  sym__unicodegraph_long = 114,
  sym__trigraph = 115,
  sym__char_char = 116,
  sym__string_char = 117,
  sym_char = 118,
  sym_string = 119,
  sym__verbatim_string_char = 120,
  sym_verbatim_string = 121,
  sym_bytechar = 122,
  sym_bytearray = 123,
  sym_verbatim_bytearray = 124,
  sym__simple_or_escape_char = 125,
  sym_triple_quoted_string = 126,
  sym__op_char = 127,
  sym__quote_op_left = 128,
  sym__quote_op_right = 129,
  sym_symbolic_op = 130,
  sym_int = 131,
  sym_xint = 132,
  sym_sbyte = 133,
  sym_byte = 134,
  sym_int16 = 135,
  sym_uint16 = 136,
  sym_int32 = 137,
  sym_uint32 = 138,
  sym_nativeint = 139,
  sym_unativeint = 140,
  sym_int64 = 141,
  sym_uint64 = 142,
  sym_ieee32 = 143,
  sym_ieee64 = 144,
  sym_bignum = 145,
  sym_decimal = 146,
  sym_line_directive = 147,
  sym_active_pattern_op_name = 148,
  sym_long_ident = 149,
  aux_sym__ident_text_repeat1 = 150,
  aux_sym_string_repeat1 = 151,
  aux_sym_verbatim_string_repeat1 = 152,
  aux_sym_triple_quoted_string_repeat1 = 153,
  aux_sym_symbolic_op_repeat1 = 154,
  aux_sym_int_repeat1 = 155,
  aux_sym_xint_repeat1 = 156,
  aux_sym_xint_repeat2 = 157,
  aux_sym_xint_repeat3 = 158,
  aux_sym_active_pattern_op_name_repeat1 = 159,
  aux_sym_long_ident_repeat1 = 160,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_comment] = "comment",
  [anon_sym_POUNDif] = "#if",
  [sym_else_directive] = "else_directive",
  [sym_endif_directive] = "endif_directive",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__digit_char_imm] = "_digit_char_imm",
  [sym__letter_char] = "_letter_char",
  [sym__connecting_char] = "_connecting_char",
  [sym__combining_char] = "_combining_char",
  [sym__formatting_char] = "_formatting_char",
  [aux_sym__identifier_start_char_token1] = "_identifier_start_char_token1",
  [aux_sym__identifier_char_token1] = "_identifier_char_token1",
  [sym__escaped_ident_text] = "_escaped_ident_text",
  [sym__escape_char] = "_escape_char",
  [sym__non_escape_char] = "_non_escape_char",
  [sym__simple_char_char] = "_simple_char_char",
  [sym__hex_digit_imm] = "_hex_digit_imm",
  [anon_sym_BSLASHu] = "\\u",
  [anon_sym_BSLASHU] = "\\U",
  [anon_sym_BSLASH] = "\\",
  [sym__simple_string_char] = "_simple_string_char",
  [anon_sym_BSLASH2] = "\\",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_] = "",
  [anon_sym_AT_DQUOTE] = "@\"",
  [anon_sym_SQUOTEB] = "'B",
  [anon_sym_DQUOTEB] = "\"B",
  [aux_sym__simple_or_escape_char_token1] = "_simple_or_escape_char_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = "\"\"\"",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON_QMARK_GT] = ":\?>",
  [anon_sym_COLON_QMARK] = ":\?",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_SEMI] = ";",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_AT_GT] = "@>",
  [anon_sym_LT_AT_AT] = "<@@",
  [anon_sym_AT_AT_GT] = "@@>",
  [anon_sym_TILDE] = "~",
  [anon_sym_BQUOTE] = "`",
  [sym__first_op_char] = "_first_op_char",
  [anon_sym_QMARK_LT_DASH] = "\?<-",
  [sym__octaldigit_imm] = "_octaldigit_imm",
  [sym__bitdigit_imm] = "_bitdigit_imm",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_xint_token1] = "xint_token1",
  [aux_sym_xint_token2] = "xint_token2",
  [aux_sym_xint_token3] = "xint_token3",
  [anon_sym_y] = "y",
  [anon_sym_uy] = "uy",
  [anon_sym_s] = "s",
  [anon_sym_us] = "us",
  [anon_sym_l] = "l",
  [aux_sym_uint32_token1] = "uint32_token1",
  [anon_sym_n] = "n",
  [anon_sym_un] = "un",
  [anon_sym_L] = "L",
  [aux_sym_uint64_token1] = "uint64_token1",
  [anon_sym_f] = "f",
  [anon_sym_lf] = "lf",
  [anon_sym_LF2] = "LF",
  [aux_sym_bignum_token1] = "bignum_token1",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym__float] = "_float",
  [sym_shebang] = "shebang",
  [anon_sym_POUND2] = "# ",
  [anon_sym_POUNDline] = "#line",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR_DOTmeasure] = "$.measure",
  [anon_sym_DOLLAR_DOTstatic_parameter] = "$.static_parameter",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [sym_test] = "test",
  [sym__newline] = "_newline",
  [sym_cond_directive] = "cond_directive",
  [sym_if_directive] = "if_directive",
  [sym__if_expression_text] = "_if_expression_text",
  [sym__identifier_start_char] = "_identifier_start_char",
  [sym__identifier_char] = "_identifier_char",
  [sym__ident_text] = "_ident_text",
  [sym_ident] = "ident",
  [sym__unicodegraph_short] = "_unicodegraph_short",
  [sym__unicodegraph_long] = "_unicodegraph_long",
  [sym__trigraph] = "_trigraph",
  [sym__char_char] = "_char_char",
  [sym__string_char] = "_string_char",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__verbatim_string_char] = "_verbatim_string_char",
  [sym_verbatim_string] = "verbatim_string",
  [sym_bytechar] = "bytechar",
  [sym_bytearray] = "bytearray",
  [sym_verbatim_bytearray] = "verbatim_bytearray",
  [sym__simple_or_escape_char] = "_simple_or_escape_char",
  [sym_triple_quoted_string] = "triple_quoted_string",
  [sym__op_char] = "_op_char",
  [sym__quote_op_left] = "_quote_op_left",
  [sym__quote_op_right] = "_quote_op_right",
  [sym_symbolic_op] = "symbolic_op",
  [sym_int] = "int",
  [sym_xint] = "xint",
  [sym_sbyte] = "sbyte",
  [sym_byte] = "byte",
  [sym_int16] = "int16",
  [sym_uint16] = "uint16",
  [sym_int32] = "int32",
  [sym_uint32] = "uint32",
  [sym_nativeint] = "nativeint",
  [sym_unativeint] = "unativeint",
  [sym_int64] = "int64",
  [sym_uint64] = "uint64",
  [sym_ieee32] = "ieee32",
  [sym_ieee64] = "ieee64",
  [sym_bignum] = "bignum",
  [sym_decimal] = "decimal",
  [sym_line_directive] = "line_directive",
  [sym_active_pattern_op_name] = "active_pattern_op_name",
  [sym_long_ident] = "long_ident",
  [aux_sym__ident_text_repeat1] = "_ident_text_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_verbatim_string_repeat1] = "verbatim_string_repeat1",
  [aux_sym_triple_quoted_string_repeat1] = "triple_quoted_string_repeat1",
  [aux_sym_symbolic_op_repeat1] = "symbolic_op_repeat1",
  [aux_sym_int_repeat1] = "int_repeat1",
  [aux_sym_xint_repeat1] = "xint_repeat1",
  [aux_sym_xint_repeat2] = "xint_repeat2",
  [aux_sym_xint_repeat3] = "xint_repeat3",
  [aux_sym_active_pattern_op_name_repeat1] = "active_pattern_op_name_repeat1",
  [aux_sym_long_ident_repeat1] = "long_ident_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_comment] = sym_comment,
  [anon_sym_POUNDif] = anon_sym_POUNDif,
  [sym_else_directive] = sym_else_directive,
  [sym_endif_directive] = sym_endif_directive,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__digit_char_imm] = sym__digit_char_imm,
  [sym__letter_char] = sym__letter_char,
  [sym__connecting_char] = sym__connecting_char,
  [sym__combining_char] = sym__combining_char,
  [sym__formatting_char] = sym__formatting_char,
  [aux_sym__identifier_start_char_token1] = aux_sym__identifier_start_char_token1,
  [aux_sym__identifier_char_token1] = aux_sym__identifier_char_token1,
  [sym__escaped_ident_text] = sym__escaped_ident_text,
  [sym__escape_char] = sym__escape_char,
  [sym__non_escape_char] = sym__non_escape_char,
  [sym__simple_char_char] = sym__simple_char_char,
  [sym__hex_digit_imm] = sym__hex_digit_imm,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [anon_sym_BSLASHU] = anon_sym_BSLASHU,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym__simple_string_char] = sym__simple_string_char,
  [anon_sym_BSLASH2] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT_DQUOTE] = anon_sym_AT_DQUOTE,
  [anon_sym_SQUOTEB] = anon_sym_SQUOTEB,
  [anon_sym_DQUOTEB] = anon_sym_DQUOTEB,
  [aux_sym__simple_or_escape_char_token1] = aux_sym__simple_or_escape_char_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON_QMARK_GT] = anon_sym_COLON_QMARK_GT,
  [anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LT_AT] = anon_sym_LT_AT,
  [anon_sym_AT_GT] = anon_sym_AT_GT,
  [anon_sym_LT_AT_AT] = anon_sym_LT_AT_AT,
  [anon_sym_AT_AT_GT] = anon_sym_AT_AT_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__first_op_char] = sym__first_op_char,
  [anon_sym_QMARK_LT_DASH] = anon_sym_QMARK_LT_DASH,
  [sym__octaldigit_imm] = sym__octaldigit_imm,
  [sym__bitdigit_imm] = sym__bitdigit_imm,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_xint_token1] = aux_sym_xint_token1,
  [aux_sym_xint_token2] = aux_sym_xint_token2,
  [aux_sym_xint_token3] = aux_sym_xint_token3,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_uy] = anon_sym_uy,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_l] = anon_sym_l,
  [aux_sym_uint32_token1] = aux_sym_uint32_token1,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_un] = anon_sym_un,
  [anon_sym_L] = anon_sym_L,
  [aux_sym_uint64_token1] = aux_sym_uint64_token1,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_lf] = anon_sym_lf,
  [anon_sym_LF2] = anon_sym_LF2,
  [aux_sym_bignum_token1] = aux_sym_bignum_token1,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym__float] = sym__float,
  [sym_shebang] = sym_shebang,
  [anon_sym_POUND2] = anon_sym_POUND2,
  [anon_sym_POUNDline] = anon_sym_POUNDline,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR_DOTmeasure] = anon_sym_DOLLAR_DOTmeasure,
  [anon_sym_DOLLAR_DOTstatic_parameter] = anon_sym_DOLLAR_DOTstatic_parameter,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_test] = sym_test,
  [sym__newline] = sym__newline,
  [sym_cond_directive] = sym_cond_directive,
  [sym_if_directive] = sym_if_directive,
  [sym__if_expression_text] = sym__if_expression_text,
  [sym__identifier_start_char] = sym__identifier_start_char,
  [sym__identifier_char] = sym__identifier_char,
  [sym__ident_text] = sym__ident_text,
  [sym_ident] = sym_ident,
  [sym__unicodegraph_short] = sym__unicodegraph_short,
  [sym__unicodegraph_long] = sym__unicodegraph_long,
  [sym__trigraph] = sym__trigraph,
  [sym__char_char] = sym__char_char,
  [sym__string_char] = sym__string_char,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__verbatim_string_char] = sym__verbatim_string_char,
  [sym_verbatim_string] = sym_verbatim_string,
  [sym_bytechar] = sym_bytechar,
  [sym_bytearray] = sym_bytearray,
  [sym_verbatim_bytearray] = sym_verbatim_bytearray,
  [sym__simple_or_escape_char] = sym__simple_or_escape_char,
  [sym_triple_quoted_string] = sym_triple_quoted_string,
  [sym__op_char] = sym__op_char,
  [sym__quote_op_left] = sym__quote_op_left,
  [sym__quote_op_right] = sym__quote_op_right,
  [sym_symbolic_op] = sym_symbolic_op,
  [sym_int] = sym_int,
  [sym_xint] = sym_xint,
  [sym_sbyte] = sym_sbyte,
  [sym_byte] = sym_byte,
  [sym_int16] = sym_int16,
  [sym_uint16] = sym_uint16,
  [sym_int32] = sym_int32,
  [sym_uint32] = sym_uint32,
  [sym_nativeint] = sym_nativeint,
  [sym_unativeint] = sym_unativeint,
  [sym_int64] = sym_int64,
  [sym_uint64] = sym_uint64,
  [sym_ieee32] = sym_ieee32,
  [sym_ieee64] = sym_ieee64,
  [sym_bignum] = sym_bignum,
  [sym_decimal] = sym_decimal,
  [sym_line_directive] = sym_line_directive,
  [sym_active_pattern_op_name] = sym_active_pattern_op_name,
  [sym_long_ident] = sym_long_ident,
  [aux_sym__ident_text_repeat1] = aux_sym__ident_text_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_verbatim_string_repeat1] = aux_sym_verbatim_string_repeat1,
  [aux_sym_triple_quoted_string_repeat1] = aux_sym_triple_quoted_string_repeat1,
  [aux_sym_symbolic_op_repeat1] = aux_sym_symbolic_op_repeat1,
  [aux_sym_int_repeat1] = aux_sym_int_repeat1,
  [aux_sym_xint_repeat1] = aux_sym_xint_repeat1,
  [aux_sym_xint_repeat2] = aux_sym_xint_repeat2,
  [aux_sym_xint_repeat3] = aux_sym_xint_repeat3,
  [aux_sym_active_pattern_op_name_repeat1] = aux_sym_active_pattern_op_name_repeat1,
  [aux_sym_long_ident_repeat1] = aux_sym_long_ident_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDif] = {
    .visible = true,
    .named = false,
  },
  [sym_else_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_endif_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym__digit_char_imm] = {
    .visible = false,
    .named = true,
  },
  [sym__letter_char] = {
    .visible = false,
    .named = true,
  },
  [sym__connecting_char] = {
    .visible = false,
    .named = true,
  },
  [sym__combining_char] = {
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
  [sym__escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym__non_escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_char_char] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_digit_imm] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__simple_string_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEB] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__simple_or_escape_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__first_op_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__octaldigit_imm] = {
    .visible = false,
    .named = true,
  },
  [sym__bitdigit_imm] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_uint32_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_un] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_uint64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bignum_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOTmeasure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOTstatic_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_cond_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_if_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__if_expression_text] = {
    .visible = false,
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
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__unicodegraph_short] = {
    .visible = false,
    .named = true,
  },
  [sym__unicodegraph_long] = {
    .visible = false,
    .named = true,
  },
  [sym__trigraph] = {
    .visible = false,
    .named = true,
  },
  [sym__char_char] = {
    .visible = false,
    .named = true,
  },
  [sym__string_char] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__verbatim_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym_verbatim_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bytechar] = {
    .visible = true,
    .named = true,
  },
  [sym_bytearray] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_bytearray] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_or_escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym_triple_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__op_char] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_op_left] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_op_right] = {
    .visible = false,
    .named = true,
  },
  [sym_symbolic_op] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_xint] = {
    .visible = true,
    .named = true,
  },
  [sym_sbyte] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_int16] = {
    .visible = true,
    .named = true,
  },
  [sym_uint16] = {
    .visible = true,
    .named = true,
  },
  [sym_int32] = {
    .visible = true,
    .named = true,
  },
  [sym_uint32] = {
    .visible = true,
    .named = true,
  },
  [sym_nativeint] = {
    .visible = true,
    .named = true,
  },
  [sym_unativeint] = {
    .visible = true,
    .named = true,
  },
  [sym_int64] = {
    .visible = true,
    .named = true,
  },
  [sym_uint64] = {
    .visible = true,
    .named = true,
  },
  [sym_ieee32] = {
    .visible = true,
    .named = true,
  },
  [sym_ieee64] = {
    .visible = true,
    .named = true,
  },
  [sym_bignum] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_active_pattern_op_name] = {
    .visible = true,
    .named = true,
  },
  [sym_long_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ident_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_op_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xint_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_active_pattern_op_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__letter_char_character_set_1(int32_t c) {
  return (c < 6917
    ? (c < 3024
      ? (c < 2392
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? (c >= 'H' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1786
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2308
                ? (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2674
                  ? c == 2654
                  : c <= 2676)
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))
              : (c <= 2970 || (c < 2979
                ? (c < 2974
                  ? c == 2972
                  : c <= 2975)
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4197
        ? (c < 3482
          ? (c < 3261
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3169 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3332
                ? (c < 3296
                  ? c == 3294
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))
              : (c <= 3389 || (c < 3423
                ? (c < 3412
                  ? c == 3406
                  : c <= 3414)
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3773
            ? (c < 3713
              ? (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))))
            : (c <= 3773 || (c < 3976
              ? (c < 3840
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))
              : (c <= 3980 || (c < 4176
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))))))))
        : (c <= 4198 || (c < 5121
          ? (c < 4746
            ? (c < 4304
              ? (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4346 || (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))))
            : (c <= 4749 || (c < 4824
              ? (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6176
            ? (c < 5920
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43261
      ? (c < 11360
        ? (c < 8126
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8182
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)))
              : (c <= 8188 || (c < 8450
                ? (c < 8319
                  ? c == 8305
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8508
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))
              : (c <= 8511 || (c < 8544
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)
                : (c <= 8584 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))))))))
        : (c <= 11492 || (c < 12593
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12344
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42656
            ? (c < 40960
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40956
                  ? c == 19968
                  : c <= 40956)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 43015
              ? (c < 42946
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym__letter_char_character_set_2(int32_t c) {
  return (c < 6823
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6108
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6480
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6576
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)
                : (c <= 6601 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6823 || (c < 43259
      ? (c < 11312
        ? (c < 8118
          ? (c < 7413
            ? (c < 7245
              ? (c < 7086
                ? (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6987 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)))
              : (c <= 7247 || (c < 7357
                ? (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : c <= 7411)))))
            : (c <= 7414 || (c < 8016
              ? (c < 7960
                ? (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)))
              : (c <= 8023 || (c < 8029
                ? (c < 8027
                  ? c == 8025
                  : c <= 8027)
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12549
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12337
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : c <= 12329)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66816
          ? (c < 65856
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 65908 || (c < 66464
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66560
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66517)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym__letter_char_character_set_3(int32_t c) {
  return (c < 6917
    ? (c < 3024
      ? (c < 2392
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1786
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2308
                ? (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2674
                  ? c == 2654
                  : c <= 2676)
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))
              : (c <= 2970 || (c < 2979
                ? (c < 2974
                  ? c == 2972
                  : c <= 2975)
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4197
        ? (c < 3482
          ? (c < 3261
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3169 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3332
                ? (c < 3296
                  ? c == 3294
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))
              : (c <= 3389 || (c < 3423
                ? (c < 3412
                  ? c == 3406
                  : c <= 3414)
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3773
            ? (c < 3713
              ? (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))))
            : (c <= 3773 || (c < 3976
              ? (c < 3840
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))
              : (c <= 3980 || (c < 4176
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))))))))
        : (c <= 4198 || (c < 5121
          ? (c < 4746
            ? (c < 4304
              ? (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4346 || (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))))
            : (c <= 4749 || (c < 4824
              ? (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6176
            ? (c < 5920
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43261
      ? (c < 11360
        ? (c < 8126
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8182
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)))
              : (c <= 8188 || (c < 8450
                ? (c < 8319
                  ? c == 8305
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8508
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))
              : (c <= 8511 || (c < 8544
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)
                : (c <= 8584 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))))))))
        : (c <= 11492 || (c < 12593
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12344
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42656
            ? (c < 40960
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40956
                  ? c == 19968
                  : c <= 40956)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 43015
              ? (c < 42946
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym__combining_char_character_set_1(int32_t c) {
  return (c < 3761
    ? (c < 2786
      ? (c < 2259
        ? (c < 1648
          ? (c < 1473
            ? (c < 1425
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : c <= 1159)
              : (c <= 1469 || c == 1471))
            : (c <= 1474 || (c < 1552
              ? (c < 1479
                ? (c >= 1476 && c <= 1477)
                : c <= 1479)
              : (c <= 1562 || (c >= 1611 && c <= 1631)))))
          : (c <= 1648 || (c < 1958
            ? (c < 1770
              ? (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1768)
              : (c <= 1773 || (c >= 1809 && c <= 1866)))
            : (c <= 1968 || (c < 2070
              ? (c < 2045
                ? (c >= 2027 && c <= 2035)
                : c <= 2045)
              : (c <= 2093 || (c >= 2137 && c <= 2139)))))))
        : (c <= 2403 || (c < 2622
          ? (c < 2519
            ? (c < 2503
              ? (c < 2492
                ? (c >= 2433 && c <= 2435)
                : c <= 2500)
              : (c <= 2504 || (c >= 2507 && c <= 2509)))
            : (c <= 2519 || (c < 2561
              ? (c < 2558
                ? (c >= 2530 && c <= 2531)
                : c <= 2558)
              : (c <= 2563 || c == 2620))))
          : (c <= 2626 || (c < 2689
            ? (c < 2641
              ? (c < 2635
                ? (c >= 2631 && c <= 2632)
                : c <= 2637)
              : (c <= 2641 || (c >= 2672 && c <= 2677)))
            : (c <= 2691 || (c < 2759
              ? (c >= 2748 && c <= 2757)
              : (c <= 2761 || (c >= 2763 && c <= 2765)))))))))
      : (c <= 2787 || (c < 3260
        ? (c < 3014
          ? (c < 2891
            ? (c < 2876
              ? (c < 2817
                ? (c >= 2810 && c <= 2815)
                : c <= 2819)
              : (c <= 2884 || (c >= 2887 && c <= 2888)))
            : (c <= 2893 || (c < 2946
              ? (c < 2914
                ? (c >= 2901 && c <= 2903)
                : c <= 2915)
              : (c <= 2946 || (c >= 3006 && c <= 3010)))))
          : (c <= 3016 || (c < 3142
            ? (c < 3072
              ? (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)
              : (c <= 3076 || (c >= 3134 && c <= 3140)))
            : (c <= 3144 || (c < 3170
              ? (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)
              : (c <= 3171 || (c >= 3201 && c <= 3203)))))))
        : (c <= 3268 || (c < 3426
          ? (c < 3328
            ? (c < 3285
              ? (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)
              : (c <= 3286 || (c >= 3298 && c <= 3299)))
            : (c <= 3331 || (c < 3402
              ? (c < 3398
                ? (c >= 3387 && c <= 3396)
                : c <= 3400)
              : (c <= 3405 || c == 3415))))
          : (c <= 3427 || (c < 3544
            ? (c < 3535
              ? (c < 3530
                ? (c >= 3457 && c <= 3459)
                : c <= 3530)
              : (c <= 3540 || c == 3542))
            : (c <= 3551 || (c < 3633
              ? (c >= 3570 && c <= 3571)
              : (c <= 3642 || (c >= 3655 && c <= 3662)))))))))))
    : (c <= 3772 || (c < 7675
      ? (c < 6109
        ? (c < 4038
          ? (c < 3897
            ? (c < 3893
              ? (c < 3864
                ? (c >= 3784 && c <= 3789)
                : c <= 3865)
              : (c <= 3893 || c == 3895))
            : (c <= 3897 || (c < 3974
              ? (c < 3953
                ? (c >= 3902 && c <= 3903)
                : c <= 3972)
              : (c <= 3991 || (c >= 3993 && c <= 4028)))))
          : (c <= 4038 || (c < 5906
            ? (c < 4250
              ? (c < 4182
                ? (c >= 4139 && c <= 4158)
                : c <= 4239)
              : (c <= 4253 || (c >= 4957 && c <= 4959)))
            : (c <= 5908 || (c < 6002
              ? (c < 5970
                ? (c >= 5938 && c <= 5940)
                : c <= 5971)
              : (c <= 6003 || (c >= 6068 && c <= 6099)))))))
        : (c <= 6109 || (c < 6847
          ? (c < 6679
            ? (c < 6432
              ? (c < 6277
                ? (c >= 6155 && c <= 6157)
                : c <= 6313)
              : (c <= 6443 || (c >= 6448 && c <= 6459)))
            : (c <= 6683 || (c < 6783
              ? (c < 6752
                ? (c >= 6741 && c <= 6750)
                : c <= 6780)
              : (c <= 6783 || (c >= 6832 && c <= 6845)))))
          : (c <= 6848 || (c < 7204
            ? (c < 7040
              ? (c < 7019
                ? (c >= 6912 && c <= 6980)
                : c <= 7027)
              : (c <= 7085 || (c >= 7142 && c <= 7155)))
            : (c <= 7223 || (c < 7380
              ? (c >= 7376 && c <= 7378)
              : (c <= 7417 || (c >= 7616 && c <= 7673)))))))))
      : (c <= 7679 || (c < 43493
        ? (c < 42612
          ? (c < 11647
            ? (c < 8421
              ? (c < 8417
                ? (c >= 8400 && c <= 8412)
                : c <= 8417)
              : (c <= 8432 || (c >= 11503 && c <= 11505)))
            : (c <= 11647 || (c < 12441
              ? (c < 12330
                ? (c >= 11744 && c <= 11775)
                : c <= 12335)
              : (c <= 12442 || c == 42607))))
          : (c <= 42621 || (c < 43232
            ? (c < 43052
              ? (c < 43010
                ? (c >= 42654 && c <= 42737)
                : c <= 43047)
              : (c <= 43052 || (c >= 43136 && c <= 43205)))
            : (c <= 43249 || (c < 43335
              ? (c < 43302
                ? c == 43263
                : c <= 43309)
              : (c <= 43347 || (c >= 43392 && c <= 43456)))))))
        : (c <= 43493 || (c < 65056
          ? (c < 43765
            ? (c < 43643
              ? (c < 43587
                ? (c >= 43561 && c <= 43574)
                : c <= 43597)
              : (c <= 43713 || (c >= 43755 && c <= 43759)))
            : (c <= 43766 || (c < 64286
              ? (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)
              : (c <= 64286 || (c >= 65024 && c <= 65039)))))
          : (c <= 65071 || (c < 68101
            ? (c < 66422
              ? (c < 66272
                ? c == 66045
                : c <= 66272)
              : (c <= 66426 || (c >= 68097 && c <= 68099)))
            : (c <= 68102 || (c < 68152
              ? (c >= 68108 && c <= 68111)
              : (c <= 68154 || c == 68159))))))))))));
}

static inline bool sym__formatting_char_character_set_1(int32_t c) {
  return (c < 6158
    ? (c < 1757
      ? (c < 1536
        ? c == 173
        : (c <= 1541 || c == 1564))
      : (c <= 1757 || (c < 2274
        ? c == 1807
        : c <= 2274)))
    : (c <= 6158 || (c < 8294
      ? (c < 8234
        ? (c >= 8203 && c <= 8207)
        : (c <= 8238 || (c >= 8288 && c <= 8292)))
      : (c <= 8303 || (c < 65529
        ? c == 65279
        : c <= 65531)))));
}

static inline bool sym__non_escape_char_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= '\'' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(98);
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(177);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(87);
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (sym__letter_char_character_set_1(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead)) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead)) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '`') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '.') ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(147);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(121);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '&') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < 7 || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(4);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(63);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(63);
      if (lookahead == '*') ADVANCE(62);
      END_STATE();
    case 64:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '$') ADVANCE(190);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '?') ADVANCE(140);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 65:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '?') ADVANCE(139);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(147);
      END_STATE();
    case 66:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '?') ADVANCE(139);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(147);
      END_STATE();
    case 67:
      if (eof) ADVANCE(74);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 68:
      if (eof) ADVANCE(74);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(89);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(91);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(161);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(63);
      if (lookahead == '*') ADVANCE(62);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_else_directive);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_endif_directive);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__digit_char_imm);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__letter_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__combining_char);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__formatting_char);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__escape_char);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__non_escape_char);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__simple_char_char);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__hex_digit_imm);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(95);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (!sym__non_escape_char_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__simple_string_char);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__simple_string_char);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == 'B') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == 'B') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTEB);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTEB);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ']') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '?') ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(181);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '<') ADVANCE(18);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      if (lookahead == '@') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_AT_AT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_AT_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__first_op_char);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '"') ADVANCE(115);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '@') ADVANCE(20);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '@') ADVANCE(141);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_QMARK_LT_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__octaldigit_imm);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__bitdigit_imm);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_xint_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_xint_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_xint_token3);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_uy);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      if (lookahead == 'L') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_un);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_L);
      if (lookahead == 'F') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_uint64_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_lf);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_bignum_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '@') ADVANCE(141);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOTmeasure);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOTstatic_parameter);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 114},
  [27] = {.lex_state = 114},
  [28] = {.lex_state = 114},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 114},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 114},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 65},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 69},
  [68] = {.lex_state = 69},
  [69] = {.lex_state = 69},
  [70] = {.lex_state = 69},
  [71] = {.lex_state = 69},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 69},
  [74] = {.lex_state = 69},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 69},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 65},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 69},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 72},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 72},
  [98] = {.lex_state = 65},
  [99] = {.lex_state = 72},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 72},
  [106] = {.lex_state = 65},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 72},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 72},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 65},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 72},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 72},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 65},
  [138] = {.lex_state = 72},
  [139] = {.lex_state = 72},
  [140] = {.lex_state = 65},
  [141] = {.lex_state = 72},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 65},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 72},
  [146] = {.lex_state = 65},
  [147] = {.lex_state = 72},
  [148] = {.lex_state = 65},
  [149] = {.lex_state = 72},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 65},
  [152] = {.lex_state = 72},
  [153] = {.lex_state = 72},
  [154] = {.lex_state = 72},
  [155] = {.lex_state = 72},
  [156] = {.lex_state = 72},
  [157] = {.lex_state = 72},
  [158] = {.lex_state = 72},
  [159] = {.lex_state = 72},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__digit_char_imm] = ACTIONS(1),
    [sym__letter_char] = ACTIONS(1),
    [sym__connecting_char] = ACTIONS(1),
    [sym__combining_char] = ACTIONS(1),
    [sym__formatting_char] = ACTIONS(1),
    [aux_sym__identifier_start_char_token1] = ACTIONS(1),
    [aux_sym__identifier_char_token1] = ACTIONS(1),
    [sym__escaped_ident_text] = ACTIONS(1),
    [sym__non_escape_char] = ACTIONS(1),
    [sym__hex_digit_imm] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON_QMARK_GT] = ACTIONS(1),
    [anon_sym_COLON_QMARK] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT_AT] = ACTIONS(1),
    [anon_sym_AT_GT] = ACTIONS(1),
    [anon_sym_LT_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__first_op_char] = ACTIONS(1),
    [anon_sym_QMARK_LT_DASH] = ACTIONS(1),
    [sym__octaldigit_imm] = ACTIONS(1),
    [sym__bitdigit_imm] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [aux_sym_bignum_token1] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR_DOTmeasure] = ACTIONS(1),
    [anon_sym_DOLLAR_DOTstatic_parameter] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_test] = STATE(87),
    [sym_cond_directive] = STATE(123),
    [sym_if_directive] = STATE(142),
    [sym__identifier_start_char] = STATE(20),
    [sym__ident_text] = STATE(74),
    [sym_ident] = STATE(66),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_verbatim_string] = STATE(123),
    [sym_bytechar] = STATE(123),
    [sym_bytearray] = STATE(123),
    [sym_verbatim_bytearray] = STATE(123),
    [sym_triple_quoted_string] = STATE(123),
    [sym__quote_op_left] = STATE(133),
    [sym__quote_op_right] = STATE(133),
    [sym_symbolic_op] = STATE(123),
    [sym_int] = STATE(22),
    [sym_xint] = STATE(23),
    [sym_sbyte] = STATE(123),
    [sym_byte] = STATE(123),
    [sym_int16] = STATE(123),
    [sym_uint16] = STATE(123),
    [sym_int32] = STATE(123),
    [sym_uint32] = STATE(123),
    [sym_nativeint] = STATE(123),
    [sym_unativeint] = STATE(123),
    [sym_int64] = STATE(123),
    [sym_uint64] = STATE(123),
    [sym_ieee32] = STATE(123),
    [sym_ieee64] = STATE(123),
    [sym_bignum] = STATE(123),
    [sym_decimal] = STATE(123),
    [sym_line_directive] = STATE(123),
    [sym_active_pattern_op_name] = STATE(123),
    [sym_long_ident] = STATE(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUNDif] = ACTIONS(5),
    [sym_else_directive] = ACTIONS(7),
    [sym_endif_directive] = ACTIONS(7),
    [sym__letter_char] = ACTIONS(9),
    [aux_sym__identifier_start_char_token1] = ACTIONS(9),
    [sym__escaped_ident_text] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_AT_DQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_LT_AT] = ACTIONS(23),
    [anon_sym_AT_GT] = ACTIONS(25),
    [anon_sym_LT_AT_AT] = ACTIONS(25),
    [anon_sym_AT_AT_GT] = ACTIONS(25),
    [sym__first_op_char] = ACTIONS(27),
    [anon_sym_QMARK_LT_DASH] = ACTIONS(25),
    [aux_sym_int_token1] = ACTIONS(29),
    [aux_sym_xint_token1] = ACTIONS(31),
    [aux_sym_xint_token2] = ACTIONS(33),
    [aux_sym_xint_token3] = ACTIONS(35),
    [sym__float] = ACTIONS(37),
    [sym_shebang] = ACTIONS(3),
    [anon_sym_POUND2] = ACTIONS(39),
    [anon_sym_POUNDline] = ACTIONS(39),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(43), 1,
      sym__digit_char_imm,
    ACTIONS(46), 1,
      aux_sym_uint32_token1,
    STATE(2), 1,
      aux_sym_int_repeat1,
    ACTIONS(41), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
  [26] = 4,
    ACTIONS(50), 1,
      sym__digit_char_imm,
    ACTIONS(52), 1,
      aux_sym_uint32_token1,
    STATE(2), 1,
      aux_sym_int_repeat1,
    ACTIONS(48), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
  [52] = 4,
    ACTIONS(56), 1,
      sym__digit_char_imm,
    ACTIONS(58), 1,
      aux_sym_uint32_token1,
    STATE(3), 1,
      aux_sym_int_repeat1,
    ACTIONS(54), 14,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
  [78] = 8,
    ACTIONS(63), 1,
      sym__escape_char,
    ACTIONS(66), 1,
      anon_sym_BSLASHu,
    ACTIONS(69), 1,
      anon_sym_BSLASHU,
    ACTIONS(72), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      anon_sym_DQUOTE2,
    ACTIONS(77), 1,
      anon_sym_DQUOTEB,
    ACTIONS(60), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(5), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [111] = 8,
    ACTIONS(81), 1,
      sym__escape_char,
    ACTIONS(83), 1,
      anon_sym_BSLASHu,
    ACTIONS(85), 1,
      anon_sym_BSLASHU,
    ACTIONS(87), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_DQUOTE2,
    ACTIONS(91), 1,
      anon_sym_DQUOTEB,
    ACTIONS(79), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(7), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [144] = 8,
    ACTIONS(83), 1,
      anon_sym_BSLASHu,
    ACTIONS(85), 1,
      anon_sym_BSLASHU,
    ACTIONS(87), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      sym__escape_char,
    ACTIONS(97), 1,
      anon_sym_DQUOTE2,
    ACTIONS(99), 1,
      anon_sym_DQUOTEB,
    ACTIONS(93), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(5), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [177] = 7,
    ACTIONS(103), 1,
      sym__escape_char,
    ACTIONS(105), 1,
      anon_sym_BSLASHu,
    ACTIONS(107), 1,
      anon_sym_BSLASHU,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(111), 1,
      anon_sym_DQUOTE2,
    ACTIONS(101), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(16), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [207] = 4,
    ACTIONS(115), 1,
      sym__bitdigit_imm,
    STATE(14), 1,
      aux_sym_xint_repeat3,
    ACTIONS(117), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [231] = 4,
    ACTIONS(119), 1,
      sym__octaldigit_imm,
    STATE(13), 1,
      aux_sym_xint_repeat2,
    ACTIONS(117), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [255] = 4,
    ACTIONS(121), 1,
      sym__hex_digit_imm,
    STATE(12), 1,
      aux_sym_xint_repeat1,
    ACTIONS(117), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [279] = 4,
    ACTIONS(125), 1,
      sym__hex_digit_imm,
    STATE(12), 1,
      aux_sym_xint_repeat1,
    ACTIONS(128), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [303] = 4,
    ACTIONS(132), 1,
      sym__octaldigit_imm,
    STATE(13), 1,
      aux_sym_xint_repeat2,
    ACTIONS(135), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [327] = 4,
    ACTIONS(139), 1,
      sym__bitdigit_imm,
    STATE(14), 1,
      aux_sym_xint_repeat3,
    ACTIONS(142), 3,
      anon_sym_l,
      aux_sym_uint32_token1,
      anon_sym_L,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_n,
      anon_sym_un,
      aux_sym_uint64_token1,
      anon_sym_lf,
      anon_sym_LF2,
  [351] = 7,
    ACTIONS(105), 1,
      anon_sym_BSLASHu,
    ACTIONS(107), 1,
      anon_sym_BSLASHU,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      sym__escape_char,
    ACTIONS(148), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(8), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [381] = 7,
    ACTIONS(77), 1,
      anon_sym_DQUOTE2,
    ACTIONS(153), 1,
      sym__escape_char,
    ACTIONS(156), 1,
      anon_sym_BSLASHu,
    ACTIONS(159), 1,
      anon_sym_BSLASHU,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(150), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(16), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [411] = 5,
    ACTIONS(170), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    STATE(17), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(165), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(167), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [435] = 4,
    ACTIONS(178), 1,
      aux_sym__identifier_start_char_token1,
    STATE(18), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(175), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [457] = 5,
    ACTIONS(185), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    STATE(17), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(181), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(183), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [481] = 4,
    ACTIONS(193), 1,
      aux_sym__identifier_start_char_token1,
    STATE(21), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(191), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [503] = 4,
    ACTIONS(197), 1,
      aux_sym__identifier_start_char_token1,
    STATE(18), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(195), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [525] = 13,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      anon_sym_y,
    ACTIONS(203), 1,
      anon_sym_uy,
    ACTIONS(205), 1,
      anon_sym_s,
    ACTIONS(207), 1,
      anon_sym_us,
    ACTIONS(209), 1,
      anon_sym_l,
    ACTIONS(211), 1,
      aux_sym_uint32_token1,
    ACTIONS(213), 1,
      anon_sym_n,
    ACTIONS(215), 1,
      anon_sym_un,
    ACTIONS(217), 1,
      anon_sym_L,
    ACTIONS(219), 1,
      aux_sym_uint64_token1,
    ACTIONS(221), 1,
      aux_sym_bignum_token1,
    ACTIONS(223), 1,
      aux_sym_decimal_token1,
  [565] = 13,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      anon_sym_y,
    ACTIONS(203), 1,
      anon_sym_uy,
    ACTIONS(205), 1,
      anon_sym_s,
    ACTIONS(207), 1,
      anon_sym_us,
    ACTIONS(211), 1,
      aux_sym_uint32_token1,
    ACTIONS(213), 1,
      anon_sym_n,
    ACTIONS(215), 1,
      anon_sym_un,
    ACTIONS(219), 1,
      aux_sym_uint64_token1,
    ACTIONS(225), 1,
      anon_sym_l,
    ACTIONS(227), 1,
      anon_sym_L,
    ACTIONS(229), 1,
      anon_sym_lf,
    ACTIONS(231), 1,
      anon_sym_LF2,
  [605] = 5,
    ACTIONS(235), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(237), 1,
      anon_sym_PIPE,
    STATE(19), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(189), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(233), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [629] = 4,
    ACTIONS(241), 1,
      anon_sym_DQUOTE2,
    ACTIONS(243), 1,
      anon_sym_DQUOTEB,
    STATE(27), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(239), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [649] = 3,
    ACTIONS(248), 2,
      anon_sym_DQUOTE2,
      anon_sym_DQUOTEB,
    STATE(26), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(245), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [667] = 4,
    ACTIONS(252), 1,
      anon_sym_DQUOTE2,
    ACTIONS(254), 1,
      anon_sym_DQUOTEB,
    STATE(26), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(250), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [687] = 3,
    ACTIONS(241), 1,
      anon_sym_DQUOTE2,
    STATE(31), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(256), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [704] = 2,
    ACTIONS(260), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(258), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [719] = 2,
    ACTIONS(264), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(262), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [734] = 3,
    ACTIONS(252), 1,
      anon_sym_DQUOTE2,
    STATE(33), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(266), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [751] = 2,
    ACTIONS(270), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(268), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [766] = 3,
    ACTIONS(248), 1,
      anon_sym_DQUOTE2,
    STATE(33), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(272), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [783] = 2,
    ACTIONS(270), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(268), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [797] = 2,
    ACTIONS(260), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(258), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [811] = 2,
    ACTIONS(264), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(262), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [825] = 8,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      sym__letter_char,
    ACTIONS(279), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(281), 1,
      sym__escaped_ident_text,
    ACTIONS(283), 1,
      anon_sym__,
    STATE(24), 1,
      sym__identifier_start_char,
    STATE(101), 1,
      sym_ident,
    STATE(111), 1,
      sym__ident_text,
  [850] = 5,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__identifier_start_char,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(59), 2,
      sym__if_expression_text,
      sym__ident_text,
  [868] = 5,
    ACTIONS(289), 1,
      anon_sym_BANG,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(9), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(71), 2,
      sym__if_expression_text,
      sym__ident_text,
  [886] = 5,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__identifier_start_char,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(70), 2,
      sym__if_expression_text,
      sym__ident_text,
  [904] = 5,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__identifier_start_char,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(61), 2,
      sym__if_expression_text,
      sym__ident_text,
  [922] = 5,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__identifier_start_char,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(62), 2,
      sym__if_expression_text,
      sym__ident_text,
  [940] = 4,
    ACTIONS(295), 1,
      anon_sym_BSLASHu,
    ACTIONS(297), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 2,
      sym__escape_char,
      sym__simple_char_char,
    STATE(85), 3,
      sym__unicodegraph_short,
      sym__trigraph,
      sym__char_char,
  [956] = 5,
    ACTIONS(289), 1,
      anon_sym_BANG,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(9), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(69), 2,
      sym__if_expression_text,
      sym__ident_text,
  [974] = 7,
    ACTIONS(277), 1,
      sym__letter_char,
    ACTIONS(279), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(281), 1,
      sym__escaped_ident_text,
    ACTIONS(299), 1,
      anon_sym__,
    STATE(24), 1,
      sym__identifier_start_char,
    STATE(101), 1,
      sym_ident,
    STATE(111), 1,
      sym__ident_text,
  [996] = 5,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__identifier_start_char,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(65), 2,
      sym__if_expression_text,
      sym__ident_text,
  [1014] = 5,
    ACTIONS(289), 1,
      anon_sym_BANG,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(9), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(67), 2,
      sym__if_expression_text,
      sym__ident_text,
  [1032] = 5,
    ACTIONS(289), 1,
      anon_sym_BANG,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(9), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(60), 2,
      sym__if_expression_text,
      sym__ident_text,
  [1050] = 5,
    ACTIONS(281), 1,
      sym__escaped_ident_text,
    STATE(24), 1,
      sym__identifier_start_char,
    STATE(75), 1,
      sym_ident,
    STATE(111), 1,
      sym__ident_text,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [1067] = 5,
    ACTIONS(281), 1,
      sym__escaped_ident_text,
    STATE(24), 1,
      sym__identifier_start_char,
    STATE(101), 1,
      sym_ident,
    STATE(111), 1,
      sym__ident_text,
    ACTIONS(277), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [1084] = 5,
    ACTIONS(11), 1,
      sym__escaped_ident_text,
    STATE(20), 1,
      sym__identifier_start_char,
    STATE(74), 1,
      sym__ident_text,
    STATE(83), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [1101] = 3,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(58), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1113] = 4,
    ACTIONS(305), 1,
      sym__escape_char,
    ACTIONS(308), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(311), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(53), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1127] = 4,
    ACTIONS(313), 1,
      sym__escape_char,
    ACTIONS(315), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(57), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1141] = 3,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(52), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1153] = 4,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_AT_DQUOTE,
    STATE(95), 2,
      sym_string,
      sym_verbatim_string,
  [1167] = 4,
    ACTIONS(329), 1,
      sym__escape_char,
    ACTIONS(331), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(333), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(53), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1181] = 3,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(58), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1193] = 1,
    ACTIONS(340), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1199] = 2,
    ACTIONS(342), 1,
      anon_sym_AMP_AMP,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
  [1207] = 3,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_AMP_AMP,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [1217] = 2,
    ACTIONS(346), 1,
      anon_sym_AMP_AMP,
    ACTIONS(340), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1225] = 1,
    ACTIONS(340), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1231] = 3,
    ACTIONS(223), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_f,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1241] = 1,
    ACTIONS(352), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1247] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_long_ident_repeat1,
  [1257] = 3,
    ACTIONS(342), 1,
      anon_sym_AMP_AMP,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_PIPE_PIPE,
  [1267] = 3,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_long_ident_repeat1,
  [1277] = 1,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1283] = 3,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
  [1293] = 1,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1299] = 3,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_long_ident_repeat1,
  [1309] = 1,
    ACTIONS(340), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1315] = 1,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [1320] = 2,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    STATE(82), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1327] = 2,
    ACTIONS(373), 1,
      sym__hex_digit_imm,
    STATE(11), 1,
      aux_sym_xint_repeat1,
  [1334] = 2,
    ACTIONS(375), 1,
      sym__octaldigit_imm,
    STATE(10), 1,
      aux_sym_xint_repeat2,
  [1341] = 2,
    ACTIONS(377), 1,
      sym__bitdigit_imm,
    STATE(9), 1,
      aux_sym_xint_repeat3,
  [1348] = 2,
    ACTIONS(379), 1,
      aux_sym_int_token1,
    STATE(56), 1,
      sym_int,
  [1355] = 2,
    ACTIONS(262), 1,
      anon_sym_SQUOTE2,
    ACTIONS(264), 1,
      anon_sym_SQUOTEB,
  [1362] = 2,
    ACTIONS(268), 1,
      anon_sym_SQUOTE2,
    ACTIONS(270), 1,
      anon_sym_SQUOTEB,
  [1369] = 2,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1376] = 1,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [1381] = 2,
    ACTIONS(383), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1388] = 2,
    ACTIONS(386), 1,
      anon_sym_SQUOTE2,
    ACTIONS(388), 1,
      anon_sym_SQUOTEB,
  [1395] = 1,
    ACTIONS(390), 1,
      sym__hex_digit_imm,
  [1399] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1403] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1407] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
  [1411] = 1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [1415] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1419] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1423] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1427] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1431] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1435] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [1439] = 1,
    ACTIONS(412), 1,
      sym__hex_digit_imm,
  [1443] = 1,
    ACTIONS(414), 1,
      sym__digit_char_imm,
  [1447] = 1,
    ACTIONS(416), 1,
      sym__hex_digit_imm,
  [1451] = 1,
    ACTIONS(418), 1,
      anon_sym_PIPE,
  [1455] = 1,
    ACTIONS(420), 1,
      anon_sym_PIPE,
  [1459] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [1463] = 1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [1467] = 1,
    ACTIONS(426), 1,
      sym__hex_digit_imm,
  [1471] = 1,
    ACTIONS(428), 1,
      sym__hex_digit_imm,
  [1475] = 1,
    ACTIONS(430), 1,
      sym__digit_char_imm,
  [1479] = 1,
    ACTIONS(432), 1,
      sym__hex_digit_imm,
  [1483] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [1487] = 1,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [1491] = 1,
    ACTIONS(438), 1,
      anon_sym_PIPE,
  [1495] = 1,
    ACTIONS(369), 1,
      anon_sym_PIPE,
  [1499] = 1,
    ACTIONS(440), 1,
      sym__hex_digit_imm,
  [1503] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [1507] = 1,
    ACTIONS(444), 1,
      sym__hex_digit_imm,
  [1511] = 1,
    ACTIONS(446), 1,
      sym__hex_digit_imm,
  [1515] = 1,
    ACTIONS(448), 1,
      sym__hex_digit_imm,
  [1519] = 1,
    ACTIONS(450), 1,
      sym__digit_char_imm,
  [1523] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [1527] = 1,
    ACTIONS(454), 1,
      sym__hex_digit_imm,
  [1531] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [1535] = 1,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
  [1539] = 1,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
  [1543] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [1547] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [1551] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [1555] = 1,
    ACTIONS(466), 1,
      sym__hex_digit_imm,
  [1559] = 1,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
  [1563] = 1,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [1567] = 1,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
  [1571] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1575] = 1,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
  [1579] = 1,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
  [1583] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [1587] = 1,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
  [1591] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [1595] = 1,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
  [1599] = 1,
    ACTIONS(486), 1,
      sym__digit_char_imm,
  [1603] = 1,
    ACTIONS(488), 1,
      sym__hex_digit_imm,
  [1607] = 1,
    ACTIONS(490), 1,
      sym__hex_digit_imm,
  [1611] = 1,
    ACTIONS(492), 1,
      sym__digit_char_imm,
  [1615] = 1,
    ACTIONS(494), 1,
      sym__hex_digit_imm,
  [1619] = 1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [1623] = 1,
    ACTIONS(498), 1,
      sym__digit_char_imm,
  [1627] = 1,
    ACTIONS(500), 1,
      sym__hex_digit_imm,
  [1631] = 1,
    ACTIONS(502), 1,
      sym__hex_digit_imm,
  [1635] = 1,
    ACTIONS(504), 1,
      sym__digit_char_imm,
  [1639] = 1,
    ACTIONS(506), 1,
      sym__hex_digit_imm,
  [1643] = 1,
    ACTIONS(508), 1,
      sym__digit_char_imm,
  [1647] = 1,
    ACTIONS(510), 1,
      sym__hex_digit_imm,
  [1651] = 1,
    ACTIONS(512), 1,
      sym__hex_digit_imm,
  [1655] = 1,
    ACTIONS(514), 1,
      sym__digit_char_imm,
  [1659] = 1,
    ACTIONS(516), 1,
      sym__hex_digit_imm,
  [1663] = 1,
    ACTIONS(518), 1,
      sym__hex_digit_imm,
  [1667] = 1,
    ACTIONS(520), 1,
      sym__hex_digit_imm,
  [1671] = 1,
    ACTIONS(522), 1,
      sym__hex_digit_imm,
  [1675] = 1,
    ACTIONS(524), 1,
      sym__hex_digit_imm,
  [1679] = 1,
    ACTIONS(526), 1,
      sym__hex_digit_imm,
  [1683] = 1,
    ACTIONS(528), 1,
      sym__hex_digit_imm,
  [1687] = 1,
    ACTIONS(530), 1,
      sym__hex_digit_imm,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 231,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 279,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 381,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 457,
  [SMALL_STATE(20)] = 481,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 525,
  [SMALL_STATE(23)] = 565,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 667,
  [SMALL_STATE(28)] = 687,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 734,
  [SMALL_STATE(32)] = 751,
  [SMALL_STATE(33)] = 766,
  [SMALL_STATE(34)] = 783,
  [SMALL_STATE(35)] = 797,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 825,
  [SMALL_STATE(38)] = 850,
  [SMALL_STATE(39)] = 868,
  [SMALL_STATE(40)] = 886,
  [SMALL_STATE(41)] = 904,
  [SMALL_STATE(42)] = 922,
  [SMALL_STATE(43)] = 940,
  [SMALL_STATE(44)] = 956,
  [SMALL_STATE(45)] = 974,
  [SMALL_STATE(46)] = 996,
  [SMALL_STATE(47)] = 1014,
  [SMALL_STATE(48)] = 1032,
  [SMALL_STATE(49)] = 1050,
  [SMALL_STATE(50)] = 1067,
  [SMALL_STATE(51)] = 1084,
  [SMALL_STATE(52)] = 1101,
  [SMALL_STATE(53)] = 1113,
  [SMALL_STATE(54)] = 1127,
  [SMALL_STATE(55)] = 1141,
  [SMALL_STATE(56)] = 1153,
  [SMALL_STATE(57)] = 1167,
  [SMALL_STATE(58)] = 1181,
  [SMALL_STATE(59)] = 1193,
  [SMALL_STATE(60)] = 1199,
  [SMALL_STATE(61)] = 1207,
  [SMALL_STATE(62)] = 1217,
  [SMALL_STATE(63)] = 1225,
  [SMALL_STATE(64)] = 1231,
  [SMALL_STATE(65)] = 1241,
  [SMALL_STATE(66)] = 1247,
  [SMALL_STATE(67)] = 1257,
  [SMALL_STATE(68)] = 1267,
  [SMALL_STATE(69)] = 1277,
  [SMALL_STATE(70)] = 1283,
  [SMALL_STATE(71)] = 1293,
  [SMALL_STATE(72)] = 1299,
  [SMALL_STATE(73)] = 1309,
  [SMALL_STATE(74)] = 1315,
  [SMALL_STATE(75)] = 1320,
  [SMALL_STATE(76)] = 1327,
  [SMALL_STATE(77)] = 1334,
  [SMALL_STATE(78)] = 1341,
  [SMALL_STATE(79)] = 1348,
  [SMALL_STATE(80)] = 1355,
  [SMALL_STATE(81)] = 1362,
  [SMALL_STATE(82)] = 1369,
  [SMALL_STATE(83)] = 1376,
  [SMALL_STATE(84)] = 1381,
  [SMALL_STATE(85)] = 1388,
  [SMALL_STATE(86)] = 1395,
  [SMALL_STATE(87)] = 1399,
  [SMALL_STATE(88)] = 1403,
  [SMALL_STATE(89)] = 1407,
  [SMALL_STATE(90)] = 1411,
  [SMALL_STATE(91)] = 1415,
  [SMALL_STATE(92)] = 1419,
  [SMALL_STATE(93)] = 1423,
  [SMALL_STATE(94)] = 1427,
  [SMALL_STATE(95)] = 1431,
  [SMALL_STATE(96)] = 1435,
  [SMALL_STATE(97)] = 1439,
  [SMALL_STATE(98)] = 1443,
  [SMALL_STATE(99)] = 1447,
  [SMALL_STATE(100)] = 1451,
  [SMALL_STATE(101)] = 1455,
  [SMALL_STATE(102)] = 1459,
  [SMALL_STATE(103)] = 1463,
  [SMALL_STATE(104)] = 1467,
  [SMALL_STATE(105)] = 1471,
  [SMALL_STATE(106)] = 1475,
  [SMALL_STATE(107)] = 1479,
  [SMALL_STATE(108)] = 1483,
  [SMALL_STATE(109)] = 1487,
  [SMALL_STATE(110)] = 1491,
  [SMALL_STATE(111)] = 1495,
  [SMALL_STATE(112)] = 1499,
  [SMALL_STATE(113)] = 1503,
  [SMALL_STATE(114)] = 1507,
  [SMALL_STATE(115)] = 1511,
  [SMALL_STATE(116)] = 1515,
  [SMALL_STATE(117)] = 1519,
  [SMALL_STATE(118)] = 1523,
  [SMALL_STATE(119)] = 1527,
  [SMALL_STATE(120)] = 1531,
  [SMALL_STATE(121)] = 1535,
  [SMALL_STATE(122)] = 1539,
  [SMALL_STATE(123)] = 1543,
  [SMALL_STATE(124)] = 1547,
  [SMALL_STATE(125)] = 1551,
  [SMALL_STATE(126)] = 1555,
  [SMALL_STATE(127)] = 1559,
  [SMALL_STATE(128)] = 1563,
  [SMALL_STATE(129)] = 1567,
  [SMALL_STATE(130)] = 1571,
  [SMALL_STATE(131)] = 1575,
  [SMALL_STATE(132)] = 1579,
  [SMALL_STATE(133)] = 1583,
  [SMALL_STATE(134)] = 1587,
  [SMALL_STATE(135)] = 1591,
  [SMALL_STATE(136)] = 1595,
  [SMALL_STATE(137)] = 1599,
  [SMALL_STATE(138)] = 1603,
  [SMALL_STATE(139)] = 1607,
  [SMALL_STATE(140)] = 1611,
  [SMALL_STATE(141)] = 1615,
  [SMALL_STATE(142)] = 1619,
  [SMALL_STATE(143)] = 1623,
  [SMALL_STATE(144)] = 1627,
  [SMALL_STATE(145)] = 1631,
  [SMALL_STATE(146)] = 1635,
  [SMALL_STATE(147)] = 1639,
  [SMALL_STATE(148)] = 1643,
  [SMALL_STATE(149)] = 1647,
  [SMALL_STATE(150)] = 1651,
  [SMALL_STATE(151)] = 1655,
  [SMALL_STATE(152)] = 1659,
  [SMALL_STATE(153)] = 1663,
  [SMALL_STATE(154)] = 1667,
  [SMALL_STATE(155)] = 1671,
  [SMALL_STATE(156)] = 1675,
  [SMALL_STATE(157)] = 1679,
  [SMALL_STATE(158)] = 1683,
  [SMALL_STATE(159)] = 1687,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_int_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(153),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(104),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(148),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xint, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xint, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2), SHIFT_REPEAT(12),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2), SHIFT_REPEAT(13),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat2, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2), SHIFT_REPEAT(14),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat3, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(155),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(159),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(151),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(17),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(17),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(18),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_text, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_text, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(26),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_long, 9),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_long, 9),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_short, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_short, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trigraph, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigraph, 4),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_directive, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2), SHIFT_REPEAT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ieee64, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_ident, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_long_ident_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_long_ident_repeat1, 2), SHIFT_REPEAT(51),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_active_pattern_op_name_repeat1, 2), SHIFT_REPEAT(50),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ieee32, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_directive, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_active_pattern_op_name_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int32, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 6),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ieee64, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bignum, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint64, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int64, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytechar, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unativeint, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nativeint, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sbyte, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int16, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint16, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint32, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_directive, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
