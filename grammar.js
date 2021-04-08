const keywords = [ 
  'abstract', 'and', 'as', 'assert', 'base', 'begin', 'class', 'default', 
  'delegate', 'do', 'done', 'downcast', 'downto', 'elif', 'else', 'end',
  'exception', 'extern', 'false', 'finally', 'for', 'fun', 'function', 'global',
  'if', 'in', 'inherit', 'inline', 'interface', 'internal', 'lazy', 'let',
  'match', 'member', 'module', 'mutable', 'namespace', 'new', 'null', 'of', 
  'open', 'or', 'override', 'private', 'public', 'rec', 'return', 'sig', 
  'static', 'struct', 'then', 'to', 'true', 'try', 'type', 'upcast', 'use',
  'val', 'void', 'when', 'while', 'with', 'yield' ];
const reserved_words = [
  'atomic', 'break', 'checked', 'component', 'const', 'constraint', 
  'constructor', 'continue', 'eager', 'fixed', 'fori', 'functor', 'include',
  'measure', 'method', 'mixin', 'object', 'parallel', 'params', 'process', 
  'protected', 'pure', 'recursive', 'sealed', 'tailcall', 'trait', 'virtual', 
  'volatile'];
const symbolic_keywords = [
  'let!', 'use!', 'do!', 'yield!', 'return!', '|', '->', '<-.', ':', '(', ')', 
  '[', ']', '[<', '>]', '[|', '|]', '{', '}', '\'', '#', ':?>', ':?', ':>', 
  '..', '::', ':=', ';;', ';', '=_', '?', '??', '(*)', '<@', '@>', '<@@', '@@>'];
const reserved_symbolic_sequences = ['~', '`']

function imm(x) {
  return token.immediate(x);
}

module.exports = grammar({
    name: 'fsharp',
    
    /**
     * an array of tokens that may appear anywhere in the language. This is often used for whitespace and comments. The default value of extras is to accept whitespace. To control whitespace explicitly, specify extras: $ => [] in your grammar.
     */
    extras: $ => [
      /\s/,
    ],
    /**
     * an array of rule names that should be automatically removed from the grammar by replacing all of their usages with a copy of their definition. This is useful for rules that are used in multiple places but for which you don’t want to create syntax tree nodes at runtime.
     */
    inline: $ => [],
    /**
     * an array of arrays of rule names. Each inner array represents a set of rules that’s involved in an LR(1) conflict that is intended to exist in the grammar. When these conflicts occur at runtime, Tree-sitter will use the GLR algorithm to explore all of the possible interpretations. If multiple parses end up succeeding, Tree-sitter will pick the subtree whose corresponding rule has the highest total dynamic precedence.
     */
    conflicts: $ => [
      [$.symbolic_keyword, $.symbolic_op],
      [$._quote_op_left, $.symbolic_op],
      [$._quote_op_right, $.symbolic_op],
      [$._quote_op_left, $.symbolic_keyword],
      [$._quote_op_right, $.symbolic_keyword],
    ],
    /**
     * an array of token names which can be returned by an external scanner. External scanners allow you to write custom C code which runs during the lexing process in order to handle lexical rules (e.g. Python’s indentation tokens) that cannot be described by regular expressions.
     */
    externals: $ => [],
    /**
     * the name of a token that will match keywords for the purpose of the keyword extraction optimization.
     */
    word: null,
    /**
     * an array of hidden rule names which should be considered to be ‘supertypes’ in the generated node types file.
     */
    supertypes: $ => [],
    
    rules: {
      // used to have a top-level node to test with until top-level acutal nodes are fleshed out
      test: $ => choice(
        $.comment,
        $.verbatim_string,
        $.verbatim_bytearray,
        $.triple_quoted_string,
        $.identifier,
        $.keyword,
        $.cond_directive,
        $.symbolic_keyword,
        $.symbolic_op,

        // literals
        $.bytearray,
        $.bytechar,
        $.string,
        $.char,

        $.int,
        $.xint,
        $.float,
        $.decimal,
        $.bignum,
        $.sbyte,
        $.byte,
        $.int16,
        $.uint16,
        $.int32,
        $.uint32,
        $.nativeint,
        $.unativeint,
        $.int64,
        $.uint64,
      ),
      
      // 3.1 Whitespace
      _whitespace: $ => repeat1(' '),
      _newline: $ => choice(
        '\n',
        '\r\n'),
      _whitespace_or_newline: $ => choice(
        $._whitespace,
        $._newline),

      // 3.2 Comments
      _single_line_comment: $ => seq("//", /[^\n\r]*/),
      _multi_line_comment: $ => seq("(*", repeat(/.|\n|\r/), "*)"),
      comment: $ => token(choice(
        // cannot use symbols in a token definition
        // see: https://github.com/tree-sitter/tree-sitter/issues/449
        seq("//", /[^\n\r]*/),  // single line
        seq("(*", repeat(/.|\n|\r/), "*)"))), // multi line

      // 3.3 Conditional Compilation
      cond_directive: $ => choice(
        $.if_directive,
        $.else_directive,
        $.endif_directive),
      // XXX line occupation rule ignored
      if_directive: $ => seq(
        "#if",
        $._if_expression_text),
      else_directive: $ => "#else",
      endif_directive: $ => "#endif",
      _if_expression_text: $ => choice(
        prec.left(1, seq($._if_expression_text, "||", $._if_expression_text)),
        prec.left(2, seq($._if_expression_text, "&&", $._if_expression_text)),
        prec.left(3, seq("!", $._if_expression_text)),
        prec.left(4, seq("(", $._if_expression_text, ")")),
        $._ident_text,
      ),
      
      // 3.4 Identifiers and Keywords
      _digit_char_imm: $ => imm(/[0-9]/),
      _letter_char: $ => /\p{Lu}|\p{Ll}|\p{Lt}|\p{Lm}|\p{Lo}|\p{Nl}/,
      _connecting_char: $ => /\p{Pc}/,
      _combining_char: $ => /\p{Mn}|\p{Mc}/,
      _formatting_char: $ => /\p{Cf}/,
      _identifier_start_char: $ => choice(
        $._letter_char, 
        /_/
      ),
      _identifier_char: $ => choice(
        $._letter_char,
        $._digit_char_imm,
        $._connecting_char,
        $._combining_char,
        $._formatting_char,
        /'/,
        /_/
      ),
      _ident_text: $ => seq(
        $._identifier_start_char,
        repeat($._identifier_char)
      ),
      _escaped_ident_text: $ => /``([^`\n\r\t] | `[^`\n\r\t])+``/,
      identifier: $ => choice(
        $._ident_text,
        $._escaped_ident_text
      ),

      keyword: $ => choice(
        ...keywords,
        ...reserved_words
      ),

      // 3.5 Strings and Characters
      _escape_char: $ => imm(/\\["\'ntbrafv]/),
      _non_escape_char: $ => imm(/\\[^"\'ntbrafv]/),
      // using \u0008 to model \b
      _simple_char_char: $ => imm(/[^\n\t\r\u0008\a\f\v'\\]/),
      _hex_digit_imm: $ => imm(/[0-9a-fA-F]/),
      _unicodegraph_short: $ => seq(
        imm('\\u'),
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
      ),
      _unicodegraph_long: $ => seq(
        imm('\\U'),
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
        $._hex_digit_imm,
      ),
      _trigraph: $ => seq(imm('\\'), $._digit_char_imm, $._digit_char_imm, $._digit_char_imm),

      _char_char: $ => choice(
        $._simple_char_char,
        $._escape_char,
        $._trigraph,
        $._unicodegraph_short
      ),

      // note: \n is allowed in strings
      _simple_string_char: $ => /[^\t\r\u0008\a\f\v\\"]/,
      _string_char: $ => choice(
        $._simple_string_char,
        $._escape_char,
        $._non_escape_char,
        $._trigraph,
        $._unicodegraph_short,
        $._unicodegraph_long,
        $._newline
      ),
      _string_elem: $ => choice(
        $._string_char,
        seq('\\', $._newline, repeat($._whitespace), $._string_elem)
      ),
      char: $ => seq("'", $._char_char, imm("'")),
      string: $ => seq('"', repeat($._string_char), imm('"')),
      _verbatim_string_char: $ => choice(
        $._simple_string_char,
        $._non_escape_char,
        $._newline,
        '\\',
        ''
      ),
      verbatim_string: $ => seq('@"', repeat($._verbatim_string_char), imm('"')),
      bytechar: $ => seq("'", $._char_char, imm("'B")),
      bytearray: $ => seq('"', repeat($._string_char), imm('"B')),
      verbatim_bytearray: $ => seq('@"', repeat($._verbatim_string_char), imm('"B')),
      _simple_or_escape_char: $ => choice($._escape_char, imm(/[^'\\]/)),
      triple_quoted_string: $ => seq('"""', repeat($._simple_or_escape_char), imm('"""')),

      // 3.6 Symbolic Keywords
      symbolic_keyword: $ => choice(...symbolic_keywords, ...reserved_symbolic_sequences),

      // 3.7 Symbolic Operators
      _first_op_char: $ => /[!%&*+-./<=>@^|~]/,
      _op_char: $ => choice($._first_op_char, '?'),
      _quote_op_left: $ => choice("<@", "<@@"),
      _quote_op_right: $ => choice("@>", "@@>"),
      symbolic_op: $ => choice(
        "?", 
        "?<-", 
        seq($._first_op_char, repeat($._op_char)),
        $._quote_op_left,
        $._quote_op_right),

      // 3.8 Numeric Literals
      _octaldigit_imm: $ => imm(/[0-7]/),
      _bitdigit_imm:   $ => imm(/[0-1]/),
      int:             $ => seq(/[0-9]/, repeat($._digit_char_imm)),
      xint: $ => choice(
        seq(/0[xX]/, repeat1($._hex_digit_imm)),
        seq(/0[oO]/, repeat1($._octaldigit_imm)),
        seq(/0[bB]/, repeat1($._bitdigit_imm)),
      ),

      sbyte:      $ => seq(choice($.int, $.xint), imm('y')),
      byte:       $ => seq(choice($.int, $.xint), imm('uy')),
      int16:      $ => seq(choice($.int, $.xint), imm('s')),
      uint16:     $ => seq(choice($.int, $.xint), imm('us')),
      int32:      $ => seq(choice($.int, $.xint), imm('l')),
      uint32:     $ => seq(choice($.int, $.xint), imm(choice('ul', 'u'))),
      nativeint:  $ => seq(choice($.int, $.xint), imm('n')),
      unativeint: $ => seq(choice($.int, $.xint), imm('un')),
      int64:      $ => seq(choice($.int, $.xint), imm('L')),
      uint64:     $ => seq(choice($.int, $.xint), imm(choice('UL', 'uL'))),

      ieee32: $ => choice(seq($.float, imm("f")), seq($.xint, imm("lf"))),
      ieee64: $ => choice($.float, seq($.xint, imm("LF"))),

      bignum:     $ => seq($.int, imm(/[QRZING]/)),
      decimal:    $ => seq(choice($.float,$.int), imm(/[Mm]/)),

      float: $ => token(choice(
        seq(/[0-9]+/, imm(/\.[0-9]*/)),
        seq(/[0-9]+/, optional(imm(/\.[0-9]*/)), imm(/[eE]/), optional(imm(/[+-]/)), imm(/[0-9]+/))
      )),
    }
  });
