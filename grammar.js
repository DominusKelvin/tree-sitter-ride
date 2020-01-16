module.exports = grammar({
  name: 'ride',
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(
      $._directive,
      $._directive,
      $._directive,
      repeat($._definition)
    ),

    _definition: $ => choice(
      $.function_definition,
      $.variable_declaration_statement
      // TODO: Other kind of definition
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameter_list,
      $._assignment_operator,
      choice(
        $.block,
        $._expression
      )
    ),

    parameter_list: $ => seq(
      '(',
      optional(
        repeat($.parameter_statement)
      ),
      ')'
    ),

    parameter_statement: $ => seq(
      $.identifier,
      optional(':'),
      optional($._type)
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _type: $ => choice(
      $.basic_type,
      $.special_type,
      $.transaction_type,
      $.predefined_data_structures
    ),

    basic_type: $ => choice(
      'String',
      'Int',
      'Boolean',
      'ByteVector'
    ),

    special_type: $ => choice(
      'unit'
    ),

    transaction_type: $ => choice(
      'AliasTransaction',
      'BurnTransaction',
      'DataTransaction',
      'ExchangeTransaction',
      'GenesisTransaction',
      'InvokeScriptTransaction',
      'IssueTransaction',
      'LeaseCancelTransaction',
      'LeaseTransaction',
      'MassTransferTransaction',
      'ReissueTransaction',
      'SetScriptTransaction',
      'SetAssetScriptTransaction',
      'SponsorshipTransaction',
      'UpdateAssetInfoTransaction'
    ),

    predefined_data_structures: $ => choice(
      'Address',
      'Alias',
      'DataEntry',
      'ScriptResult',
      'Invocation',
      'ScriptTransfer',
      'TransferSet',
      'WriteSet',
      'AssetInfo',
      'BlockInfo'
    ),

    _statement: $ => choice(
      $.variable_declaration_statement,
      $._type_matching_statement,
      $._if_statement
      // TODO: Other kind of statements
    ),

    variable_declaration_statement: $ => seq(
      'let',
      $.identifier,
      '=',
      $._expression
    ),

    _type_matching_statement: $ => seq(
      'case',
      $.identifier,
      ':',
      $._type,
      '=>',
      $._expression
    ),

    _if_statement: $ => seq(
        'if',
        choice(
          seq($._expression, $._conditional_operator, $._expression),
          $.identifier
        ),
        'then',
        $._expression,
        optional(
          repeat(
            seq(
              'else if',
              choice(
                seq($._expression, $._conditional_operator, $._expression),
                $.identifier
              ),
              $.identifier
            )
          )
        ),
        'else',
        optional(
          choice(
            $._expression,
            $.block
          )
        )
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.type_matching,
      $.list_declaration,
      $.unary_expression,
      $.binary_expression
      // TODO: Other kinds of expressions
    ),

    _annotation: $ => choice(
      seq('@Callable', '(', $.identifier, ')'),
      seq('@Verifier', '(', $.identifier, ')')
    ),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/,

    unary_expression: $ => prec(2,choice(
      seq('-', $._expression),
      seq('!', $._expression)
    )
  ),

    binary_expression: $ => choice(
      prec.left(1, seq($._expression, $._arithmetic_operator, $._expression)),
    ),

    type_matching: $ => seq(
      'match',
      $.identifier,
      $.block
    ),

    list_declaration: $ => seq(
      '[',
      optional(
        repeat(
          seq(
            $.number,
            optional(',')
          )
        )
      ),
      ']'
    ),

    _arithmetic_operator: $ => choice(
      '+',
      '-',
      '*',
      '/'
    ),

    _conditional_operator: $ => choice(
      '==',
      '!=',
      '<',
      '>',
      '<=',
      '>='
    ),

    _directive: $ => seq(
      '{-#',
      $.directive_type,
      $.directive_value,
      '#-}'
    ),

    _assignment_operator: $ => '=',

    directive_type: $ => choice(
      'STDLIB_VERSION',
      'CONTENT_TYPE',
      'SCRIPT_TYPE'
    ),

    directive_value: $ => choice(
      $.number,
      'EXPRESSION',
      'ACCOUNT',
      'ASSET'
    )

  }
})
