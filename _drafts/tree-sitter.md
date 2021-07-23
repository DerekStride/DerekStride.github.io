---
layout: post
title: tree-sitter
excerpt: >
  Tree-sitter is a parser generator tool and an incremental parsing library. It can build a concrete syntax tree for a
  source file and efficiently update the syntax tree as the source file is edited.
---

Check out the [tree-sitter](https://github.com/tree-sitter/tree-sitter) repo on GitHub and it's
[documentation](https://tree-sitter.github.io/tree-sitter/) if you're unfamiliar with the project. TL;DR from the GitHub
repo:

> Tree-sitter is a parser generator tool and an incremental parsing library. It can build a concrete syntax tree for a
> source file and efficiently update the syntax tree as the source file is edited.

Tree-sitter allows you to write a [grammar.js](https://github.com/Shopify/tree-sitter-liquid/blob/main/grammar.js)
file that describes the grammar of a programming language. From there it generates a file called
[src/parser.c](https://github.com/Shopify/tree-sitter-liquid/blob/main/src/parser.c), which is a complete parser for
your language with no dependencies. It also generates bindings for various languages like
[Rust](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_rust/README.md) and
[WASM](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_web/README.md).

The parsers generate an [AST](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-parse) describing the
source code that can be queried using [S-expressions](https://en.wikipedia.org/wiki/S-expression). The documentation
includes a [playground](https://tree-sitter.github.io/tree-sitter/playground) where you can write code, see the output
AST and query it with an S-expression.

**Try these out in the playground**

```ruby
# Code
class A
	def foo
    puts 'hi'
  end
end

A.new
A.foo
```

```scheme
(call method: (identifier) @function.name)
(constant) @constant
(method name: (identifier) @function.declaration)
[
  "def"
  "class"
  "end"
] @keyword
```

These parsers can work on ranges with-in a file. This means we can use [multiple
parsers](https://tree-sitter.github.io/tree-sitter/using-parsers#multi-language-documents) on a single source file for
example a file that includes [HTML](https://github.com/tree-sitter/tree-sitter-html),
[javascript](https://github.com/tree-sitter/tree-sitter-javascript),
[CSS](https://github.com/tree-sitter/tree-sitter-css), and [Liquid](https://github.com/Shopify/tree-sitter-liquid).

## How does tree-sitter Work?

<iframe width="560" height="315" src="https://www.youtube-nocookie.com/embed/Jes3bD6P0To" title="YouTube video player"
frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
allowfullscreen></iframe>

## How to build a parser

[tree-sitter documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers)

## How to interact with the AST

### What can we do with the AST?

> Tree-sitter is fast enough to parse an entire file on every keystroke so that the parsers can be embedded in text
> editors.

One common use case for tree-sitter is faster more semantically accurate [syntax
highlighting](https://tree-sitter.github.io/tree-sitter/syntax-highlighting). However that is not the main superpowers
of tree-sitter. Structural editing of source code is easier than ever with access to a syntax tree. I highly recommend
neovim users checkout [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter). At the time of writing this
project enables an array of novel features as well as performance improvements on existing vim features. There are other
plugins being built that allow even more control of the syntax tree like
[nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects) and
[nvim-treesitter-refactor](https://github.com/nvim-treesitter/nvim-treesitter-refactor).

#### Syntax Highlighting


#### Incremental selection


#### Indentation


#### Code Folding

### A note on Language Servers

[LSP](https://microsoft.github.io/language-server-protocol/)

