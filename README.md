> **NOTE**
> This repository is now archived in favor of https://github.com/Nsidorenco/tree-sitter-fsharp - @Nsidorenco's parser is much more capable and is where the bulk of community contribution should go!


# tree-sitter-fsharp (archived)
===========================

F# grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) based on the [language spec](https://fsharp.org/specs/language-spec/4.1/FSharpSpec-4.1-latest.pdf)

## Requirements

* Nodejs
* a C compiler

See [the tree-sitter getting started](https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started) for details on these.

## Development

### Install dependencies

`npm install`

### Generate the grammar

`npm run generate`

## Run the tests

`npm test`

## References

* Docs on [tree-sitter grammar](https://tree-sitter.github.io/tree-sitter/creating-parsers#writing-the-grammar)

## Progress (based on language spec sections)

- [x] whitespace
- [x] comments
- [ ] conditional compilation
- [x] identifiers and keywords
- [o] strings and characters
  - [ ] verbatim strings
  - [ ] triple-quote strings
  - [ ] verbatim bytearrays
- [ ] symbolic keywords
- [ ] symbolic operators
- [ ] numeric literals
- [ ] line directives
- [ ] hidden tokens
- [ ] identifier replacements
- [ ] operator names
- [ ] long idents
- [ ] constants
- [ ] operators and precedence
- [ ] types and type constraints
- [ ] expressions
- [ ] patterns
- [ ] type definitions
- [ ] units of measure
- [ ] namespaces and modules
- [ ] namespace and module signatures
- [ ] lexical filtering (maybe not necessary?)
