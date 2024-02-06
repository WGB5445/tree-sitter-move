/**
 * @file Rust grammar for tree-sitter
 * @author Maxim Sokolov <maxim0xff@gmail.com>
 * @author Max Brunsfeld
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// https://doc.rust-lang.org/reference/expressions.html#expression-precedence
const PREC = {
  call: 15,
  field: 14,
  try: 13,
  unary: 12,
  cast: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  range: 1,
  assign: 0,
  closure: -1,
};

const numeric_types = ["u8", "u16", "u32", "u64", "u128", "u256"];

const TOKEN_TREE_NON_SPECIAL_TOKENS = [
  "/",
  "_",
  "\\",
  "-",
  "=",
  "->",
  ",",
  ";",
  ":",
  "::",
  "!",
  "?",
  ".",
  "@",
  "*",
  "&",
  "#",
  "%",
  "^",
  "+",
  "<",
  ">",
  "|",
  "~",
];

const primitive_types = numeric_types.concat(["bool"]);

module.exports = grammar({
  name: "move",
  word: ($) => $.identifier,
  externals: ($) => [],
  rules: {
    source_file: ($) => seq(repeat($._statement)),
    identifier: (_) => /[_a-zA-Z][_a-zA-Z0-9]*/,
    _statement: ($) => choice($._declaration_statement),
    _declaration_statement: ($) => choice($.attribute_item, $.use_declaration),

    use_declaration: ($) => seq("use", field("argument", $._use_clause), ";"),

    _use_clause: ($) =>
      choice(
        $._path,
        $.use_as_clause,
        $.use_list,
        $.scoped_use_list,
        $.use_wildcard,
      ),

    use_as_clause: ($) =>
      seq(field("path", $._path), "as", field("alias", $.identifier)),

    use_list: ($) =>
      seq("{", sepBy(",", choice($._use_clause)), optional(","), "}"),

    scoped_use_list: ($) =>
      seq(field("path", optional($._path)), "::", field("list", $.use_list)),

    use_wildcard: ($) => seq(optional(seq($._path, "::")), "*"),

    attribute_item: ($) => seq("#", "[", $.attribute, "]"),
    attribute: ($) =>
      seq(
        $._path,
        optional(
          seq(
            "(",
            sepBy(
              ",",
              seq(
                field("arguments", $.identifier),
                seq("=", field("value", $.address_literal)),
              ),
            ),
            optional(","),
            ")",
          ),
        ),
      ),
    _path: ($) => seq(choice($.identifier, $.scoped_identifier)),
    scoped_identifier: ($) =>
      seq(
        field("path", optional(choice($._path))),
        "::",
        field("name", choice($.identifier)),
      ),
    address_literal: ($) => seq("@", choice($.hex_literal, $.identifier)),
    integer_literal: (_) =>
      token(
        seq(
          choice(/[0-9][0-9_]*/, /0x[0-9a-fA-F_]+/, /0b[01_]+/, /0o[0-7_]+/),
          optional(choice(...numeric_types)),
        ),
      ),
    hex_literal: (_) => token(seq(/0x[0-9a-fA-F_]+/)),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
