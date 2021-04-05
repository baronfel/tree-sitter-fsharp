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
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_CR_LF = 2,
  sym_comment = 3,
  aux_sym__letter_char_token1 = 4,
  sym__digit_char = 5,
  sym__connecting_char = 6,
  sym__formatting_char = 7,
  aux_sym__identifier_start_char_token1 = 8,
  aux_sym__identifier_char_token1 = 9,
  sym__escaped_ident_text = 10,
  anon_sym_abstract = 11,
  anon_sym_and = 12,
  anon_sym_as = 13,
  anon_sym_assert = 14,
  anon_sym_base = 15,
  anon_sym_begin = 16,
  anon_sym_class = 17,
  anon_sym_default = 18,
  anon_sym_delegate = 19,
  anon_sym_do = 20,
  anon_sym_done = 21,
  anon_sym_downcast = 22,
  anon_sym_downto = 23,
  anon_sym_elif = 24,
  anon_sym_else = 25,
  anon_sym_end = 26,
  anon_sym_exception = 27,
  anon_sym_extern = 28,
  anon_sym_false = 29,
  anon_sym_finally = 30,
  anon_sym_for = 31,
  anon_sym_fun = 32,
  anon_sym_function = 33,
  anon_sym_global = 34,
  anon_sym_if = 35,
  anon_sym_in = 36,
  anon_sym_inherit = 37,
  anon_sym_inline = 38,
  anon_sym_interface = 39,
  anon_sym_internal = 40,
  anon_sym_lazy = 41,
  anon_sym_let = 42,
  anon_sym_match = 43,
  anon_sym_member = 44,
  anon_sym_module = 45,
  anon_sym_mutable = 46,
  anon_sym_namespace = 47,
  anon_sym_new = 48,
  anon_sym_null = 49,
  anon_sym_of = 50,
  anon_sym_open = 51,
  anon_sym_or = 52,
  anon_sym_override = 53,
  anon_sym_private = 54,
  anon_sym_public = 55,
  anon_sym_rec = 56,
  anon_sym_return = 57,
  anon_sym_sig = 58,
  anon_sym_static = 59,
  anon_sym_struct = 60,
  anon_sym_then = 61,
  anon_sym_to = 62,
  anon_sym_true = 63,
  anon_sym_try = 64,
  anon_sym_type = 65,
  anon_sym_upcast = 66,
  anon_sym_use = 67,
  anon_sym_val = 68,
  anon_sym_void = 69,
  anon_sym_when = 70,
  anon_sym_while = 71,
  anon_sym_with = 72,
  anon_sym_yield = 73,
  anon_sym_atomic = 74,
  anon_sym_break = 75,
  anon_sym_checked = 76,
  anon_sym_component = 77,
  anon_sym_const = 78,
  anon_sym_constraint = 79,
  anon_sym_constructor = 80,
  anon_sym_continue = 81,
  anon_sym_eager = 82,
  anon_sym_fixed = 83,
  anon_sym_fori = 84,
  anon_sym_functor = 85,
  anon_sym_include = 86,
  anon_sym_measure = 87,
  anon_sym_method = 88,
  anon_sym_mixin = 89,
  anon_sym_object = 90,
  anon_sym_parallel = 91,
  anon_sym_params = 92,
  anon_sym_process = 93,
  anon_sym_protected = 94,
  anon_sym_pure = 95,
  anon_sym_recursive = 96,
  anon_sym_sealed = 97,
  anon_sym_tailcall = 98,
  anon_sym_trait = 99,
  anon_sym_virtual = 100,
  anon_sym_volatile = 101,
  sym__escape_char = 102,
  sym__non_escape_char = 103,
  sym__simple_string_char = 104,
  sym__hex_digit = 105,
  anon_sym_BSLASHu = 106,
  anon_sym_BSLASHU = 107,
  anon_sym_BSLASH = 108,
  anon_sym_SQUOTE = 109,
  anon_sym_DQUOTE = 110,
  anon_sym_ = 111,
  anon_sym_AT_DQUOTE = 112,
  anon_sym_SQUOTEB = 113,
  anon_sym_DQUOTEB = 114,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 115,
  sym_test = 116,
  sym__newline = 117,
  sym__letter_char = 118,
  sym__identifier_start_char = 119,
  sym__identifier_char = 120,
  sym__ident_text = 121,
  sym_keyword = 122,
  sym_identifier = 123,
  sym__unicodegraph_short = 124,
  sym__unicodegraph_long = 125,
  sym__trigraph = 126,
  sym__char_char = 127,
  sym__string_char = 128,
  sym_char = 129,
  sym_string = 130,
  sym__verbatim_string_char = 131,
  sym_verbatim_string = 132,
  sym_bytechar = 133,
  sym_bytearray = 134,
  sym_verbatim_bytearray = 135,
  sym__simple_or_escape_char = 136,
  sym__simple_char = 137,
  sym_triple_quoted_string = 138,
  aux_sym__ident_text_repeat1 = 139,
  aux_sym_string_repeat1 = 140,
  aux_sym_verbatim_string_repeat1 = 141,
  aux_sym_triple_quoted_string_repeat1 = 142,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_comment] = "comment",
  [aux_sym__letter_char_token1] = "_letter_char_token1",
  [sym__digit_char] = "_digit_char",
  [sym__connecting_char] = "_connecting_char",
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
  [sym__simple_string_char] = "_simple_string_char",
  [sym__hex_digit] = "_hex_digit",
  [anon_sym_BSLASHu] = "\\u",
  [anon_sym_BSLASHU] = "\\U",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_] = "",
  [anon_sym_AT_DQUOTE] = "@\"",
  [anon_sym_SQUOTEB] = "'B",
  [anon_sym_DQUOTEB] = "\"B",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_test] = "test",
  [sym__newline] = "_newline",
  [sym__letter_char] = "_letter_char",
  [sym__identifier_start_char] = "_identifier_start_char",
  [sym__identifier_char] = "_identifier_char",
  [sym__ident_text] = "_ident_text",
  [sym_keyword] = "keyword",
  [sym_identifier] = "identifier",
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
  [sym__simple_char] = "_simple_char",
  [sym_triple_quoted_string] = "triple_quoted_string",
  [aux_sym__ident_text_repeat1] = "_ident_text_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_verbatim_string_repeat1] = "verbatim_string_repeat1",
  [aux_sym_triple_quoted_string_repeat1] = "triple_quoted_string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_comment] = sym_comment,
  [aux_sym__letter_char_token1] = aux_sym__letter_char_token1,
  [sym__digit_char] = sym__digit_char,
  [sym__connecting_char] = sym__connecting_char,
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
  [sym__simple_string_char] = sym__simple_string_char,
  [sym__hex_digit] = sym__hex_digit,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [anon_sym_BSLASHU] = anon_sym_BSLASHU,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT_DQUOTE] = anon_sym_AT_DQUOTE,
  [anon_sym_SQUOTEB] = anon_sym_SQUOTEB,
  [anon_sym_DQUOTEB] = anon_sym_DQUOTEB,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_test] = sym_test,
  [sym__newline] = sym__newline,
  [sym__letter_char] = sym__letter_char,
  [sym__identifier_start_char] = sym__identifier_start_char,
  [sym__identifier_char] = sym__identifier_char,
  [sym__ident_text] = sym__ident_text,
  [sym_keyword] = sym_keyword,
  [sym_identifier] = sym_identifier,
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
  [sym__simple_char] = sym__simple_char,
  [sym_triple_quoted_string] = sym_triple_quoted_string,
  [aux_sym__ident_text_repeat1] = aux_sym__ident_text_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_verbatim_string_repeat1] = aux_sym_verbatim_string_repeat1,
  [aux_sym_triple_quoted_string_repeat1] = aux_sym_triple_quoted_string_repeat1,
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
  [aux_sym__letter_char_token1] = {
    .visible = false,
    .named = false,
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
  [sym__simple_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_digit] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
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
  [sym__letter_char] = {
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym__simple_char] = {
    .visible = false,
    .named = true,
  },
  [sym_triple_quoted_string] = {
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
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(284);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(412);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == 'n' ||
          lookahead == 't') ADVANCE(289);
      if (lookahead == 'p' ||
          lookahead == 'u') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '`') ADVANCE(280);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(420);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(423);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(294);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == 'v') ADVANCE(298);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(282);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(287);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(314);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(363);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == 'j') ADVANCE(102);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(397);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 273:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 274:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(352);
      END_STATE();
    case 276:
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 279:
      if (lookahead == 'z') ADVANCE(277);
      END_STATE();
    case 280:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(2);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(282);
      if (lookahead == ')') ADVANCE(288);
      if (lookahead == '*') ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(282);
      if (lookahead == '*') ADVANCE(281);
      END_STATE();
    case 283:
      if (eof) ADVANCE(284);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(289);
      if (lookahead == 'p' ||
          lookahead == 'u') ADVANCE(289);
      if (lookahead == 'c' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(285);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '\r') ADVANCE(419);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(282);
      if (lookahead == '*') ADVANCE(281);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__letter_char_token1);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__digit_char);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(189);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_downcast);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_downto);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_upcast);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_eager);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_fori);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_measure);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_parallel);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_recursive);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_tailcall);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__escape_char);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__non_escape_char);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__simple_string_char);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_BSLASHU);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(406);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= 'M') ||
          ('O' <= lookahead && lookahead <= 'S') ||
          ('W' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(406);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == 'B') ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'B') ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == '\r') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SQUOTEB);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DQUOTEB);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 419},
  [6] = {.lex_state = 419},
  [7] = {.lex_state = 419},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 283},
  [14] = {.lex_state = 283},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym__letter_char_token1] = ACTIONS(1),
    [sym__digit_char] = ACTIONS(1),
    [sym__connecting_char] = ACTIONS(1),
    [sym__formatting_char] = ACTIONS(1),
    [aux_sym__identifier_start_char_token1] = ACTIONS(1),
    [aux_sym__identifier_char_token1] = ACTIONS(1),
    [sym__escaped_ident_text] = ACTIONS(1),
    [sym__escape_char] = ACTIONS(1),
    [sym__non_escape_char] = ACTIONS(1),
    [sym__simple_string_char] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [anon_sym_BSLASHU] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTEB] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_test] = STATE(51),
    [sym__letter_char] = STATE(9),
    [sym__identifier_start_char] = STATE(9),
    [sym__ident_text] = STATE(53),
    [sym_keyword] = STATE(33),
    [sym_identifier] = STATE(33),
    [sym_char] = STATE(33),
    [sym_string] = STATE(33),
    [sym_verbatim_string] = STATE(33),
    [sym_bytechar] = STATE(33),
    [sym_bytearray] = STATE(33),
    [sym_verbatim_bytearray] = STATE(33),
    [sym_triple_quoted_string] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [aux_sym__letter_char_token1] = ACTIONS(5),
    [aux_sym__identifier_start_char_token1] = ACTIONS(7),
    [sym__escaped_ident_text] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_assert] = ACTIONS(11),
    [anon_sym_base] = ACTIONS(11),
    [anon_sym_begin] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_done] = ACTIONS(11),
    [anon_sym_downcast] = ACTIONS(11),
    [anon_sym_downto] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_exception] = ACTIONS(11),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_inherit] = ACTIONS(11),
    [anon_sym_inline] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_internal] = ACTIONS(11),
    [anon_sym_lazy] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_match] = ACTIONS(11),
    [anon_sym_member] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_mutable] = ACTIONS(11),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_new] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_of] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_override] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_rec] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_sig] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_then] = ACTIONS(11),
    [anon_sym_to] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_upcast] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(11),
    [anon_sym_val] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_with] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [anon_sym_atomic] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_checked] = ACTIONS(11),
    [anon_sym_component] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_constructor] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_eager] = ACTIONS(11),
    [anon_sym_fixed] = ACTIONS(11),
    [anon_sym_fori] = ACTIONS(11),
    [anon_sym_functor] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_measure] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_parallel] = ACTIONS(11),
    [anon_sym_params] = ACTIONS(11),
    [anon_sym_process] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(11),
    [anon_sym_pure] = ACTIONS(11),
    [anon_sym_recursive] = ACTIONS(11),
    [anon_sym_sealed] = ACTIONS(11),
    [anon_sym_tailcall] = ACTIONS(11),
    [anon_sym_trait] = ACTIONS(11),
    [anon_sym_virtual] = ACTIONS(11),
    [anon_sym_volatile] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_AT_DQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(25), 1,
      anon_sym_BSLASHu,
    ACTIONS(27), 1,
      anon_sym_BSLASHU,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTEB,
    ACTIONS(23), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(4), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [31] = 7,
    ACTIONS(25), 1,
      anon_sym_BSLASHu,
    ACTIONS(27), 1,
      anon_sym_BSLASHU,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTEB,
    ACTIONS(35), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(2), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [62] = 6,
    ACTIONS(44), 1,
      anon_sym_BSLASHu,
    ACTIONS(47), 1,
      anon_sym_BSLASHU,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTEB,
    ACTIONS(41), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
    STATE(4), 6,
      sym__newline,
      sym__unicodegraph_short,
      sym__unicodegraph_long,
      sym__trigraph,
      sym__string_char,
      aux_sym_string_repeat1,
  [91] = 4,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTEB,
    STATE(7), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(55), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH,
      anon_sym_,
  [111] = 3,
    ACTIONS(64), 2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTEB,
    STATE(6), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(61), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH,
      anon_sym_,
  [129] = 4,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_DQUOTEB,
    STATE(6), 3,
      sym__newline,
      sym__verbatim_string_char,
      aux_sym_verbatim_string_repeat1,
    ACTIONS(66), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASH,
      anon_sym_,
  [149] = 7,
    ACTIONS(72), 1,
      aux_sym__letter_char_token1,
    ACTIONS(74), 1,
      sym__escape_char,
    ACTIONS(76), 1,
      sym__simple_string_char,
    ACTIONS(78), 1,
      anon_sym_BSLASHu,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    STATE(40), 2,
      sym__simple_or_escape_char,
      sym__simple_char,
    STATE(36), 3,
      sym__unicodegraph_short,
      sym__trigraph,
      sym__char_char,
  [174] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(14), 3,
      sym__letter_char,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(84), 4,
      aux_sym__letter_char_token1,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [193] = 1,
    ACTIONS(88), 10,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_DQUOTEB,
  [206] = 1,
    ACTIONS(90), 10,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_DQUOTEB,
  [219] = 1,
    ACTIONS(92), 10,
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__escape_char,
      sym__non_escape_char,
      sym__simple_string_char,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      anon_sym_DQUOTEB,
  [232] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(13), 3,
      sym__letter_char,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(96), 4,
      aux_sym__letter_char_token1,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [251] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(13), 3,
      sym__letter_char,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(104), 4,
      aux_sym__letter_char_token1,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [270] = 3,
    ACTIONS(110), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(108), 2,
      aux_sym__letter_char_token1,
      sym__escape_char,
    STATE(17), 3,
      sym__simple_or_escape_char,
      sym__simple_char,
      aux_sym_triple_quoted_string_repeat1,
  [283] = 3,
    ACTIONS(115), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(112), 2,
      aux_sym__letter_char_token1,
      sym__escape_char,
    STATE(16), 3,
      sym__simple_or_escape_char,
      sym__simple_char,
      aux_sym_triple_quoted_string_repeat1,
  [296] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(117), 2,
      aux_sym__letter_char_token1,
      sym__escape_char,
    STATE(16), 3,
      sym__simple_or_escape_char,
      sym__simple_char,
      aux_sym_triple_quoted_string_repeat1,
  [309] = 2,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTEB,
  [316] = 1,
    ACTIONS(125), 1,
      sym__hex_digit,
  [320] = 1,
    ACTIONS(127), 1,
      sym__hex_digit,
  [324] = 1,
    ACTIONS(129), 1,
      sym__hex_digit,
  [328] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [332] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [336] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [340] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [344] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [348] = 1,
    ACTIONS(141), 1,
      sym__hex_digit,
  [352] = 1,
    ACTIONS(143), 1,
      sym__digit_char,
  [356] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [360] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [364] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [368] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [372] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [376] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [380] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [384] = 1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
  [388] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [392] = 1,
    ACTIONS(163), 1,
      sym__digit_char,
  [396] = 1,
    ACTIONS(165), 1,
      sym__hex_digit,
  [400] = 1,
    ACTIONS(167), 1,
      anon_sym_SQUOTEB,
  [404] = 1,
    ACTIONS(169), 1,
      sym__digit_char,
  [408] = 1,
    ACTIONS(171), 1,
      sym__hex_digit,
  [412] = 1,
    ACTIONS(173), 1,
      sym__hex_digit,
  [416] = 1,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
  [420] = 1,
    ACTIONS(177), 1,
      sym__hex_digit,
  [424] = 1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
  [428] = 1,
    ACTIONS(181), 1,
      sym__hex_digit,
  [432] = 1,
    ACTIONS(183), 1,
      sym__hex_digit,
  [436] = 1,
    ACTIONS(185), 1,
      sym__hex_digit,
  [440] = 1,
    ACTIONS(187), 1,
      sym__hex_digit,
  [444] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [448] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [452] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [456] = 1,
    ACTIONS(195), 1,
      sym__digit_char,
  [460] = 1,
    ACTIONS(197), 1,
      sym__hex_digit,
  [464] = 1,
    ACTIONS(199), 1,
      sym__digit_char,
  [468] = 1,
    ACTIONS(201), 1,
      sym__hex_digit,
  [472] = 1,
    ACTIONS(203), 1,
      sym__digit_char,
  [476] = 1,
    ACTIONS(205), 1,
      sym__hex_digit,
  [480] = 1,
    ACTIONS(207), 1,
      sym__hex_digit,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 251,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 320,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 344,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 356,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 364,
  [SMALL_STATE(32)] = 368,
  [SMALL_STATE(33)] = 372,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 392,
  [SMALL_STATE(39)] = 396,
  [SMALL_STATE(40)] = 400,
  [SMALL_STATE(41)] = 404,
  [SMALL_STATE(42)] = 408,
  [SMALL_STATE(43)] = 412,
  [SMALL_STATE(44)] = 416,
  [SMALL_STATE(45)] = 420,
  [SMALL_STATE(46)] = 424,
  [SMALL_STATE(47)] = 428,
  [SMALL_STATE(48)] = 432,
  [SMALL_STATE(49)] = 436,
  [SMALL_STATE(50)] = 440,
  [SMALL_STATE(51)] = 444,
  [SMALL_STATE(52)] = 448,
  [SMALL_STATE(53)] = 452,
  [SMALL_STATE(54)] = 456,
  [SMALL_STATE(55)] = 460,
  [SMALL_STATE(56)] = 464,
  [SMALL_STATE(57)] = 468,
  [SMALL_STATE(58)] = 472,
  [SMALL_STATE(59)] = 476,
  [SMALL_STATE(60)] = 480,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(58),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_short, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__trigraph, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicodegraph_long, 9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_triple_quoted_string_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__char_char, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_or_escape_char, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytechar, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytearray, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_bytearray, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_quoted_string, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigraph, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicodegraph_short, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
