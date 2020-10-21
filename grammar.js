const keywords = [ 'abstract', 'and', 'as', 'assert', 'base', 'begin', 'class', 'default', 'delegate', 'do', 'done', 'downcast', 'downto', 'elif', 'else', 'end',
                   'exception', 'extern', 'false', 'finally', 'for', 'fun', 'function', 'global', 'if', 'in', 'inherit', 'inline', 'interface', 'internal', 'lazy', 'let',
                   'match', 'member', 'module', 'mutable', 'namespace', 'new', 'null', 'of', 'open', 'or', 'override', 'private', 'public', 'rec', 'return', 'sig', 'static',
                   'struct', 'then', 'to', 'true', 'try', 'type', 'upcast', 'use', 'val', 'void', 'when', 'while', 'with', 'yield' ];
const reserved_words = ['atomic', 'break', 'checked', 'component', 'const', 'constraint', 'constructor', 'continue', 'eager', 'fixed', 'fori', 'functor', 'include',
                        'measure', 'method', 'mixin', 'object', 'parallel', 'params', 'process', 'protected', 'pure', 'recursive', 'sealed', 'tailcall', 'trait', 'virtual', 'volatile'];

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
    conflicts: $ => [],
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
        $.identifier,
        $.keyword
      ),

      comment: $ => token(choice(
        seq("(*", repeat(/.|\n|\r/), "*)"), // multiline comments
        seq("//", /[^\n\r]*/)
      )),
      
      // the spec uses unicode character classes here, but tree-sitter doesn't support them.
      // we try to map the character classes to best-effort ranges here
      _letter_char: $ => /[a-zA-Z]/,
      _digit_char: $ => /[0-9]/,
      _connecting_char: $ => /[:punct:]/,
      // how to encode this character class?
      // _combining_char: $ => /[\p{Mn}\p{Mc}]/,
      _formatting_char: $ => /[:cntrl:]/,
      _identifier_start_char: $ => choice(
        $._letter_char, 
        /_/
      ),
      _identifier_char: $ => choice(
        $._letter_char,
        $._digit_char,
        $._connecting_char,
        // $._combining_char,
        $._formatting_char,
        /'/,
        /_/
      ),
      _ident_text: $ => seq(
        $._identifier_start_char,
        optional(repeat($._identifier_char))
      ),
      _escaped_ident_text: $ => /``([^`\n\r\t] | `[^`\n\r\t])+``/,
      keyword: $ => choice(
        ...keywords,
        ...reserved_words
      ),
      identifier: $ => choice(
        $._ident_text,
        $._escaped_ident_text
      )
    }
  });
  