/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'nunjucks',
  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $._newline,
      $.import,
      $.if,
    ),
    _newline: $ => choice('\n', '\r\n', '\r'),
    _block_start: $ => /\{%\-?\s+/,
    _block_end: $ => /\s+\-?%\}/,
    _comment_start: $ => seq('{#', optional('-'), /\s+/),
    _comment_end: $ => seq(/\s+/, optional('-'), '#}'),

    alias: $ => seq('as', field('name', $.identifier)),

    with_context: $ => 'withContext',

    template_path: $ => /".*\.njk"/,

    logical_operator: $ => choice('and', 'or', 'not', 'and not', 'or not'),

    math_operator: $ => choice('+', '-', '*', '/', '%'),

    comparators: $ => choice('==', '===', '!=', '!===', '>', '>=', '<', '<='),

    condition: $ => seq(
      optional('('),
      field('left', $.identifier),
      field('operator', $.comparators),
      field('right', choice($.identifier, $.number)),
      optional(')'),
    ),

    import_target: $ => seq(
      field('target_name', $.identifier),
      optional($.alias),
      optional(',')
    ),

    comment: $ => seq(
      $._comment_start,
      /.*/,
      $._comment_end,
    ),

    import: $ => choice(
      seq(
        $._block_start,
        'import',
        $.template_path,
        optional($.alias),
        $._block_end
      ),
      seq(
        $._block_start,
        'from',
        $.template_path,
        'import',
        repeat($.import_target),
        optional($.with_context),
        $._block_end
      ),
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    number: $ => /\d+/,

    if: $ => seq(
      $._block_start,
      'if',
      repeat(
        seq(
          choice(
            field('target', $.identifier),
            field('condition', $.condition),
          ),
          optional($.logical_operator),
        )
      ),
      $._block_end,
    ),
  },
});
