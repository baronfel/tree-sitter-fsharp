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
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 247
#define ALIAS_COUNT 0
#define TOKEN_COUNT 194
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  anon_sym_LPAREN_STAR = 3,
  anon_sym_STAR_RPAREN = 4,
  sym_comment = 5,
  anon_sym_POUNDif = 6,
  sym_else_directive = 7,
  sym_endif_directive = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AMP_AMP = 10,
  anon_sym_BANG = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym__digit_char_imm = 14,
  sym__letter_char = 15,
  sym__connecting_char = 16,
  sym__combining_char = 17,
  sym__formatting_char = 18,
  aux_sym__identifier_start_char_token1 = 19,
  aux_sym__identifier_char_token1 = 20,
  sym__escaped_ident_text = 21,
  anon_sym_abstract = 22,
  anon_sym_and = 23,
  anon_sym_as = 24,
  anon_sym_assert = 25,
  anon_sym_base = 26,
  anon_sym_begin = 27,
  anon_sym_class = 28,
  anon_sym_default = 29,
  anon_sym_delegate = 30,
  anon_sym_do = 31,
  anon_sym_done = 32,
  anon_sym_downcast = 33,
  anon_sym_downto = 34,
  anon_sym_elif = 35,
  anon_sym_else = 36,
  anon_sym_end = 37,
  anon_sym_exception = 38,
  anon_sym_extern = 39,
  anon_sym_false = 40,
  anon_sym_finally = 41,
  anon_sym_for = 42,
  anon_sym_fun = 43,
  anon_sym_function = 44,
  anon_sym_global = 45,
  anon_sym_if = 46,
  anon_sym_in = 47,
  anon_sym_inherit = 48,
  anon_sym_inline = 49,
  anon_sym_interface = 50,
  anon_sym_internal = 51,
  anon_sym_lazy = 52,
  anon_sym_let = 53,
  anon_sym_match = 54,
  anon_sym_member = 55,
  anon_sym_module = 56,
  anon_sym_mutable = 57,
  anon_sym_namespace = 58,
  anon_sym_new = 59,
  anon_sym_null = 60,
  anon_sym_of = 61,
  anon_sym_open = 62,
  anon_sym_or = 63,
  anon_sym_override = 64,
  anon_sym_private = 65,
  anon_sym_public = 66,
  anon_sym_rec = 67,
  anon_sym_return = 68,
  anon_sym_sig = 69,
  anon_sym_static = 70,
  anon_sym_struct = 71,
  anon_sym_then = 72,
  anon_sym_to = 73,
  anon_sym_true = 74,
  anon_sym_try = 75,
  anon_sym_type = 76,
  anon_sym_upcast = 77,
  anon_sym_use = 78,
  anon_sym_val = 79,
  anon_sym_void = 80,
  anon_sym_when = 81,
  anon_sym_while = 82,
  anon_sym_with = 83,
  anon_sym_yield = 84,
  anon_sym_atomic = 85,
  anon_sym_break = 86,
  anon_sym_checked = 87,
  anon_sym_component = 88,
  anon_sym_const = 89,
  anon_sym_constraint = 90,
  anon_sym_constructor = 91,
  anon_sym_continue = 92,
  anon_sym_eager = 93,
  anon_sym_fixed = 94,
  anon_sym_fori = 95,
  anon_sym_functor = 96,
  anon_sym_include = 97,
  anon_sym_measure = 98,
  anon_sym_method = 99,
  anon_sym_mixin = 100,
  anon_sym_object = 101,
  anon_sym_parallel = 102,
  anon_sym_params = 103,
  anon_sym_process = 104,
  anon_sym_protected = 105,
  anon_sym_pure = 106,
  anon_sym_recursive = 107,
  anon_sym_sealed = 108,
  anon_sym_tailcall = 109,
  anon_sym_trait = 110,
  anon_sym_virtual = 111,
  anon_sym_volatile = 112,
  sym__escape_char = 113,
  sym__non_escape_char = 114,
  sym__simple_char_char = 115,
  sym__hex_digit_imm = 116,
  anon_sym_BSLASHu = 117,
  anon_sym_BSLASHU = 118,
  anon_sym_BSLASH = 119,
  sym__simple_string_char = 120,
  anon_sym_BSLASH2 = 121,
  anon_sym_SQUOTE = 122,
  anon_sym_SQUOTE2 = 123,
  anon_sym_DQUOTE = 124,
  anon_sym_DQUOTE2 = 125,
  anon_sym_ = 126,
  anon_sym_AT_DQUOTE = 127,
  anon_sym_SQUOTEB = 128,
  anon_sym_DQUOTEB = 129,
  aux_sym__simple_or_escape_char_token1 = 130,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 131,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 132,
  anon_sym_let_BANG = 133,
  anon_sym_use_BANG = 134,
  anon_sym_do_BANG = 135,
  anon_sym_yield_BANG = 136,
  anon_sym_return_BANG = 137,
  anon_sym_PIPE = 138,
  anon_sym_DASH_GT = 139,
  anon_sym_LT_DASH_DOT = 140,
  anon_sym_COLON = 141,
  anon_sym_LBRACK = 142,
  anon_sym_RBRACK = 143,
  anon_sym_LBRACK_LT = 144,
  anon_sym_GT_RBRACK = 145,
  anon_sym_LBRACK_PIPE = 146,
  anon_sym_PIPE_RBRACK = 147,
  anon_sym_LBRACE = 148,
  anon_sym_RBRACE = 149,
  anon_sym_POUND = 150,
  anon_sym_COLON_QMARK_GT = 151,
  anon_sym_COLON_QMARK = 152,
  anon_sym_COLON_GT = 153,
  anon_sym_DOT_DOT = 154,
  anon_sym_COLON_COLON = 155,
  anon_sym_COLON_EQ = 156,
  anon_sym_SEMI_SEMI = 157,
  anon_sym_SEMI = 158,
  anon_sym_EQ_ = 159,
  anon_sym_QMARK = 160,
  anon_sym_QMARK_QMARK = 161,
  anon_sym_LPAREN_STAR_RPAREN = 162,
  anon_sym_LT_AT = 163,
  anon_sym_AT_GT = 164,
  anon_sym_LT_AT_AT = 165,
  anon_sym_AT_AT_GT = 166,
  anon_sym_TILDE = 167,
  anon_sym_BQUOTE = 168,
  sym__first_op_char = 169,
  anon_sym_QMARK_LT_DASH = 170,
  sym__octaldigit_imm = 171,
  sym__bitdigit_imm = 172,
  aux_sym_int_token1 = 173,
  aux_sym_xint_token1 = 174,
  aux_sym_xint_token2 = 175,
  aux_sym_xint_token3 = 176,
  anon_sym_y = 177,
  anon_sym_uy = 178,
  anon_sym_s = 179,
  anon_sym_us = 180,
  anon_sym_l = 181,
  aux_sym_uint32_token1 = 182,
  anon_sym_n = 183,
  anon_sym_un = 184,
  anon_sym_L = 185,
  aux_sym_uint64_token1 = 186,
  aux_sym_ieee32_token1 = 187,
  aux_sym_bignum_token1 = 188,
  aux_sym_decimal_token1 = 189,
  aux_sym_float_token1 = 190,
  aux_sym_float_token2 = 191,
  aux_sym_float_token3 = 192,
  aux_sym_float_token4 = 193,
  sym_test = 194,
  sym__newline = 195,
  sym_cond_directive = 196,
  sym_if_directive = 197,
  sym__if_expression_text = 198,
  sym__identifier_start_char = 199,
  sym__identifier_char = 200,
  sym__ident_text = 201,
  sym_identifier = 202,
  sym_keyword = 203,
  sym__unicodegraph_short = 204,
  sym__unicodegraph_long = 205,
  sym__trigraph = 206,
  sym__char_char = 207,
  sym__string_char = 208,
  sym_char = 209,
  sym_string = 210,
  sym__verbatim_string_char = 211,
  sym_verbatim_string = 212,
  sym_bytechar = 213,
  sym_bytearray = 214,
  sym_verbatim_bytearray = 215,
  sym__simple_or_escape_char = 216,
  sym_triple_quoted_string = 217,
  sym_symbolic_keyword = 218,
  sym__op_char = 219,
  sym__quote_op_left = 220,
  sym__quote_op_right = 221,
  sym_symbolic_op = 222,
  sym_int = 223,
  sym_xint = 224,
  sym_sbyte = 225,
  sym_byte = 226,
  sym_int16 = 227,
  sym_uint16 = 228,
  sym_int32 = 229,
  sym_uint32 = 230,
  sym_nativeint = 231,
  sym_unativeint = 232,
  sym_int64 = 233,
  sym_uint64 = 234,
  sym_bignum = 235,
  sym_decimal = 236,
  sym_float = 237,
  aux_sym__ident_text_repeat1 = 238,
  aux_sym_string_repeat1 = 239,
  aux_sym_verbatim_string_repeat1 = 240,
  aux_sym_triple_quoted_string_repeat1 = 241,
  aux_sym_symbolic_op_repeat1 = 242,
  aux_sym_int_repeat1 = 243,
  aux_sym_xint_repeat1 = 244,
  aux_sym_xint_repeat2 = 245,
  aux_sym_xint_repeat3 = 246,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
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
  [aux_sym_ieee32_token1] = "ieee32_token1",
  [aux_sym_bignum_token1] = "bignum_token1",
  [aux_sym_decimal_token1] = "decimal_token1",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [sym_test] = "test",
  [sym__newline] = "_newline",
  [sym_cond_directive] = "cond_directive",
  [sym_if_directive] = "if_directive",
  [sym__if_expression_text] = "_if_expression_text",
  [sym__identifier_start_char] = "_identifier_start_char",
  [sym__identifier_char] = "_identifier_char",
  [sym__ident_text] = "_ident_text",
  [sym_identifier] = "identifier",
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
  [sym_float] = "float",
  [aux_sym__ident_text_repeat1] = "_ident_text_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_verbatim_string_repeat1] = "verbatim_string_repeat1",
  [aux_sym_triple_quoted_string_repeat1] = "triple_quoted_string_repeat1",
  [aux_sym_symbolic_op_repeat1] = "symbolic_op_repeat1",
  [aux_sym_int_repeat1] = "int_repeat1",
  [aux_sym_xint_repeat1] = "xint_repeat1",
  [aux_sym_xint_repeat2] = "xint_repeat2",
  [aux_sym_xint_repeat3] = "xint_repeat3",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
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
  [aux_sym_ieee32_token1] = aux_sym_ieee32_token1,
  [aux_sym_bignum_token1] = aux_sym_bignum_token1,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [sym_test] = sym_test,
  [sym__newline] = sym__newline,
  [sym_cond_directive] = sym_cond_directive,
  [sym_if_directive] = sym_if_directive,
  [sym__if_expression_text] = sym__if_expression_text,
  [sym__identifier_start_char] = sym__identifier_start_char,
  [sym__identifier_char] = sym__identifier_char,
  [sym__ident_text] = sym__ident_text,
  [sym_identifier] = sym_identifier,
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
  [sym_float] = sym_float,
  [aux_sym__ident_text_repeat1] = aux_sym__ident_text_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_verbatim_string_repeat1] = aux_sym_verbatim_string_repeat1,
  [aux_sym_triple_quoted_string_repeat1] = aux_sym_triple_quoted_string_repeat1,
  [aux_sym_symbolic_op_repeat1] = aux_sym_symbolic_op_repeat1,
  [aux_sym_int_repeat1] = aux_sym_int_repeat1,
  [aux_sym_xint_repeat1] = aux_sym_xint_repeat1,
  [aux_sym_xint_repeat2] = aux_sym_xint_repeat2,
  [aux_sym_xint_repeat3] = aux_sym_xint_repeat3,
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
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
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
  [aux_sym_ieee32_token1] = {
    .visible = false,
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
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [sym_float] = {
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
      if (eof) ADVANCE(306);
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(507);
      if (lookahead == '+') ADVANCE(542);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(509);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(508);
      if (lookahead == '=') ADVANCE(513);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '@') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(445);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead == 'M') ADVANCE(538);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(450);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(539);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(523);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '|') ADVANCE(473);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '~') ADVANCE(503);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(323);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('A' <= lookahead && lookahead <= 'D') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(445);
      if (('%' <= lookahead && lookahead <= '/') ||
          lookahead == '^') ADVANCE(505);
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(537);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(345);
      if (sym__letter_char_character_set_1(lookahead)) ADVANCE(324);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(347);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(346);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead)) ADVANCE(451);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(451);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '`') ADVANCE(292);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(324);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(509);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '0') ADVANCE(518);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(508);
      if (lookahead == '=') ADVANCE(513);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '@') ADVANCE(506);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(342);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '|') ADVANCE(473);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '~') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= ',') ||
          lookahead == '^') ADVANCE(505);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (sym__letter_char_character_set_3(lookahead)) ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(466);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(464);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(467);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(317);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(475);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(502);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(536);
      END_STATE();
    case 18:
      if (lookahead == '`') ADVANCE(350);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(404);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(409);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(313);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(412);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(383);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'j') ADVANCE(103);
      END_STATE();
    case 158:
      if (lookahead == 'k') ADVANCE(415);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 285:
      if (lookahead == 'w') ADVANCE(388);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(145);
      END_STATE();
    case 287:
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 289:
      if (lookahead == 'z') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == '|') ADVANCE(316);
      END_STATE();
    case 291:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 292:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(3);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(295);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(295);
      if (lookahead == ')') ADVANCE(312);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(295);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 296:
      if (eof) ADVANCE(306);
      if (lookahead == '!') ADVANCE(318);
      if (lookahead == '"') ADVANCE(457);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(507);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead == '.') ADVANCE(509);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(493);
      if (lookahead == '<') ADVANCE(508);
      if (lookahead == '=') ADVANCE(513);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == '?') ADVANCE(496);
      if (lookahead == '@') ADVANCE(506);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(453);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'm') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(342);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '|') ADVANCE(473);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '~') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('%' <= lookahead && lookahead <= '/') ||
          lookahead == '^') ADVANCE(505);
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (sym__letter_char_character_set_4(lookahead)) ADVANCE(324);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(347);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(346);
      END_STATE();
    case 297:
      if (eof) ADVANCE(306);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(456);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '.') ADVANCE(540);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'y') ADVANCE(522);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      if (lookahead == 'G' ||
          lookahead == 'I' ||
          lookahead == 'N' ||
          lookahead == 'Q' ||
          lookahead == 'R' ||
          lookahead == 'Z') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 298:
      if (eof) ADVANCE(306);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(324);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(347);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(346);
      END_STATE();
    case 299:
      if (eof) ADVANCE(306);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(299)
      if (lookahead == 8255 ||
          lookahead == 8256 ||
          lookahead == 8276 ||
          lookahead == 65075 ||
          lookahead == 65076 ||
          (65101 <= lookahead && lookahead <= 65103) ||
          lookahead == 65343) ADVANCE(345);
      if (sym__letter_char_character_set_2(lookahead)) ADVANCE(324);
      if (sym__formatting_char_character_set_1(lookahead)) ADVANCE(347);
      if (sym__combining_char_character_set_1(lookahead)) ADVANCE(346);
      END_STATE();
    case 300:
      if (eof) ADVANCE(306);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '|') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(300)
      END_STATE();
    case 301:
      if (eof) ADVANCE(306);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'y') ADVANCE(522);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(505);
      END_STATE();
    case 302:
      if (eof) ADVANCE(306);
      if (lookahead == '?') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(505);
      END_STATE();
    case 303:
      if (eof) ADVANCE(306);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'y') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(515);
      END_STATE();
    case 304:
      if (eof) ADVANCE(306);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'y') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 305:
      if (eof) ADVANCE(306);
      if (lookahead == '\\') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < 7 || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(444);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(452);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(460);
      if (lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(295);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_else_directive);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_endif_directive);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(309);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(293);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__digit_char_imm);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__letter_char);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__combining_char);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__formatting_char);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '!') ADVANCE(470);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_downcast);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_downto);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!') ADVANCE(468);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_upcast);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '!') ADVANCE(469);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_yield);
      if (lookahead == '!') ADVANCE(471);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_eager);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_fori);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_measure);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_parallel);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_recursive);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_tailcall);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__escape_char);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__non_escape_char);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__simple_char_char);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__hex_digit_imm);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(442);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(442);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (!sym__non_escape_char_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__simple_string_char);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__simple_string_char);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < 7 || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == 'B') ADVANCE(462);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(10);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == 'B') ADVANCE(463);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(460);
      if (lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SQUOTEB);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DQUOTEB);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__simple_or_escape_char_token1);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_let_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_use_BANG);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_do_BANG);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_yield_BANG);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_return_BANG);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ']') ADVANCE(482);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DOT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(490);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead == '?') ADVANCE(487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '|') ADVANCE(481);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LBRACK_LT);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_GT_RBRACK);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK_GT);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      if (lookahead == '>') ADVANCE(486);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(492);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_EQ_);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '?') ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(295);
      if (lookahead == '*') ADVANCE(294);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      if (lookahead == '@') ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_AT_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LT_AT_AT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_AT_AT_GT);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(4);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__first_op_char);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '"') ADVANCE(461);
      if (lookahead == '>') ADVANCE(500);
      if (lookahead == '@') ADVANCE(16);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == ')') ADVANCE(310);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(499);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '.') ADVANCE(489);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '/') ADVANCE(311);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '>') ADVANCE(474);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == ']') ADVANCE(480);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__first_op_char);
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_QMARK_LT_DASH);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__octaldigit_imm);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__bitdigit_imm);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(521);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_xint_token1);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_xint_token2);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_xint_token3);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_uy);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_uint32_token1);
      if (lookahead == 'L') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(524);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_un);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_uint64_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_bignum_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '>') ADVANCE(474);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 297},
  [3] = {.lex_state = 297},
  [4] = {.lex_state = 297},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 297},
  [9] = {.lex_state = 301},
  [10] = {.lex_state = 304},
  [11] = {.lex_state = 304},
  [12] = {.lex_state = 303},
  [13] = {.lex_state = 301},
  [14] = {.lex_state = 303},
  [15] = {.lex_state = 298},
  [16] = {.lex_state = 298},
  [17] = {.lex_state = 298},
  [18] = {.lex_state = 298},
  [19] = {.lex_state = 298},
  [20] = {.lex_state = 298},
  [21] = {.lex_state = 460},
  [22] = {.lex_state = 460},
  [23] = {.lex_state = 460},
  [24] = {.lex_state = 297},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 305},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 301},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 301},
  [42] = {.lex_state = 301},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 297},
  [45] = {.lex_state = 297},
  [46] = {.lex_state = 297},
  [47] = {.lex_state = 297},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 297},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 297},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 297},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 297},
  [59] = {.lex_state = 297},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 297},
  [62] = {.lex_state = 297},
  [63] = {.lex_state = 304},
  [64] = {.lex_state = 303},
  [65] = {.lex_state = 301},
  [66] = {.lex_state = 297},
  [67] = {.lex_state = 297},
  [68] = {.lex_state = 297},
  [69] = {.lex_state = 304},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 304},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 297},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 304},
  [91] = {.lex_state = 297},
  [92] = {.lex_state = 304},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 304},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 304},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 304},
  [101] = {.lex_state = 304},
  [102] = {.lex_state = 304},
  [103] = {.lex_state = 304},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 304},
  [109] = {.lex_state = 304},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 297},
  [119] = {.lex_state = 304},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 297},
  [122] = {.lex_state = 304},
  [123] = {.lex_state = 297},
  [124] = {.lex_state = 304},
  [125] = {.lex_state = 304},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
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
    [anon_sym_lazy] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
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
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
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
    [anon_sym_yield] = ACTIONS(1),
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
    [anon_sym_sealed] = ACTIONS(1),
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
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_let_BANG] = ACTIONS(1),
    [anon_sym_use_BANG] = ACTIONS(1),
    [anon_sym_yield_BANG] = ACTIONS(1),
    [anon_sym_return_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LT] = ACTIONS(1),
    [anon_sym_GT_RBRACK] = ACTIONS(1),
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
    [anon_sym_EQ_] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
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
    [aux_sym_ieee32_token1] = ACTIONS(1),
    [aux_sym_bignum_token1] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_test] = STATE(110),
    [sym_cond_directive] = STATE(79),
    [sym_if_directive] = STATE(120),
    [sym__identifier_start_char] = STATE(19),
    [sym__ident_text] = STATE(116),
    [sym_identifier] = STATE(79),
    [sym_keyword] = STATE(79),
    [sym_char] = STATE(79),
    [sym_string] = STATE(79),
    [sym_verbatim_string] = STATE(79),
    [sym_bytechar] = STATE(79),
    [sym_bytearray] = STATE(79),
    [sym_verbatim_bytearray] = STATE(79),
    [sym_triple_quoted_string] = STATE(79),
    [sym_symbolic_keyword] = STATE(79),
    [sym__quote_op_left] = STATE(111),
    [sym__quote_op_right] = STATE(111),
    [sym_symbolic_op] = STATE(79),
    [sym_int] = STATE(8),
    [sym_xint] = STATE(24),
    [sym_sbyte] = STATE(79),
    [sym_byte] = STATE(79),
    [sym_int16] = STATE(79),
    [sym_uint16] = STATE(79),
    [sym_int32] = STATE(79),
    [sym_uint32] = STATE(79),
    [sym_nativeint] = STATE(79),
    [sym_unativeint] = STATE(79),
    [sym_int64] = STATE(79),
    [sym_uint64] = STATE(79),
    [sym_bignum] = STATE(79),
    [sym_decimal] = STATE(79),
    [sym_float] = STATE(66),
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
    [anon_sym_PIPE] = ACTIONS(9),
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
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(9),
    [anon_sym_LT_AT] = ACTIONS(33),
    [anon_sym_AT_GT] = ACTIONS(35),
    [anon_sym_LT_AT_AT] = ACTIONS(37),
    [anon_sym_AT_AT_GT] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(9),
    [sym__first_op_char] = ACTIONS(39),
    [anon_sym_QMARK_LT_DASH] = ACTIONS(41),
    [aux_sym_int_token1] = ACTIONS(43),
    [aux_sym_xint_token1] = ACTIONS(45),
    [aux_sym_xint_token2] = ACTIONS(47),
    [aux_sym_xint_token3] = ACTIONS(49),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(53), 1,
      sym__digit_char_imm,
    ACTIONS(56), 1,
      aux_sym_uint32_token1,
    STATE(2), 1,
      aux_sym_int_repeat1,
    ACTIONS(51), 14,
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
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      aux_sym_float_token2,
  [26] = 4,
    ACTIONS(60), 1,
      sym__digit_char_imm,
    ACTIONS(62), 1,
      aux_sym_uint32_token1,
    STATE(2), 1,
      aux_sym_int_repeat1,
    ACTIONS(58), 14,
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
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      aux_sym_float_token2,
  [52] = 4,
    ACTIONS(66), 1,
      sym__digit_char_imm,
    ACTIONS(68), 1,
      aux_sym_uint32_token1,
    STATE(3), 1,
      aux_sym_int_repeat1,
    ACTIONS(64), 14,
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
      aux_sym_bignum_token1,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      aux_sym_float_token2,
  [78] = 8,
    ACTIONS(73), 1,
      sym__escape_char,
    ACTIONS(76), 1,
      anon_sym_BSLASHu,
    ACTIONS(79), 1,
      anon_sym_BSLASHU,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      anon_sym_DQUOTE2,
    ACTIONS(87), 1,
      anon_sym_DQUOTEB,
    ACTIONS(70), 4,
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
    ACTIONS(91), 1,
      sym__escape_char,
    ACTIONS(93), 1,
      anon_sym_BSLASHu,
    ACTIONS(95), 1,
      anon_sym_BSLASHU,
    ACTIONS(97), 1,
      anon_sym_BSLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE2,
    ACTIONS(101), 1,
      anon_sym_DQUOTEB,
    ACTIONS(89), 4,
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
  [144] = 8,
    ACTIONS(93), 1,
      anon_sym_BSLASHu,
    ACTIONS(95), 1,
      anon_sym_BSLASHU,
    ACTIONS(97), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym__escape_char,
    ACTIONS(107), 1,
      anon_sym_DQUOTE2,
    ACTIONS(109), 1,
      anon_sym_DQUOTEB,
    ACTIONS(103), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(6), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [177] = 15,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_y,
    ACTIONS(115), 1,
      anon_sym_uy,
    ACTIONS(117), 1,
      anon_sym_s,
    ACTIONS(119), 1,
      anon_sym_us,
    ACTIONS(121), 1,
      anon_sym_l,
    ACTIONS(123), 1,
      aux_sym_uint32_token1,
    ACTIONS(125), 1,
      anon_sym_n,
    ACTIONS(127), 1,
      anon_sym_un,
    ACTIONS(129), 1,
      anon_sym_L,
    ACTIONS(131), 1,
      aux_sym_uint64_token1,
    ACTIONS(133), 1,
      aux_sym_bignum_token1,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      aux_sym_float_token1,
    ACTIONS(139), 1,
      aux_sym_float_token2,
  [223] = 4,
    ACTIONS(143), 1,
      sym__bitdigit_imm,
    ACTIONS(145), 1,
      aux_sym_uint32_token1,
    STATE(13), 1,
      aux_sym_xint_repeat3,
    ACTIONS(141), 10,
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
  [245] = 4,
    ACTIONS(149), 1,
      sym__hex_digit_imm,
    ACTIONS(152), 1,
      aux_sym_uint32_token1,
    STATE(10), 1,
      aux_sym_xint_repeat1,
    ACTIONS(147), 10,
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
  [267] = 4,
    ACTIONS(145), 1,
      aux_sym_uint32_token1,
    ACTIONS(154), 1,
      sym__hex_digit_imm,
    STATE(10), 1,
      aux_sym_xint_repeat1,
    ACTIONS(141), 10,
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
  [289] = 4,
    ACTIONS(158), 1,
      sym__octaldigit_imm,
    ACTIONS(161), 1,
      aux_sym_uint32_token1,
    STATE(12), 1,
      aux_sym_xint_repeat2,
    ACTIONS(156), 10,
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
  [311] = 4,
    ACTIONS(165), 1,
      sym__bitdigit_imm,
    ACTIONS(168), 1,
      aux_sym_uint32_token1,
    STATE(13), 1,
      aux_sym_xint_repeat3,
    ACTIONS(163), 10,
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
  [333] = 4,
    ACTIONS(145), 1,
      aux_sym_uint32_token1,
    ACTIONS(170), 1,
      sym__octaldigit_imm,
    STATE(12), 1,
      aux_sym_xint_repeat2,
    ACTIONS(141), 10,
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
  [355] = 4,
    ACTIONS(177), 1,
      aux_sym__identifier_start_char_token1,
    STATE(15), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(172), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(174), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [376] = 4,
    ACTIONS(184), 1,
      aux_sym__identifier_start_char_token1,
    STATE(18), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(182), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [397] = 4,
    ACTIONS(188), 1,
      aux_sym__identifier_start_char_token1,
    STATE(15), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(180), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(186), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [418] = 4,
    ACTIONS(193), 1,
      aux_sym__identifier_start_char_token1,
    STATE(18), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(190), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [439] = 4,
    ACTIONS(200), 1,
      aux_sym__identifier_start_char_token1,
    STATE(16), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(198), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [460] = 4,
    ACTIONS(204), 1,
      aux_sym__identifier_start_char_token1,
    STATE(17), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(196), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
    ACTIONS(202), 6,
      sym__digit_char_imm,
      sym__letter_char,
      sym__connecting_char,
      sym__combining_char,
      sym__formatting_char,
      aux_sym__identifier_char_token1,
  [481] = 3,
    ACTIONS(209), 2,
      anon_sym_DQUOTE2,
      anon_sym_DQUOTEB,
    STATE(21), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(206), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [499] = 4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE2,
    ACTIONS(215), 1,
      anon_sym_DQUOTEB,
    STATE(23), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(211), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [519] = 4,
    ACTIONS(219), 1,
      anon_sym_DQUOTE2,
    ACTIONS(221), 1,
      anon_sym_DQUOTEB,
    STATE(21), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(217), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH2,
      anon_sym_,
  [539] = 11,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_y,
    ACTIONS(115), 1,
      anon_sym_uy,
    ACTIONS(117), 1,
      anon_sym_s,
    ACTIONS(119), 1,
      anon_sym_us,
    ACTIONS(121), 1,
      anon_sym_l,
    ACTIONS(123), 1,
      aux_sym_uint32_token1,
    ACTIONS(125), 1,
      anon_sym_n,
    ACTIONS(127), 1,
      anon_sym_un,
    ACTIONS(129), 1,
      anon_sym_L,
    ACTIONS(131), 1,
      aux_sym_uint64_token1,
  [573] = 2,
    ACTIONS(225), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(223), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [588] = 2,
    ACTIONS(229), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(227), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [603] = 2,
    ACTIONS(233), 4,
      sym__escape_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_DQUOTEB,
    ACTIONS(231), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      anon_sym_BSLASH,
      sym__simple_string_char,
      anon_sym_DQUOTE2,
  [618] = 5,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_BSLASHu,
    ACTIONS(241), 1,
      anon_sym_BSLASH,
    ACTIONS(237), 2,
      sym__escape_char,
      sym__simple_char_char,
    STATE(59), 3,
      sym__unicodegraph_short,
      sym__trigraph,
      sym__char_char,
  [637] = 5,
    ACTIONS(243), 1,
      anon_sym_BANG,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(247), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(46), 2,
      sym__if_expression_text,
      sym__ident_text,
  [655] = 5,
    ACTIONS(243), 1,
      anon_sym_BANG,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(247), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(55), 2,
      sym__if_expression_text,
      sym__ident_text,
  [673] = 5,
    ACTIONS(249), 1,
      anon_sym_BANG,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(52), 2,
      sym__if_expression_text,
      sym__ident_text,
  [691] = 5,
    ACTIONS(249), 1,
      anon_sym_BANG,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(51), 2,
      sym__if_expression_text,
      sym__ident_text,
  [709] = 5,
    ACTIONS(243), 1,
      anon_sym_BANG,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(247), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(47), 2,
      sym__if_expression_text,
      sym__ident_text,
  [727] = 5,
    ACTIONS(243), 1,
      anon_sym_BANG,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(247), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(44), 2,
      sym__if_expression_text,
      sym__ident_text,
  [745] = 5,
    ACTIONS(243), 1,
      anon_sym_BANG,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__identifier_start_char,
    ACTIONS(247), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(48), 2,
      sym__if_expression_text,
      sym__ident_text,
  [763] = 5,
    ACTIONS(249), 1,
      anon_sym_BANG,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(49), 2,
      sym__if_expression_text,
      sym__ident_text,
  [781] = 5,
    ACTIONS(249), 1,
      anon_sym_BANG,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__identifier_start_char,
    ACTIONS(15), 2,
      sym__letter_char,
      aux_sym__identifier_start_char_token1,
    STATE(45), 2,
      sym__if_expression_text,
      sym__ident_text,
  [799] = 4,
    ACTIONS(253), 1,
      sym__escape_char,
    ACTIONS(255), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(257), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(40), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [813] = 3,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(41), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [825] = 4,
    ACTIONS(263), 1,
      sym__escape_char,
    ACTIONS(266), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(269), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(40), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [839] = 3,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(41), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [851] = 3,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 2,
      anon_sym_QMARK,
      sym__first_op_char,
    STATE(39), 2,
      sym__op_char,
      aux_sym_symbolic_op_repeat1,
  [863] = 4,
    ACTIONS(280), 1,
      sym__escape_char,
    ACTIONS(282), 1,
      aux_sym__simple_or_escape_char_token1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(38), 2,
      sym__simple_or_escape_char,
      aux_sym_triple_quoted_string_repeat1,
  [877] = 3,
    ACTIONS(286), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(288), 1,
      anon_sym_AMP_AMP,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [887] = 3,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
  [897] = 1,
    ACTIONS(298), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [903] = 1,
    ACTIONS(300), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [909] = 3,
    ACTIONS(286), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(288), 1,
      anon_sym_AMP_AMP,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [919] = 1,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [925] = 2,
    ACTIONS(306), 1,
      aux_sym_float_token2,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_decimal_token1,
  [933] = 1,
    ACTIONS(298), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [939] = 2,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
  [947] = 1,
    ACTIONS(298), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [953] = 1,
    ACTIONS(298), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
  [959] = 2,
    ACTIONS(288), 1,
      anon_sym_AMP_AMP,
    ACTIONS(298), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [967] = 1,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      aux_sym_decimal_token1,
  [972] = 2,
    ACTIONS(310), 1,
      aux_sym_float_token3,
    ACTIONS(312), 1,
      aux_sym_float_token4,
  [979] = 1,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      aux_sym_decimal_token1,
  [984] = 2,
    ACTIONS(316), 1,
      anon_sym_SQUOTE2,
    ACTIONS(318), 1,
      anon_sym_SQUOTEB,
  [991] = 2,
    ACTIONS(320), 1,
      aux_sym_float_token3,
    ACTIONS(322), 1,
      aux_sym_float_token4,
  [998] = 1,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      aux_sym_decimal_token1,
  [1003] = 2,
    ACTIONS(227), 1,
      anon_sym_SQUOTE2,
    ACTIONS(229), 1,
      anon_sym_SQUOTEB,
  [1010] = 2,
    ACTIONS(326), 1,
      sym__hex_digit_imm,
    STATE(11), 1,
      aux_sym_xint_repeat1,
  [1017] = 2,
    ACTIONS(328), 1,
      sym__octaldigit_imm,
    STATE(14), 1,
      aux_sym_xint_repeat2,
  [1024] = 2,
    ACTIONS(330), 1,
      sym__bitdigit_imm,
    STATE(9), 1,
      aux_sym_xint_repeat3,
  [1031] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
  [1038] = 2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE2,
    ACTIONS(233), 1,
      anon_sym_SQUOTEB,
  [1045] = 1,
    ACTIONS(332), 1,
      sym__digit_char_imm,
  [1049] = 1,
    ACTIONS(334), 1,
      sym__hex_digit_imm,
  [1053] = 1,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [1057] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1061] = 1,
    ACTIONS(340), 1,
      sym__hex_digit_imm,
  [1065] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [1069] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1073] = 1,
    ACTIONS(346), 1,
      sym__digit_char_imm,
  [1077] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1081] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1085] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1089] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [1093] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1097] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [1101] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [1105] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [1109] = 1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [1113] = 1,
    ACTIONS(312), 1,
      aux_sym_float_token4,
  [1117] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [1121] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1125] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1129] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [1133] = 1,
    ACTIONS(372), 1,
      sym__hex_digit_imm,
  [1137] = 1,
    ACTIONS(374), 1,
      sym__digit_char_imm,
  [1141] = 1,
    ACTIONS(376), 1,
      sym__hex_digit_imm,
  [1145] = 1,
    ACTIONS(378), 1,
      aux_sym_float_token4,
  [1149] = 1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
  [1153] = 1,
    ACTIONS(382), 1,
      sym__hex_digit_imm,
  [1157] = 1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
  [1161] = 1,
    ACTIONS(386), 1,
      sym__hex_digit_imm,
  [1165] = 1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
  [1169] = 1,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
  [1173] = 1,
    ACTIONS(392), 1,
      sym__hex_digit_imm,
  [1177] = 1,
    ACTIONS(394), 1,
      sym__hex_digit_imm,
  [1181] = 1,
    ACTIONS(396), 1,
      sym__hex_digit_imm,
  [1185] = 1,
    ACTIONS(398), 1,
      sym__hex_digit_imm,
  [1189] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1193] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [1197] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1201] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1205] = 1,
    ACTIONS(408), 1,
      sym__hex_digit_imm,
  [1209] = 1,
    ACTIONS(410), 1,
      sym__hex_digit_imm,
  [1213] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [1217] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1221] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [1225] = 1,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
  [1229] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [1233] = 1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [1237] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [1241] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1245] = 1,
    ACTIONS(427), 1,
      sym__digit_char_imm,
  [1249] = 1,
    ACTIONS(429), 1,
      sym__hex_digit_imm,
  [1253] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [1257] = 1,
    ACTIONS(433), 1,
      sym__digit_char_imm,
  [1261] = 1,
    ACTIONS(435), 1,
      sym__hex_digit_imm,
  [1265] = 1,
    ACTIONS(437), 1,
      sym__digit_char_imm,
  [1269] = 1,
    ACTIONS(439), 1,
      sym__hex_digit_imm,
  [1273] = 1,
    ACTIONS(441), 1,
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
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 355,
  [SMALL_STATE(16)] = 376,
  [SMALL_STATE(17)] = 397,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 519,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 573,
  [SMALL_STATE(26)] = 588,
  [SMALL_STATE(27)] = 603,
  [SMALL_STATE(28)] = 618,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 673,
  [SMALL_STATE(32)] = 691,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 745,
  [SMALL_STATE(36)] = 763,
  [SMALL_STATE(37)] = 781,
  [SMALL_STATE(38)] = 799,
  [SMALL_STATE(39)] = 813,
  [SMALL_STATE(40)] = 825,
  [SMALL_STATE(41)] = 839,
  [SMALL_STATE(42)] = 851,
  [SMALL_STATE(43)] = 863,
  [SMALL_STATE(44)] = 877,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 897,
  [SMALL_STATE(47)] = 903,
  [SMALL_STATE(48)] = 909,
  [SMALL_STATE(49)] = 919,
  [SMALL_STATE(50)] = 925,
  [SMALL_STATE(51)] = 933,
  [SMALL_STATE(52)] = 939,
  [SMALL_STATE(53)] = 947,
  [SMALL_STATE(54)] = 953,
  [SMALL_STATE(55)] = 959,
  [SMALL_STATE(56)] = 967,
  [SMALL_STATE(57)] = 972,
  [SMALL_STATE(58)] = 979,
  [SMALL_STATE(59)] = 984,
  [SMALL_STATE(60)] = 991,
  [SMALL_STATE(61)] = 998,
  [SMALL_STATE(62)] = 1003,
  [SMALL_STATE(63)] = 1010,
  [SMALL_STATE(64)] = 1017,
  [SMALL_STATE(65)] = 1024,
  [SMALL_STATE(66)] = 1031,
  [SMALL_STATE(67)] = 1038,
  [SMALL_STATE(68)] = 1045,
  [SMALL_STATE(69)] = 1049,
  [SMALL_STATE(70)] = 1053,
  [SMALL_STATE(71)] = 1057,
  [SMALL_STATE(72)] = 1061,
  [SMALL_STATE(73)] = 1065,
  [SMALL_STATE(74)] = 1069,
  [SMALL_STATE(75)] = 1073,
  [SMALL_STATE(76)] = 1077,
  [SMALL_STATE(77)] = 1081,
  [SMALL_STATE(78)] = 1085,
  [SMALL_STATE(79)] = 1089,
  [SMALL_STATE(80)] = 1093,
  [SMALL_STATE(81)] = 1097,
  [SMALL_STATE(82)] = 1101,
  [SMALL_STATE(83)] = 1105,
  [SMALL_STATE(84)] = 1109,
  [SMALL_STATE(85)] = 1113,
  [SMALL_STATE(86)] = 1117,
  [SMALL_STATE(87)] = 1121,
  [SMALL_STATE(88)] = 1125,
  [SMALL_STATE(89)] = 1129,
  [SMALL_STATE(90)] = 1133,
  [SMALL_STATE(91)] = 1137,
  [SMALL_STATE(92)] = 1141,
  [SMALL_STATE(93)] = 1145,
  [SMALL_STATE(94)] = 1149,
  [SMALL_STATE(95)] = 1153,
  [SMALL_STATE(96)] = 1157,
  [SMALL_STATE(97)] = 1161,
  [SMALL_STATE(98)] = 1165,
  [SMALL_STATE(99)] = 1169,
  [SMALL_STATE(100)] = 1173,
  [SMALL_STATE(101)] = 1177,
  [SMALL_STATE(102)] = 1181,
  [SMALL_STATE(103)] = 1185,
  [SMALL_STATE(104)] = 1189,
  [SMALL_STATE(105)] = 1193,
  [SMALL_STATE(106)] = 1197,
  [SMALL_STATE(107)] = 1201,
  [SMALL_STATE(108)] = 1205,
  [SMALL_STATE(109)] = 1209,
  [SMALL_STATE(110)] = 1213,
  [SMALL_STATE(111)] = 1217,
  [SMALL_STATE(112)] = 1221,
  [SMALL_STATE(113)] = 1225,
  [SMALL_STATE(114)] = 1229,
  [SMALL_STATE(115)] = 1233,
  [SMALL_STATE(116)] = 1237,
  [SMALL_STATE(117)] = 1241,
  [SMALL_STATE(118)] = 1245,
  [SMALL_STATE(119)] = 1249,
  [SMALL_STATE(120)] = 1253,
  [SMALL_STATE(121)] = 1257,
  [SMALL_STATE(122)] = 1261,
  [SMALL_STATE(123)] = 1265,
  [SMALL_STATE(124)] = 1269,
  [SMALL_STATE(125)] = 1273,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_int_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_int_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(108),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xint, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xint, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat1, 2), SHIFT_REPEAT(10),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat2, 2), SHIFT_REPEAT(12),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat2, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xint_repeat3, 2), SHIFT_REPEAT(13),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xint_repeat3, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(15),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(18),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(21),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_long, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_long, 9),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trigraph, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigraph, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_short, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_short, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbolic_op_repeat1, 2), SHIFT_REPEAT(41),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_op, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_expression_text, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytechar, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bignum, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint64, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int64, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unativeint, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nativeint, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint32, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int32, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint16, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int16, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sbyte, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym__quote_op_right, 1),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym__quote_op_left, 1),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbolic_keyword, 1), REDUCE(sym_symbolic_op, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_directive, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
