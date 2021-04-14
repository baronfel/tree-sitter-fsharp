#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 264
#define ALIAS_COUNT 0
#define TOKEN_COUNT 207
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
  anon_sym_abstract = 20,
  anon_sym_and = 21,
  anon_sym_as = 22,
  anon_sym_assert = 23,
  anon_sym_base = 24,
  anon_sym_begin = 25,
  anon_sym_class = 26,
  anon_sym_default = 27,
  anon_sym_delegate = 28,
  anon_sym_do = 29,
  anon_sym_done = 30,
  anon_sym_downcast = 31,
  anon_sym_downto = 32,
  anon_sym_elif = 33,
  anon_sym_else = 34,
  anon_sym_end = 35,
  anon_sym_exception = 36,
  anon_sym_extern = 37,
  anon_sym_false = 38,
  anon_sym_finally = 39,
  anon_sym_for = 40,
  anon_sym_fun = 41,
  anon_sym_function = 42,
  anon_sym_global = 43,
  anon_sym_if = 44,
  anon_sym_in = 45,
  anon_sym_inherit = 46,
  anon_sym_inline = 47,
  anon_sym_interface = 48,
  anon_sym_internal = 49,
  anon_sym_lazy = 50,
  anon_sym_let = 51,
  anon_sym_match = 52,
  anon_sym_member = 53,
  anon_sym_module = 54,
  anon_sym_mutable = 55,
  anon_sym_namespace = 56,
  anon_sym_new = 57,
  anon_sym_null = 58,
  anon_sym_of = 59,
  anon_sym_open = 60,
  anon_sym_or = 61,
  anon_sym_override = 62,
  anon_sym_private = 63,
  anon_sym_public = 64,
  anon_sym_rec = 65,
  anon_sym_return = 66,
  anon_sym_sig = 67,
  anon_sym_static = 68,
  anon_sym_struct = 69,
  anon_sym_then = 70,
  anon_sym_to = 71,
  anon_sym_true = 72,
  anon_sym_try = 73,
  anon_sym_type = 74,
  anon_sym_upcast = 75,
  anon_sym_use = 76,
  anon_sym_val = 77,
  anon_sym_void = 78,
  anon_sym_when = 79,
  anon_sym_while = 80,
  anon_sym_with = 81,
  anon_sym_yield = 82,
  anon_sym_atomic = 83,
  anon_sym_break = 84,
  anon_sym_checked = 85,
  anon_sym_component = 86,
  anon_sym_const = 87,
  anon_sym_constraint = 88,
  anon_sym_constructor = 89,
  anon_sym_continue = 90,
  anon_sym_eager = 91,
  anon_sym_fixed = 92,
  anon_sym_fori = 93,
  anon_sym_functor = 94,
  anon_sym_include = 95,
  anon_sym_measure = 96,
  anon_sym_method = 97,
  anon_sym_mixin = 98,
  anon_sym_object = 99,
  anon_sym_parallel = 100,
  anon_sym_params = 101,
  anon_sym_process = 102,
  anon_sym_protected = 103,
  anon_sym_pure = 104,
  anon_sym_recursive = 105,
  anon_sym_sealed = 106,
  anon_sym_tailcall = 107,
  anon_sym_trait = 108,
  anon_sym_virtual = 109,
  anon_sym_volatile = 110,
  sym__escape_char = 111,
  sym__non_escape_char = 112,
  sym__simple_char_char = 113,
  sym__hex_digit_imm = 114,
  anon_sym_BSLASHu = 115,
  anon_sym_BSLASHU = 116,
  anon_sym_BSLASH = 117,
  sym__simple_string_char = 118,
  anon_sym_BSLASH2 = 119,
  anon_sym_SQUOTE = 120,
  anon_sym_SQUOTE2 = 121,
  anon_sym_DQUOTE = 122,
  anon_sym_DQUOTE2 = 123,
  anon_sym_ = 124,
  anon_sym_AT_DQUOTE = 125,
  anon_sym_SQUOTEB = 126,
  anon_sym_DQUOTEB = 127,
  aux_sym__simple_or_escape_char_token1 = 128,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 129,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 130,
  anon_sym_let_BANG = 131,
  anon_sym_use_BANG = 132,
  anon_sym_do_BANG = 133,
  anon_sym_yield_BANG = 134,
  anon_sym_return_BANG = 135,
  anon_sym_PIPE = 136,
  anon_sym_DASH_GT = 137,
  anon_sym_LT_DASH_DOT = 138,
  anon_sym_COLON = 139,
  anon_sym_LBRACK = 140,
  anon_sym_RBRACK = 141,
  anon_sym_LBRACK_LT = 142,
  anon_sym_GT_RBRACK = 143,
  anon_sym_LBRACK_PIPE = 144,
  anon_sym_PIPE_RBRACK = 145,
  anon_sym_LBRACE = 146,
  anon_sym_RBRACE = 147,
  anon_sym_POUND = 148,
  anon_sym_COLON_QMARK_GT = 149,
  anon_sym_COLON_QMARK = 150,
  anon_sym_COLON_GT = 151,
  anon_sym_DOT_DOT = 152,
  anon_sym_COLON_COLON = 153,
  anon_sym_COLON_EQ = 154,
  anon_sym_SEMI_SEMI = 155,
  anon_sym_SEMI = 156,
  anon_sym_EQ_ = 157,
  anon_sym_QMARK = 158,
  anon_sym_QMARK_QMARK = 159,
  anon_sym_LPAREN_STAR_RPAREN = 160,
  anon_sym_LT_AT = 161,
  anon_sym_AT_GT = 162,
  anon_sym_LT_AT_AT = 163,
  anon_sym_AT_AT_GT = 164,
  anon_sym_TILDE = 165,
  anon_sym_BQUOTE = 166,
  sym__first_op_char = 167,
  anon_sym_QMARK_LT_DASH = 168,
  sym__octaldigit_imm = 169,
  sym__bitdigit_imm = 170,
  aux_sym_int_token1 = 171,
  aux_sym_xint_token1 = 172,
  aux_sym_xint_token2 = 173,
  aux_sym_xint_token3 = 174,
  anon_sym_y = 175,
  anon_sym_uy = 176,
  anon_sym_s = 177,
  anon_sym_us = 178,
  anon_sym_l = 179,
  aux_sym_uint32_token1 = 180,
  anon_sym_n = 181,
  anon_sym_un = 182,
  anon_sym_L = 183,
  aux_sym_uint64_token1 = 184,
  anon_sym_f = 185,
  aux_sym_bignum_token1 = 186,
  aux_sym_decimal_token1 = 187,
  sym_float = 188,
  sym_shebang = 189,
  anon_sym_POUND2 = 190,
  anon_sym_POUNDline = 191,
  anon_sym__ = 192,
  anon_sym_DOT = 193,
  anon_sym_PLUS = 194,
  anon_sym_DASH = 195,
  anon_sym_PERCENT = 196,
  anon_sym_AMP = 197,
  anon_sym_DOLLAR = 198,
  anon_sym_STAR = 199,
  anon_sym_LT = 200,
  anon_sym_GT = 201,
  anon_sym_COMMA = 202,
  anon_sym_DOLLAR_DOTmeasure = 203,
  anon_sym_DOLLAR_DOTstatic_parameter = 204,
  anon_sym_CARET = 205,
  anon_sym_EQ = 206,
  sym_test = 207,
  sym__newline = 208,
  sym_cond_directive = 209,
  sym_if_directive = 210,
  sym__if_expression_text = 211,
  sym__identifier_start_char = 212,
  sym__identifier_char = 213,
  sym__ident_text = 214,
  sym_ident = 215,
  sym_keyword = 216,
  sym__unicodegraph_short = 217,
  sym__unicodegraph_long = 218,
  sym__trigraph = 219,
  sym__char_char = 220,
  sym__string_char = 221,
  sym_char = 222,
  sym_string = 223,
  sym__verbatim_string_char = 224,
  sym_verbatim_string = 225,
  sym_bytechar = 226,
  sym_bytearray = 227,
  sym_verbatim_bytearray = 228,
  sym__simple_or_escape_char = 229,
  sym_triple_quoted_string = 230,
  sym_symbolic_keyword = 231,
  sym__op_char = 232,
  sym__quote_op_left = 233,
  sym__quote_op_right = 234,
  sym_symbolic_op = 235,
  sym_int = 236,
  sym_xint = 237,
  sym_sbyte = 238,
  sym_byte = 239,
  sym_int16 = 240,
  sym_uint16 = 241,
  sym_int32 = 242,
  sym_uint32 = 243,
  sym_nativeint = 244,
  sym_unativeint = 245,
  sym_int64 = 246,
  sym_uint64 = 247,
  sym_bignum = 248,
  sym_decimal = 249,
  sym_line_directive = 250,
  sym_active_pattern_op_name = 251,
  sym_long_ident = 252,
  aux_sym__ident_text_repeat1 = 253,
  aux_sym_string_repeat1 = 254,
  aux_sym_verbatim_string_repeat1 = 255,
  aux_sym_triple_quoted_string_repeat1 = 256,
  aux_sym_symbolic_op_repeat1 = 257,
  aux_sym_int_repeat1 = 258,
  aux_sym_xint_repeat1 = 259,
  aux_sym_xint_repeat2 = 260,
  aux_sym_xint_repeat3 = 261,
  aux_sym_active_pattern_op_name_repeat1 = 262,
  aux_sym_long_ident_repeat1 = 263,
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
  [anon_sym_abstract] = "abstract",
  [anon_sym_and] = "and",
  [anon_sym_as] = "as",
  [anon_sym_assert] = "assert",
  [anon_sym_base] = "base",
  [anon_sym_begin] = "begin",
  [anon_sym_class] = "class",
  [anon_sym_default] = "default",
  [anon_sym_delegate] = "delegate",
  [anon_sym_do] = "do",
  [anon_sym_done] = "done",
  [anon_sym_downcast] = "downcast",
  [anon_sym_downto] = "downto",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_exception] = "exception",
  [anon_sym_extern] = "extern",
  [anon_sym_false] = "false",
  [anon_sym_finally] = "finally",
  [anon_sym_for] = "for",
  [anon_sym_fun] = "fun",
  [anon_sym_function] = "function",
  [anon_sym_global] = "global",
  [anon_sym_if] = "if",
  [anon_sym_in] = "in",
  [anon_sym_inherit] = "inherit",
  [anon_sym_inline] = "inline",
  [anon_sym_interface] = "interface",
  [anon_sym_internal] = "internal",
  [anon_sym_lazy] = "lazy",
  [anon_sym_let] = "let",
  [anon_sym_match] = "match",
  [anon_sym_member] = "member",
  [anon_sym_module] = "module",
  [anon_sym_mutable] = "mutable",
  [anon_sym_namespace] = "namespace",
  [anon_sym_new] = "new",
  [anon_sym_null] = "null",
  [anon_sym_of] = "of",
  [anon_sym_open] = "open",
  [anon_sym_or] = "or",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_rec] = "rec",
  [anon_sym_return] = "return",
  [anon_sym_sig] = "sig",
  [anon_sym_static] = "static",
  [anon_sym_struct] = "struct",
  [anon_sym_then] = "then",
  [anon_sym_to] = "to",
  [anon_sym_true] = "true",
  [anon_sym_try] = "try",
  [anon_sym_type] = "type",
  [anon_sym_upcast] = "upcast",
  [anon_sym_use] = "use",
  [anon_sym_val] = "val",
  [anon_sym_void] = "void",
  [anon_sym_when] = "when",
  [anon_sym_while] = "while",
  [anon_sym_with] = "with",
  [anon_sym_yield] = "yield",
  [anon_sym_atomic] = "atomic",
  [anon_sym_break] = "break",
  [anon_sym_checked] = "checked",
  [anon_sym_component] = "component",
  [anon_sym_const] = "const",
  [anon_sym_constraint] = "constraint",
  [anon_sym_constructor] = "constructor",
  [anon_sym_continue] = "continue",
  [anon_sym_eager] = "eager",
  [anon_sym_fixed] = "fixed",
  [anon_sym_fori] = "fori",
  [anon_sym_functor] = "functor",
  [anon_sym_include] = "include",
  [anon_sym_measure] = "measure",
  [anon_sym_method] = "method",
  [anon_sym_mixin] = "mixin",
  [anon_sym_object] = "object",
  [anon_sym_parallel] = "parallel",
  [anon_sym_params] = "params",
  [anon_sym_process] = "process",
  [anon_sym_protected] = "protected",
  [anon_sym_pure] = "pure",
  [anon_sym_recursive] = "recursive",
  [anon_sym_sealed] = "sealed",
  [anon_sym_tailcall] = "tailcall",
  [anon_sym_trait] = "trait",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
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
  [anon_sym_let_BANG] = "let!",
  [anon_sym_use_BANG] = "use!",
  [anon_sym_do_BANG] = "do!",
  [anon_sym_yield_BANG] = "yield!",
  [anon_sym_return_BANG] = "return!",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH_DOT] = "<-.",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LT] = "[<",
  [anon_sym_GT_RBRACK] = ">]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON_QMARK_GT] = ":\?>",
  [anon_sym_COLON_QMARK] = ":\?",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ_] = "=_",
  [anon_sym_QMARK] = "\?",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
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
  [aux_sym_bignum_token1] = "bignum_token1",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_float] = "float",
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
  [sym_keyword] = "keyword",
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
  [sym_symbolic_keyword] = "symbolic_keyword",
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
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_downcast] = anon_sym_downcast,
  [anon_sym_downto] = anon_sym_downto,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_lazy] = anon_sym_lazy,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_mutable] = anon_sym_mutable,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_sig] = anon_sym_sig,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_upcast] = anon_sym_upcast,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_atomic] = anon_sym_atomic,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_eager] = anon_sym_eager,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_fori] = anon_sym_fori,
  [anon_sym_functor] = anon_sym_functor,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_measure] = anon_sym_measure,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_mixin] = anon_sym_mixin,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_parallel] = anon_sym_parallel,
  [anon_sym_params] = anon_sym_params,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_recursive] = anon_sym_recursive,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_tailcall] = anon_sym_tailcall,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
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
  [anon_sym_let_BANG] = anon_sym_let_BANG,
  [anon_sym_use_BANG] = anon_sym_use_BANG,
  [anon_sym_do_BANG] = anon_sym_do_BANG,
  [anon_sym_yield_BANG] = anon_sym_yield_BANG,
  [anon_sym_return_BANG] = anon_sym_return_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_DOT] = anon_sym_LT_DASH_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LT] = anon_sym_LBRACK_LT,
  [anon_sym_GT_RBRACK] = anon_sym_GT_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON_QMARK_GT] = anon_sym_COLON_QMARK_GT,
  [anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ_] = anon_sym_EQ_,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_LPAREN_STAR_RPAREN] = anon_sym_LPAREN_STAR_RPAREN,
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
  [aux_sym_bignum_token1] = aux_sym_bignum_token1,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_float] = sym_float,
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
  [sym_keyword] = sym_keyword,
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
  [sym_symbolic_keyword] = sym_symbolic_keyword,
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
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_downcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_downto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exception] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lazy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fori] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_measure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parallel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_params] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recursive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tailcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
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
  [anon_sym_let_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DOT] = {
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
  [anon_sym_LBRACK_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_RBRACK] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [anon_sym_EQ_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR_RPAREN] = {
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
  [aux_sym_bignum_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
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
  [sym_keyword] = {
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
  [sym_symbolic_keyword] = {
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
                ? (c < 'h'
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

static inline bool sym__letter_char_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(338);
      if (lookahead == '!') ADVANCE(348);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '$') ADVANCE(582);
      if (lookahead == '%') ADVANCE(580);
      if (lookahead == '&') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(484);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(583);
      if (lookahead == '+') ADVANCE(578);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == '/') ADVANCE(541);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(524);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(585);
      if (lookahead == '?') ADVANCE(527);
      if (lookahead == '@') ADVANCE(538);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(479);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '^') ADVANCE(589);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead == '`') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(369);
      if (lookahead == 'y') ADVANCE(554);
      if (lookahead == '{') ADVANCE(514);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '}') ADVANCE(515);
      if (lookahead == '~') ADVANCE(534);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(474);
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(567);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(352);
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (sym__letter_char_character_set_1(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead)) ADVANCE(480);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '"') ADVANCE(489);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead)) ADVANCE(480);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(480);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '`') ADVANCE(22);
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
      if (lookahead == '`') ADVANCE(322);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(487);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(540);
      if (lookahead == '/') ADVANCE(541);
      if (lookahead == '0') ADVANCE(549);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(524);
      if (lookahead == '<') ADVANCE(539);
      if (lookahead == '=') ADVANCE(544);
      if (lookahead == '>') ADVANCE(543);
      if (lookahead == '?') ADVANCE(527);
      if (lookahead == '@') ADVANCE(538);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == '`') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(369);
      if (lookahead == 'y') ADVANCE(371);
      if (lookahead == '{') ADVANCE(514);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '}') ADVANCE(515);
      if (lookahead == '~') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= ',') ||
          lookahead == '^') ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(353);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(496);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(494);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(497);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '|') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(347);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(506);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(533);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(565);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(379);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(345);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(427);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(441);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == 'j') ADVANCE(113);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(444);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 311:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 312:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 313:
      if (lookahead == 'w') ADVANCE(417);
      END_STATE();
    case 314:
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 315:
      if (lookahead == 'y') ADVANCE(410);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(399);
      END_STATE();
    case 317:
      if (lookahead == 'z') ADVANCE(315);
      END_STATE();
    case 318:
      if (lookahead == '|') ADVANCE(346);
      END_STATE();
    case 319:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 320:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(471);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 322:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(4);
      END_STATE();
    case 323:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(325);
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(325);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 325:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(325);
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 326:
      if (eof) ADVANCE(338);
      if (lookahead == '!') ADVANCE(348);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '$') ADVANCE(582);
      if (lookahead == '%') ADVANCE(580);
      if (lookahead == '&') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(583);
      if (lookahead == '+') ADVANCE(578);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == '/') ADVANCE(541);
      if (lookahead == ':') ADVANCE(507);
      if (lookahead == ';') ADVANCE(524);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(585);
      if (lookahead == '?') ADVANCE(527);
      if (lookahead == '@') ADVANCE(538);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(482);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '^') ADVANCE(589);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead == '`') ADVANCE(535);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(369);
      if (lookahead == '{') ADVANCE(514);
      if (lookahead == '|') ADVANCE(503);
      if (lookahead == '}') ADVANCE(515);
      if (lookahead == '~') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(326)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (sym__letter_char_character_set_4(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 327:
      if (eof) ADVANCE(338);
      if (lookahead == '!') ADVANCE(348);
      if (lookahead == '(') ADVANCE(349);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(327)
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      END_STATE();
    case 328:
      if (eof) ADVANCE(338);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '\'') ADVANCE(485);
      if (lookahead == '?') ADVANCE(526);
      if (lookahead == '@') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(554);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(536);
      END_STATE();
    case 329:
      if (eof) ADVANCE(338);
      if (lookahead == '"') ADVANCE(486);
      if (lookahead == '?') ADVANCE(526);
      if (lookahead == '@') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(329)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(536);
      END_STATE();
    case 330:
      if (eof) ADVANCE(338);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 331:
      if (eof) ADVANCE(338);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(331)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(374);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(376);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(375);
      END_STATE();
    case 332:
      if (eof) ADVANCE(338);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(554);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      END_STATE();
    case 333:
      if (eof) ADVANCE(338);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '|') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      END_STATE();
    case 334:
      if (eof) ADVANCE(338);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(546);
      END_STATE();
    case 335:
      if (eof) ADVANCE(338);
      if (lookahead == 'L') ADVANCE(564);
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 's') ADVANCE(556);
      if (lookahead == 'u') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 336:
      if (eof) ADVANCE(338);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < 7 || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(473);
      END_STATE();
    case 337:
      if (eof) ADVANCE(338);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(481);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(490);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(325);
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_else_directive);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_endif_directive);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(323);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__digit_char_imm);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__letter_char);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == 'v') ADVANCE(112);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'f') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__combining_char);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__formatting_char);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '!') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_downcast);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_downto);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!') ADVANCE(498);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '!') ADVANCE(502);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_upcast);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '!') ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_yield);
      if (lookahead == '!') ADVANCE(501);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_eager);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_fori);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_measure);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_parallel);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_recursive);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_tailcall);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__escape_char);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__non_escape_char);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__simple_char_char);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__hex_digit_imm);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(471);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(471);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (!sym__non_escape_char_character_set_1(lookahead)) ADVANCE(472);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__simple_string_char);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__simple_string_char);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(480);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == 'B') ADVANCE(492);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '\r') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_SQUOTEB);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DQUOTEB);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_let_BANG);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_use_BANG);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_do_BANG);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_yield_BANG);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_return_BANG);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ']') ADVANCE(513);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(346);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DOT);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead == '=') ADVANCE(522);
      if (lookahead == '>') ADVANCE(519);
      if (lookahead == '?') ADVANCE(518);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '|') ADVANCE(512);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LBRACK_LT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_GT_RBRACK);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(573);
      if (lookahead == '!') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK_GT);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '>') ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_EQ_);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '?') ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(325);
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      if (lookahead == '@') ADVANCE(532);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_AT_GT);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LT_AT_AT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_AT_AT_GT);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__first_op_char);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '"') ADVANCE(491);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '"') ADVANCE(491);
      if (lookahead == '>') ADVANCE(531);
      if (lookahead == '@') ADVANCE(18);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(530);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '.') ADVANCE(520);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '/') ADVANCE(341);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '>') ADVANCE(505);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == ']') ADVANCE(511);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '_') ADVANCE(525);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_QMARK_LT_DASH);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__octaldigit_imm);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__bitdigit_imm);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(553);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_xint_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_xint_token2);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_xint_token3);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_uy);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      if (lookahead == 'L') ADVANCE(565);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 'y') ADVANCE(555);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_un);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_uint64_token1);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_bignum_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(520);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(505);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '.') ADVANCE(202);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '@') ADVANCE(530);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOTmeasure);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOTstatic_parameter);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 328},
  [3] = {.lex_state = 328},
  [4] = {.lex_state = 328},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 332},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 335},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 330},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 335},
  [20] = {.lex_state = 332},
  [21] = {.lex_state = 328},
  [22] = {.lex_state = 330},
  [23] = {.lex_state = 330},
  [24] = {.lex_state = 490},
  [25] = {.lex_state = 490},
  [26] = {.lex_state = 328},
  [27] = {.lex_state = 490},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 490},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 490},
  [32] = {.lex_state = 490},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 337},
  [39] = {.lex_state = 327},
  [40] = {.lex_state = 327},
  [41] = {.lex_state = 327},
  [42] = {.lex_state = 327},
  [43] = {.lex_state = 327},
  [44] = {.lex_state = 327},
  [45] = {.lex_state = 327},
  [46] = {.lex_state = 327},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 337},
  [49] = {.lex_state = 327},
  [50] = {.lex_state = 327},
  [51] = {.lex_state = 327},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 328},
  [54] = {.lex_state = 328},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 328},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 328},
  [59] = {.lex_state = 332},
  [60] = {.lex_state = 332},
  [61] = {.lex_state = 332},
  [62] = {.lex_state = 332},
  [63] = {.lex_state = 332},
  [64] = {.lex_state = 332},
  [65] = {.lex_state = 332},
  [66] = {.lex_state = 332},
  [67] = {.lex_state = 332},
  [68] = {.lex_state = 332},
  [69] = {.lex_state = 332},
  [70] = {.lex_state = 332},
  [71] = {.lex_state = 332},
  [72] = {.lex_state = 332},
  [73] = {.lex_state = 332},
  [74] = {.lex_state = 328},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 328},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 337},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 328},
  [81] = {.lex_state = 332},
  [82] = {.lex_state = 334},
  [83] = {.lex_state = 335},
  [84] = {.lex_state = 328},
  [85] = {.lex_state = 332},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 335},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 328},
  [97] = {.lex_state = 335},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 335},
  [100] = {.lex_state = 328},
  [101] = {.lex_state = 335},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 335},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 335},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 335},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 335},
  [118] = {.lex_state = 335},
  [119] = {.lex_state = 335},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 335},
  [131] = {.lex_state = 328},
  [132] = {.lex_state = 335},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 328},
  [141] = {.lex_state = 335},
  [142] = {.lex_state = 335},
  [143] = {.lex_state = 328},
  [144] = {.lex_state = 335},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 328},
  [147] = {.lex_state = 335},
  [148] = {.lex_state = 335},
  [149] = {.lex_state = 328},
  [150] = {.lex_state = 335},
  [151] = {.lex_state = 328},
  [152] = {.lex_state = 335},
  [153] = {.lex_state = 335},
  [154] = {.lex_state = 328},
  [155] = {.lex_state = 335},
  [156] = {.lex_state = 335},
  [157] = {.lex_state = 335},
  [158] = {.lex_state = 335},
  [159] = {.lex_state = 335},
  [160] = {.lex_state = 335},
  [161] = {.lex_state = 335},
  [162] = {.lex_state = 335},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUNDif] = ACTIONS(1),
    [sym_else_directive] = ACTIONS(1),
    [sym_endif_directive] = ACTIONS(1),
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
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_upcast] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_measure] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_parallel] = ACTIONS(1),
    [anon_sym_params] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_recursive] = ACTIONS(1),
    [anon_sym_tailcall] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [sym__non_escape_char] = ACTIONS(1),
    [sym__hex_digit_imm] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_use_BANG] = ACTIONS(1),
    [anon_sym_return_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LT] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON_QMARK_GT] = ACTIONS(1),
    [anon_sym_COLON_QMARK] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
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
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
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
    [sym_test] = STATE(133),
    [sym_cond_directive] = STATE(93),
    [sym_if_directive] = STATE(145),
    [sym__identifier_start_char] = STATE(22),
    [sym__ident_text] = STATE(85),
    [sym_ident] = STATE(68),
    [sym_keyword] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [sym_verbatim_string] = STATE(93),
    [sym_bytechar] = STATE(93),
    [sym_bytearray] = STATE(93),
    [sym_verbatim_bytearray] = STATE(93),
    [sym_triple_quoted_string] = STATE(93),
    [sym_symbolic_keyword] = STATE(93),
    [sym__quote_op_left] = STATE(134),
    [sym__quote_op_right] = STATE(134),
    [sym_symbolic_op] = STATE(93),
    [sym_int] = STATE(21),
    [sym_xint] = STATE(26),
    [sym_sbyte] = STATE(93),
    [sym_byte] = STATE(93),
    [sym_int16] = STATE(93),
    [sym_uint16] = STATE(93),
    [sym_int32] = STATE(93),
    [sym_uint32] = STATE(93),
    [sym_nativeint] = STATE(93),
    [sym_unativeint] = STATE(93),
    [sym_int64] = STATE(93),
    [sym_uint64] = STATE(93),
    [sym_bignum] = STATE(93),
    [sym_decimal] = STATE(93),
    [sym_line_directive] = STATE(93),
    [sym_active_pattern_op_name] = STATE(93),
    [sym_long_ident] = STATE(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUNDif] = ACTIONS(5),
    [sym_else_directive] = ACTIONS(7),
    [sym_endif_directive] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(11),
    [sym__letter_char] = ACTIONS(13),
    [aux_sym__identifier_start_char_token1] = ACTIONS(15),
    [sym__escaped_ident_text] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_as] = ACTIONS(21),
    [anon_sym_assert] = ACTIONS(19),
    [anon_sym_base] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_delegate] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_done] = ACTIONS(19),
    [anon_sym_downcast] = ACTIONS(19),
    [anon_sym_downto] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_exception] = ACTIONS(19),
    [anon_sym_extern] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_finally] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_global] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(21),
    [anon_sym_inherit] = ACTIONS(19),
    [anon_sym_inline] = ACTIONS(19),
    [anon_sym_interface] = ACTIONS(19),
    [anon_sym_internal] = ACTIONS(19),
    [anon_sym_lazy] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_member] = ACTIONS(19),
    [anon_sym_module] = ACTIONS(19),
    [anon_sym_mutable] = ACTIONS(19),
    [anon_sym_namespace] = ACTIONS(19),
    [anon_sym_new] = ACTIONS(19),
    [anon_sym_null] = ACTIONS(19),
    [anon_sym_of] = ACTIONS(19),
    [anon_sym_open] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_override] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_rec] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_sig] = ACTIONS(19),
    [anon_sym_static] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_to] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_try] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_upcast] = ACTIONS(19),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_val] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_when] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(19),
    [anon_sym_yield] = ACTIONS(21),
    [anon_sym_atomic] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_checked] = ACTIONS(19),
    [anon_sym_component] = ACTIONS(19),
    [anon_sym_const] = ACTIONS(21),
    [anon_sym_constraint] = ACTIONS(19),
    [anon_sym_constructor] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_eager] = ACTIONS(19),
    [anon_sym_fixed] = ACTIONS(19),
    [anon_sym_fori] = ACTIONS(19),
    [anon_sym_functor] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_measure] = ACTIONS(19),
    [anon_sym_method] = ACTIONS(19),
    [anon_sym_mixin] = ACTIONS(19),
    [anon_sym_object] = ACTIONS(19),
    [anon_sym_parallel] = ACTIONS(19),
    [anon_sym_params] = ACTIONS(19),
    [anon_sym_process] = ACTIONS(19),
    [anon_sym_protected] = ACTIONS(19),
    [anon_sym_pure] = ACTIONS(19),
    [anon_sym_recursive] = ACTIONS(19),
    [anon_sym_sealed] = ACTIONS(19),
    [anon_sym_tailcall] = ACTIONS(19),
    [anon_sym_trait] = ACTIONS(19),
    [anon_sym_virtual] = ACTIONS(19),
    [anon_sym_volatile] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_AT_DQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(29),
    [anon_sym_let_BANG] = ACTIONS(11),
    [anon_sym_use_BANG] = ACTIONS(11),
    [anon_sym_do_BANG] = ACTIONS(11),
    [anon_sym_yield_BANG] = ACTIONS(11),
    [anon_sym_return_BANG] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_LT_DASH_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACK_LT] = ACTIONS(11),
    [anon_sym_GT_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACK_PIPE] = ACTIONS(11),
    [anon_sym_PIPE_RBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_COLON_QMARK_GT] = ACTIONS(11),
    [anon_sym_COLON_QMARK] = ACTIONS(9),
    [anon_sym_COLON_GT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_COLON_EQ] = ACTIONS(11),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_EQ_] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(9),
    [anon_sym_LT_AT] = ACTIONS(35),
    [anon_sym_AT_GT] = ACTIONS(37),
    [anon_sym_LT_AT_AT] = ACTIONS(39),
    [anon_sym_AT_AT_GT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(9),
    [sym__first_op_char] = ACTIONS(41),
    [anon_sym_QMARK_LT_DASH] = ACTIONS(43),
    [aux_sym_int_token1] = ACTIONS(45),
    [aux_sym_xint_token1] = ACTIONS(47),
    [aux_sym_xint_token2] = ACTIONS(49),
    [aux_sym_xint_token3] = ACTIONS(51),
    [sym_float] = ACTIONS(53),
    [sym_shebang] = ACTIONS(3),
    [anon_sym_POUND2] = ACTIONS(55),
    [anon_sym_POUNDline] = ACTIONS(55),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(59), 1,
      sym__digit_char_imm,
    ACTIONS(61), 1,
      aux_sym_uint32_token1,
    STATE(3), 1,
      aux_sym_int_repeat1,
    ACTIONS(57), 14,
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
    ACTIONS(65), 1,
      sym__digit_char_imm,
    ACTIONS(68), 1,
      aux_sym_uint32_token1,
    STATE(3), 1,
      aux_sym_int_repeat1,
    ACTIONS(63), 14,
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
    ACTIONS(72), 1,
      sym__digit_char_imm,
    ACTIONS(74), 1,
      aux_sym_uint32_token1,
    STATE(2), 1,
      aux_sym_int_repeat1,
    ACTIONS(70), 14,
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
    ACTIONS(79), 1,
      sym__escape_char,
    ACTIONS(82), 1,
      anon_sym_BSLASHu,
    ACTIONS(85), 1,
      anon_sym_BSLASHU,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      anon_sym_DQUOTE2,
    ACTIONS(93), 1,
      anon_sym_DQUOTEB,
    ACTIONS(76), 4,
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
    ACTIONS(97), 1,
      sym__escape_char,
    ACTIONS(99), 1,
      anon_sym_BSLASHu,
    ACTIONS(101), 1,
      anon_sym_BSLASHU,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_DQUOTE2,
    ACTIONS(107), 1,
      anon_sym_DQUOTEB,
    ACTIONS(95), 4,
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
    ACTIONS(99), 1,
      anon_sym_BSLASHu,
    ACTIONS(101), 1,
      anon_sym_BSLASHU,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(111), 1,
      sym__escape_char,
    ACTIONS(113), 1,
      anon_sym_DQUOTE2,
    ACTIONS(115), 1,
      anon_sym_DQUOTEB,
    ACTIONS(109), 4,
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
    ACTIONS(119), 1,
      sym__escape_char,
    ACTIONS(121), 1,
      anon_sym_BSLASHu,
    ACTIONS(123), 1,
      anon_sym_BSLASHU,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(127), 1,
      anon_sym_DQUOTE2,
    ACTIONS(117), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(10), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [207] = 7,
    ACTIONS(121), 1,
      anon_sym_BSLASHu,
    ACTIONS(123), 1,
      anon_sym_BSLASHU,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym__escape_char,
    ACTIONS(133), 1,
      anon_sym_DQUOTE2,
    ACTIONS(129), 4,
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
  [237] = 7,
    ACTIONS(93), 1,
      anon_sym_DQUOTE2,
    ACTIONS(138), 1,
      sym__escape_char,
    ACTIONS(141), 1,
      anon_sym_BSLASHu,
    ACTIONS(144), 1,
      anon_sym_BSLASHU,
    ACTIONS(147), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(10), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [267] = 4,
    ACTIONS(152), 1,
      sym__bitdigit_imm,
    ACTIONS(155), 1,
      aux_sym_uint32_token1,
    STATE(11), 1,
      aux_sym_xint_repeat3,
    ACTIONS(150), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [289] = 5,
    ACTIONS(161), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    STATE(15), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(157), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(159), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [313] = 5,
    ACTIONS(169), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    STATE(12), 2,
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
  [337] = 4,
    ACTIONS(175), 1,
      sym__hex_digit_imm,
    ACTIONS(177), 1,
      aux_sym_uint32_token1,
    STATE(19), 1,
      aux_sym_xint_repeat1,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [359] = 5,
    ACTIONS(184), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    STATE(15), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(179), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(181), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [383] = 4,
    ACTIONS(192), 1,
      aux_sym__identifier_start_char_token1,
    STATE(16), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(189), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [405] = 4,
    ACTIONS(197), 1,
      sym__octaldigit_imm,
    ACTIONS(200), 1,
      aux_sym_uint32_token1,
    STATE(17), 1,
      aux_sym_xint_repeat2,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [427] = 4,
    ACTIONS(177), 1,
      aux_sym_uint32_token1,
    ACTIONS(202), 1,
      sym__octaldigit_imm,
    STATE(17), 1,
      aux_sym_xint_repeat2,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [449] = 4,
    ACTIONS(206), 1,
      sym__hex_digit_imm,
    ACTIONS(209), 1,
      aux_sym_uint32_token1,
    STATE(19), 1,
      aux_sym_xint_repeat1,
    ACTIONS(204), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [471] = 4,
    ACTIONS(177), 1,
      aux_sym_uint32_token1,
    ACTIONS(211), 1,
      sym__bitdigit_imm,
    STATE(11), 1,
      aux_sym_xint_repeat3,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_y,
      anon_sym_uy,
      anon_sym_s,
      anon_sym_us,
      anon_sym_l,
      anon_sym_n,
      anon_sym_un,
      anon_sym_L,
      aux_sym_uint64_token1,
  [493] = 13,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_y,
    ACTIONS(217), 1,
      anon_sym_uy,
    ACTIONS(219), 1,
      anon_sym_s,
    ACTIONS(221), 1,
      anon_sym_us,
    ACTIONS(223), 1,
      anon_sym_l,
    ACTIONS(225), 1,
      aux_sym_uint32_token1,
    ACTIONS(227), 1,
      anon_sym_n,
    ACTIONS(229), 1,
      anon_sym_un,
    ACTIONS(231), 1,
      anon_sym_L,
    ACTIONS(233), 1,
      aux_sym_uint64_token1,
    ACTIONS(235), 1,
      aux_sym_bignum_token1,
    ACTIONS(237), 1,
      aux_sym_decimal_token1,
  [533] = 4,
    ACTIONS(241), 1,
      aux_sym__identifier_start_char_token1,
    STATE(23), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(239), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [555] = 4,
    ACTIONS(245), 1,
      aux_sym__identifier_start_char_token1,
    STATE(16), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DOT,
    ACTIONS(243), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [577] = 4,
    ACTIONS(249), 1,
      anon_sym_DQUOTE2,
    ACTIONS(251), 1,
      anon_sym_DQUOTEB,
    STATE(25), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(247), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [597] = 3,
    ACTIONS(256), 2,
      anon_sym_DQUOTE2,
      anon_sym_DQUOTEB,
    STATE(25), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(253), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [615] = 11,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_y,
    ACTIONS(217), 1,
      anon_sym_uy,
    ACTIONS(219), 1,
      anon_sym_s,
    ACTIONS(221), 1,
      anon_sym_us,
    ACTIONS(223), 1,
      anon_sym_l,
    ACTIONS(225), 1,
      aux_sym_uint32_token1,
    ACTIONS(227), 1,
      anon_sym_n,
    ACTIONS(229), 1,
      anon_sym_un,
    ACTIONS(231), 1,
      anon_sym_L,
    ACTIONS(233), 1,
      aux_sym_uint64_token1,
  [649] = 4,
    ACTIONS(260), 1,
      anon_sym_DQUOTE2,
    ACTIONS(262), 1,
      anon_sym_DQUOTEB,
    STATE(24), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(258), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [669] = 2,
    ACTIONS(266), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(264), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [684] = 3,
    ACTIONS(249), 1,
      anon_sym_DQUOTE2,
    STATE(32), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(268), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [701] = 2,
    ACTIONS(272), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(270), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [716] = 3,
    ACTIONS(260), 1,
      anon_sym_DQUOTE2,
    STATE(29), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(274), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [733] = 3,
    ACTIONS(256), 1,
      anon_sym_DQUOTE2,
    STATE(32), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(276), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [750] = 2,
    ACTIONS(281), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(279), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [765] = 2,
    ACTIONS(266), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(264), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [779] = 2,
    ACTIONS(281), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(279), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [793] = 2,
    ACTIONS(272), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTE2,
    ACTIONS(270), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
  [807] = 5,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      anon_sym_BSLASHu,
    ACTIONS(289), 1,
      anon_sym_BSLASH,
    ACTIONS(285), 2,
      sym__escape_char,
      sym__simple_char_char,
    STATE(74), 3,
      sym__unicodegraph_short,
      sym__trigraph,
      sym__char_char,
  [826] = 8,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym__letter_char,
    ACTIONS(295), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(297), 1,
      sym__escaped_ident_text,
    ACTIONS(299), 1,
      anon_sym__,
    STATE(13), 1,
      sym__identifier_start_char,
    STATE(103), 1,
      sym_ident,
    STATE(121), 1,
      sym__ident_text,
  [851] = 5,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__identifier_start_char,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(64), 2,
      sym__if_expression_text,
      sym__ident_text,
  [869] = 5,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__identifier_start_char,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(63), 2,
      sym__if_expression_text,
      sym__ident_text,
  [887] = 5,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(65), 2,
      sym__if_expression_text,
      sym__ident_text,
  [905] = 5,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(72), 2,
      sym__if_expression_text,
      sym__ident_text,
  [923] = 5,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__identifier_start_char,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(62), 2,
      sym__if_expression_text,
      sym__ident_text,
  [941] = 5,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(59), 2,
      sym__if_expression_text,
      sym__ident_text,
  [959] = 5,
    ACTIONS(305), 1,
      anon_sym_BANG,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(66), 2,
      sym__if_expression_text,
      sym__ident_text,
  [977] = 6,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym__escaped_ident_text,
    STATE(13), 1,
      sym__identifier_start_char,
    STATE(77), 1,
      sym_ident,
    STATE(121), 1,
      sym__ident_text,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [997] = 5,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__identifier_start_char,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(67), 2,
      sym__if_expression_text,
      sym__ident_text,
  [1015] = 7,
    ACTIONS(293), 1,
      sym__letter_char,
    ACTIONS(295), 1,
      aux_sym__identifier_start_char_token1,
    ACTIONS(297), 1,
      sym__escaped_ident_text,
    ACTIONS(309), 1,
      anon_sym__,
    STATE(13), 1,
      sym__identifier_start_char,
    STATE(103), 1,
      sym_ident,
    STATE(121), 1,
      sym__ident_text,
  [1037] = 5,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym__identifier_start_char,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(69), 2,
      sym__if_expression_text,
      sym__ident_text,
  [1055] = 5,
    ACTIONS(297), 1,
      sym__escaped_ident_text,
    STATE(13), 1,
      sym__identifier_start_char,
    STATE(103), 1,
      sym_ident,
    STATE(121), 1,
      sym__ident_text,
    ACTIONS(293), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [1072] = 5,
    ACTIONS(17), 1,
      sym__escaped_ident_text,
    STATE(22), 1,
      sym__identifier_start_char,
    STATE(73), 1,
      sym_ident,
    STATE(85), 1,
      sym__ident_text,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
  [1089] = 4,
    ACTIONS(311), 1,
      sym__escape_char,
    ACTIONS(313), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(315), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(55), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1103] = 4,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_AT_DQUOTE,
    STATE(92), 2,
      sym_string,
      sym_verbatim_string,
  [1117] = 3,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(54), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1129] = 4,
    ACTIONS(328), 1,
      sym__escape_char,
    ACTIONS(331), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(334), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(55), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1143] = 3,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(58), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1155] = 4,
    ACTIONS(340), 1,
      sym__escape_char,
    ACTIONS(342), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(52), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [1169] = 3,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(54), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [1181] = 1,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1187] = 1,
    ACTIONS(350), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1193] = 3,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_long_ident_repeat1,
  [1203] = 1,
    ACTIONS(350), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1209] = 2,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(350), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1217] = 3,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(358), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [1227] = 2,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
  [1235] = 1,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1241] = 3,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(358), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [1251] = 3,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_long_ident_repeat1,
  [1261] = 1,
    ACTIONS(364), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [1267] = 1,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1273] = 3,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_long_ident_repeat1,
  [1283] = 3,
    ACTIONS(362), 1,
      anon_sym_AMP_AMP,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      anon_sym_PIPE_PIPE,
  [1293] = 1,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [1298] = 2,
    ACTIONS(377), 1,
      anon_sym_SQUOTE2,
    ACTIONS(379), 1,
      anon_sym_SQUOTEB,
  [1305] = 2,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1312] = 2,
    ACTIONS(264), 1,
      anon_sym_SQUOTE2,
    ACTIONS(266), 1,
      anon_sym_SQUOTEB,
  [1319] = 2,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1326] = 2,
    ACTIONS(386), 1,
      aux_sym_int_token1,
    STATE(53), 1,
      sym_int,
  [1333] = 2,
    ACTIONS(388), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_active_pattern_op_name_repeat1,
  [1340] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      aux_sym_decimal_token1,
  [1347] = 2,
    ACTIONS(390), 1,
      sym__bitdigit_imm,
    STATE(20), 1,
      aux_sym_xint_repeat3,
  [1354] = 2,
    ACTIONS(392), 1,
      sym__octaldigit_imm,
    STATE(18), 1,
      aux_sym_xint_repeat2,
  [1361] = 2,
    ACTIONS(394), 1,
      sym__hex_digit_imm,
    STATE(14), 1,
      aux_sym_xint_repeat1,
  [1368] = 2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE2,
    ACTIONS(281), 1,
      anon_sym_SQUOTEB,
  [1375] = 1,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
  [1380] = 1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [1384] = 1,
    ACTIONS(400), 1,
      sym__hex_digit_imm,
  [1388] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1392] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1396] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1400] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1404] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [1408] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [1412] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [1416] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [1420] = 1,
    ACTIONS(416), 1,
      sym__digit_char_imm,
  [1424] = 1,
    ACTIONS(418), 1,
      sym__hex_digit_imm,
  [1428] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [1432] = 1,
    ACTIONS(422), 1,
      sym__hex_digit_imm,
  [1436] = 1,
    ACTIONS(424), 1,
      sym__digit_char_imm,
  [1440] = 1,
    ACTIONS(426), 1,
      sym__hex_digit_imm,
  [1444] = 1,
    ACTIONS(428), 1,
      anon_sym_PIPE,
  [1448] = 1,
    ACTIONS(430), 1,
      anon_sym_PIPE,
  [1452] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [1456] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [1460] = 1,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [1464] = 1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
  [1468] = 1,
    ACTIONS(440), 1,
      sym__hex_digit_imm,
  [1472] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [1476] = 1,
    ACTIONS(444), 1,
      sym__hex_digit_imm,
  [1480] = 1,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
  [1484] = 1,
    ACTIONS(448), 1,
      anon_sym_PIPE,
  [1488] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [1492] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [1496] = 1,
    ACTIONS(454), 1,
      sym__hex_digit_imm,
  [1500] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [1504] = 1,
    ACTIONS(458), 1,
      sym__hex_digit_imm,
  [1508] = 1,
    ACTIONS(460), 1,
      sym__hex_digit_imm,
  [1512] = 1,
    ACTIONS(462), 1,
      sym__hex_digit_imm,
  [1516] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [1520] = 1,
    ACTIONS(396), 1,
      anon_sym_PIPE,
  [1524] = 1,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
  [1528] = 1,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
  [1532] = 1,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [1536] = 1,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
  [1540] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1544] = 1,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
  [1548] = 1,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
  [1552] = 1,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
  [1556] = 1,
    ACTIONS(482), 1,
      sym__hex_digit_imm,
  [1560] = 1,
    ACTIONS(484), 1,
      sym__digit_char_imm,
  [1564] = 1,
    ACTIONS(486), 1,
      sym__hex_digit_imm,
  [1568] = 1,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [1572] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [1576] = 1,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [1580] = 1,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
  [1584] = 1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [1588] = 1,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
  [1592] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1596] = 1,
    ACTIONS(501), 1,
      sym__digit_char_imm,
  [1600] = 1,
    ACTIONS(503), 1,
      sym__hex_digit_imm,
  [1604] = 1,
    ACTIONS(505), 1,
      sym__hex_digit_imm,
  [1608] = 1,
    ACTIONS(507), 1,
      sym__digit_char_imm,
  [1612] = 1,
    ACTIONS(509), 1,
      sym__hex_digit_imm,
  [1616] = 1,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
  [1620] = 1,
    ACTIONS(513), 1,
      sym__digit_char_imm,
  [1624] = 1,
    ACTIONS(515), 1,
      sym__hex_digit_imm,
  [1628] = 1,
    ACTIONS(517), 1,
      sym__hex_digit_imm,
  [1632] = 1,
    ACTIONS(519), 1,
      sym__digit_char_imm,
  [1636] = 1,
    ACTIONS(521), 1,
      sym__hex_digit_imm,
  [1640] = 1,
    ACTIONS(523), 1,
      sym__digit_char_imm,
  [1644] = 1,
    ACTIONS(525), 1,
      sym__hex_digit_imm,
  [1648] = 1,
    ACTIONS(527), 1,
      sym__hex_digit_imm,
  [1652] = 1,
    ACTIONS(529), 1,
      sym__digit_char_imm,
  [1656] = 1,
    ACTIONS(531), 1,
      sym__hex_digit_imm,
  [1660] = 1,
    ACTIONS(533), 1,
      sym__hex_digit_imm,
  [1664] = 1,
    ACTIONS(535), 1,
      sym__hex_digit_imm,
  [1668] = 1,
    ACTIONS(537), 1,
      sym__hex_digit_imm,
  [1672] = 1,
    ACTIONS(539), 1,
      sym__hex_digit_imm,
  [1676] = 1,
    ACTIONS(541), 1,
      sym__hex_digit_imm,
  [1680] = 1,
    ACTIONS(543), 1,
      sym__hex_digit_imm,
  [1684] = 1,
    ACTIONS(545), 1,
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
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 383,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 449,
  [SMALL_STATE(20)] = 471,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 533,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 577,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 615,
  [SMALL_STATE(27)] = 649,
  [SMALL_STATE(28)] = 669,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 701,
  [SMALL_STATE(31)] = 716,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 750,
  [SMALL_STATE(34)] = 765,
  [SMALL_STATE(35)] = 779,
  [SMALL_STATE(36)] = 793,
  [SMALL_STATE(37)] = 807,
  [SMALL_STATE(38)] = 826,
  [SMALL_STATE(39)] = 851,
  [SMALL_STATE(40)] = 869,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 923,
  [SMALL_STATE(44)] = 941,
  [SMALL_STATE(45)] = 959,
  [SMALL_STATE(46)] = 977,
  [SMALL_STATE(47)] = 997,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1037,
  [SMALL_STATE(50)] = 1055,
  [SMALL_STATE(51)] = 1072,
  [SMALL_STATE(52)] = 1089,
  [SMALL_STATE(53)] = 1103,
  [SMALL_STATE(54)] = 1117,
  [SMALL_STATE(55)] = 1129,
  [SMALL_STATE(56)] = 1143,
  [SMALL_STATE(57)] = 1155,
  [SMALL_STATE(58)] = 1169,
  [SMALL_STATE(59)] = 1181,
  [SMALL_STATE(60)] = 1187,
  [SMALL_STATE(61)] = 1193,
  [SMALL_STATE(62)] = 1203,
  [SMALL_STATE(63)] = 1209,
  [SMALL_STATE(64)] = 1217,
  [SMALL_STATE(65)] = 1227,
  [SMALL_STATE(66)] = 1235,
  [SMALL_STATE(67)] = 1241,
  [SMALL_STATE(68)] = 1251,
  [SMALL_STATE(69)] = 1261,
  [SMALL_STATE(70)] = 1267,
  [SMALL_STATE(71)] = 1273,
  [SMALL_STATE(72)] = 1283,
  [SMALL_STATE(73)] = 1293,
  [SMALL_STATE(74)] = 1298,
  [SMALL_STATE(75)] = 1305,
  [SMALL_STATE(76)] = 1312,
  [SMALL_STATE(77)] = 1319,
  [SMALL_STATE(78)] = 1326,
  [SMALL_STATE(79)] = 1333,
  [SMALL_STATE(80)] = 1340,
  [SMALL_STATE(81)] = 1347,
  [SMALL_STATE(82)] = 1354,
  [SMALL_STATE(83)] = 1361,
  [SMALL_STATE(84)] = 1368,
  [SMALL_STATE(85)] = 1375,
  [SMALL_STATE(86)] = 1380,
  [SMALL_STATE(87)] = 1384,
  [SMALL_STATE(88)] = 1388,
  [SMALL_STATE(89)] = 1392,
  [SMALL_STATE(90)] = 1396,
  [SMALL_STATE(91)] = 1400,
  [SMALL_STATE(92)] = 1404,
  [SMALL_STATE(93)] = 1408,
  [SMALL_STATE(94)] = 1412,
  [SMALL_STATE(95)] = 1416,
  [SMALL_STATE(96)] = 1420,
  [SMALL_STATE(97)] = 1424,
  [SMALL_STATE(98)] = 1428,
  [SMALL_STATE(99)] = 1432,
  [SMALL_STATE(100)] = 1436,
  [SMALL_STATE(101)] = 1440,
  [SMALL_STATE(102)] = 1444,
  [SMALL_STATE(103)] = 1448,
  [SMALL_STATE(104)] = 1452,
  [SMALL_STATE(105)] = 1456,
  [SMALL_STATE(106)] = 1460,
  [SMALL_STATE(107)] = 1464,
  [SMALL_STATE(108)] = 1468,
  [SMALL_STATE(109)] = 1472,
  [SMALL_STATE(110)] = 1476,
  [SMALL_STATE(111)] = 1480,
  [SMALL_STATE(112)] = 1484,
  [SMALL_STATE(113)] = 1488,
  [SMALL_STATE(114)] = 1492,
  [SMALL_STATE(115)] = 1496,
  [SMALL_STATE(116)] = 1500,
  [SMALL_STATE(117)] = 1504,
  [SMALL_STATE(118)] = 1508,
  [SMALL_STATE(119)] = 1512,
  [SMALL_STATE(120)] = 1516,
  [SMALL_STATE(121)] = 1520,
  [SMALL_STATE(122)] = 1524,
  [SMALL_STATE(123)] = 1528,
  [SMALL_STATE(124)] = 1532,
  [SMALL_STATE(125)] = 1536,
  [SMALL_STATE(126)] = 1540,
  [SMALL_STATE(127)] = 1544,
  [SMALL_STATE(128)] = 1548,
  [SMALL_STATE(129)] = 1552,
  [SMALL_STATE(130)] = 1556,
  [SMALL_STATE(131)] = 1560,
  [SMALL_STATE(132)] = 1564,
  [SMALL_STATE(133)] = 1568,
  [SMALL_STATE(134)] = 1572,
  [SMALL_STATE(135)] = 1576,
  [SMALL_STATE(136)] = 1580,
  [SMALL_STATE(137)] = 1584,
  [SMALL_STATE(138)] = 1588,
  [SMALL_STATE(139)] = 1592,
  [SMALL_STATE(140)] = 1596,
  [SMALL_STATE(141)] = 1600,
  [SMALL_STATE(142)] = 1604,
  [SMALL_STATE(143)] = 1608,
  [SMALL_STATE(144)] = 1612,
  [SMALL_STATE(145)] = 1616,
  [SMALL_STATE(146)] = 1620,
  [SMALL_STATE(147)] = 1624,
  [SMALL_STATE(148)] = 1628,
  [SMALL_STATE(149)] = 1632,
  [SMALL_STATE(150)] = 1636,
  [SMALL_STATE(151)] = 1640,
  [SMALL_STATE(152)] = 1644,
  [SMALL_STATE(153)] = 1648,
  [SMALL_STATE(154)] = 1652,
  [SMALL_STATE(155)] = 1656,
  [SMALL_STATE(156)] = 1660,
  [SMALL_STATE(157)] = 1664,
  [SMALL_STATE(158)] = 1668,
  [SMALL_STATE(159)] = 1672,
  [SMALL_STATE(160)] = 1676,
  [SMALL_STATE(161)] = 1680,
  [SMALL_STATE(162)] = 1684,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_int_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(156),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(130),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(151),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(10),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(10),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(158),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(162),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(154),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2), SHIFT_REPEAT(11),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat3, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_text, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_text, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xint, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xint, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(15),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(15),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(16),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2), SHIFT_REPEAT(17),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat2, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2), SHIFT_REPEAT(19),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(25),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_short, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_short, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_long, 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_long, 9),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(32),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trigraph, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigraph, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_directive, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2), SHIFT_REPEAT(54),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(55),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(55),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_ident, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_long_ident_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_long_ident_repeat1, 2), SHIFT_REPEAT(51),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_active_pattern_op_name_repeat1, 2), SHIFT_REPEAT(50),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_directive, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytechar, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bignum, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_active_pattern_op_name_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint64, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int64, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unativeint, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nativeint, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint32, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int32, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint16, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_pattern_op_name, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int16, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sbyte, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym__quote_op_right, 1),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym__quote_op_left, 1),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym_symbolic_op, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_directive, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
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
