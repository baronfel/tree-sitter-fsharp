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

#define LANGUAGE_VERSION 12
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
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
  anon_sym_abstract = 9,
  anon_sym_and = 10,
  anon_sym_as = 11,
  anon_sym_assert = 12,
  anon_sym_base = 13,
  anon_sym_begin = 14,
  anon_sym_class = 15,
  anon_sym_default = 16,
  anon_sym_delegate = 17,
  anon_sym_do = 18,
  anon_sym_done = 19,
  anon_sym_downcast = 20,
  anon_sym_downto = 21,
  anon_sym_elif = 22,
  anon_sym_else = 23,
  anon_sym_end = 24,
  anon_sym_exception = 25,
  anon_sym_extern = 26,
  anon_sym_false = 27,
  anon_sym_finally = 28,
  anon_sym_for = 29,
  anon_sym_fun = 30,
  anon_sym_function = 31,
  anon_sym_global = 32,
  anon_sym_if = 33,
  anon_sym_in = 34,
  anon_sym_inherit = 35,
  anon_sym_inline = 36,
  anon_sym_interface = 37,
  anon_sym_internal = 38,
  anon_sym_lazy = 39,
  anon_sym_let = 40,
  anon_sym_match = 41,
  anon_sym_member = 42,
  anon_sym_module = 43,
  anon_sym_mutable = 44,
  anon_sym_namespace = 45,
  anon_sym_new = 46,
  anon_sym_null = 47,
  anon_sym_of = 48,
  anon_sym_open = 49,
  anon_sym_or = 50,
  anon_sym_override = 51,
  anon_sym_private = 52,
  anon_sym_public = 53,
  anon_sym_rec = 54,
  anon_sym_return = 55,
  anon_sym_sig = 56,
  anon_sym_static = 57,
  anon_sym_struct = 58,
  anon_sym_then = 59,
  anon_sym_to = 60,
  anon_sym_true = 61,
  anon_sym_try = 62,
  anon_sym_type = 63,
  anon_sym_upcast = 64,
  anon_sym_use = 65,
  anon_sym_val = 66,
  anon_sym_void = 67,
  anon_sym_when = 68,
  anon_sym_while = 69,
  anon_sym_with = 70,
  anon_sym_yield = 71,
  anon_sym_atomic = 72,
  anon_sym_break = 73,
  anon_sym_checked = 74,
  anon_sym_component = 75,
  anon_sym_const = 76,
  anon_sym_constraint = 77,
  anon_sym_constructor = 78,
  anon_sym_continue = 79,
  anon_sym_eager = 80,
  anon_sym_fixed = 81,
  anon_sym_fori = 82,
  anon_sym_functor = 83,
  anon_sym_include = 84,
  anon_sym_measure = 85,
  anon_sym_method = 86,
  anon_sym_mixin = 87,
  anon_sym_object = 88,
  anon_sym_parallel = 89,
  anon_sym_params = 90,
  anon_sym_process = 91,
  anon_sym_protected = 92,
  anon_sym_pure = 93,
  anon_sym_recursive = 94,
  anon_sym_sealed = 95,
  anon_sym_tailcall = 96,
  anon_sym_trait = 97,
  anon_sym_virtual = 98,
  anon_sym_volatile = 99,
  sym_test = 100,
  sym__identifier_start_char = 101,
  sym__identifier_char = 102,
  sym__ident_text = 103,
  sym_keyword = 104,
  sym_identifier = 105,
  aux_sym__ident_text_repeat1 = 106,
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
  [sym_test] = "test",
  [sym__identifier_start_char] = "_identifier_start_char",
  [sym__identifier_char] = "_identifier_char",
  [sym__ident_text] = "_ident_text",
  [sym_keyword] = "keyword",
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
  [sym_test] = sym_test,
  [sym__identifier_start_char] = sym__identifier_start_char,
  [sym__identifier_char] = sym__identifier_char,
  [sym__ident_text] = sym__ident_text,
  [sym_keyword] = sym_keyword,
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
  [sym_keyword] = {
    .visible = true,
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
      if (eof) ADVANCE(278);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(281);
      if (lookahead == 'p' ||
          lookahead == 'u') ADVANCE(281);
      if (lookahead == 'c' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '`') ADVANCE(9);
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
      if (lookahead == '`') ADVANCE(276);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(274);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(280);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(306);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(390);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(320);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(368);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'j') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'k') ADVANCE(371);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 267:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 268:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 269:
      if (lookahead == 'w') ADVANCE(344);
      END_STATE();
    case 270:
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 273:
      if (lookahead == 'z') ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(274);
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(274);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 276:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1);
      END_STATE();
    case 277:
      if (eof) ADVANCE(278);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(281);
      if (lookahead == 'p' ||
          lookahead == 'u') ADVANCE(281);
      if (lookahead == 'c' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(274);
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__letter_char);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__letter_char);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__digit_char);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__connecting_char);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_start_char_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__identifier_char_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__escaped_ident_text);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_downcast);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_downto);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_upcast);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_eager);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_fori);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_functor);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_measure);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_parallel);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_recursive);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_tailcall);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 277},
  [3] = {.lex_state = 277},
  [4] = {.lex_state = 277},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
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
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_downcast] = ACTIONS(1),
    [anon_sym_downto] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_atomic] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_eager] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_fori] = ACTIONS(1),
    [anon_sym_functor] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_measure] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
  },
  [1] = {
    [sym_test] = STATE(8),
    [sym__identifier_start_char] = STATE(2),
    [sym__ident_text] = STATE(6),
    [sym_keyword] = STATE(5),
    [sym_identifier] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [sym__letter_char] = ACTIONS(5),
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
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(3), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(17), 4,
      sym__letter_char,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [18] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(4), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(23), 4,
      sym__letter_char,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [36] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 2,
      sym__connecting_char,
      sym__formatting_char,
    STATE(4), 2,
      sym__identifier_char,
      aux_sym__ident_text_repeat1,
    ACTIONS(29), 4,
      sym__letter_char,
      sym__digit_char,
      aux_sym__identifier_start_char_token1,
      aux_sym__identifier_char_token1,
  [54] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [58] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [62] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [66] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 66,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_text, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_text_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
