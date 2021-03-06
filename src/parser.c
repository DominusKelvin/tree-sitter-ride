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

#define LANGUAGE_VERSION 11
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  anon_sym_func = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_String = 7,
  anon_sym_Int = 8,
  anon_sym_Boolean = 9,
  anon_sym_ByteVector = 10,
  anon_sym_unit = 11,
  anon_sym_AliasTransaction = 12,
  anon_sym_BurnTransaction = 13,
  anon_sym_DataTransaction = 14,
  anon_sym_ExchangeTransaction = 15,
  anon_sym_GenesisTransaction = 16,
  anon_sym_InvokeScriptTransaction = 17,
  anon_sym_IssueTransaction = 18,
  anon_sym_LeaseCancelTransaction = 19,
  anon_sym_LeaseTransaction = 20,
  anon_sym_MassTransferTransaction = 21,
  anon_sym_ReissueTransaction = 22,
  anon_sym_SetScriptTransaction = 23,
  anon_sym_SetAssetScriptTransaction = 24,
  anon_sym_SponsorshipTransaction = 25,
  anon_sym_UpdateAssetInfoTransaction = 26,
  anon_sym_Address = 27,
  anon_sym_Alias = 28,
  anon_sym_DataEntry = 29,
  anon_sym_ScriptResult = 30,
  anon_sym_Invocation = 31,
  anon_sym_ScriptTransfer = 32,
  anon_sym_TransferSet = 33,
  anon_sym_WriteSet = 34,
  anon_sym_AssetInfo = 35,
  anon_sym_BlockInfo = 36,
  anon_sym_let = 37,
  anon_sym_EQ = 38,
  anon_sym_case = 39,
  anon_sym_EQ_GT = 40,
  anon_sym_if = 41,
  anon_sym_then = 42,
  anon_sym_elseif = 43,
  anon_sym_else = 44,
  anon_sym_ATCallable = 45,
  anon_sym_ATVerifier = 46,
  sym_identifier = 47,
  sym_number = 48,
  anon_sym_DASH = 49,
  anon_sym_BANG = 50,
  anon_sym_match = 51,
  anon_sym_LBRACK = 52,
  anon_sym_COMMA = 53,
  anon_sym_RBRACK = 54,
  anon_sym_PLUS = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_EQ_EQ = 58,
  anon_sym_BANG_EQ = 59,
  anon_sym_LT = 60,
  anon_sym_GT = 61,
  anon_sym_LT_EQ = 62,
  anon_sym_GT_EQ = 63,
  anon_sym_LBRACE_DASH_POUND = 64,
  anon_sym_POUND_DASH_RBRACE = 65,
  anon_sym_STDLIB_VERSION = 66,
  anon_sym_CONTENT_TYPE = 67,
  anon_sym_SCRIPT_TYPE = 68,
  anon_sym_EXPRESSION = 69,
  anon_sym_ACCOUNT = 70,
  anon_sym_ASSET = 71,
  sym_source_file = 72,
  sym__definition = 73,
  sym_function_definition = 74,
  sym_parameter_list = 75,
  sym_parameter_statement = 76,
  sym_block = 77,
  sym__type = 78,
  sym_basic_type = 79,
  sym_special_type = 80,
  sym_transaction_type = 81,
  sym_predefined_data_structures = 82,
  sym__statement = 83,
  sym_variable_declaration_statement = 84,
  sym__type_matching_statement = 85,
  sym__if_statement = 86,
  sym__expression = 87,
  sym__annotation = 88,
  sym_unary_expression = 89,
  sym_binary_expression = 90,
  sym_type_matching = 91,
  sym_list_declaration = 92,
  sym__arithmetic_operator = 93,
  sym__conditional_operator = 94,
  sym__directive = 95,
  sym__assignment_operator = 96,
  sym_directive_type = 97,
  sym_directive_value = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_parameter_list_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym__if_statement_repeat1 = 102,
  aux_sym_list_declaration_repeat1 = 103,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_String] = "String",
  [anon_sym_Int] = "Int",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_ByteVector] = "ByteVector",
  [anon_sym_unit] = "unit",
  [anon_sym_AliasTransaction] = "AliasTransaction",
  [anon_sym_BurnTransaction] = "BurnTransaction",
  [anon_sym_DataTransaction] = "DataTransaction",
  [anon_sym_ExchangeTransaction] = "ExchangeTransaction",
  [anon_sym_GenesisTransaction] = "GenesisTransaction",
  [anon_sym_InvokeScriptTransaction] = "InvokeScriptTransaction",
  [anon_sym_IssueTransaction] = "IssueTransaction",
  [anon_sym_LeaseCancelTransaction] = "LeaseCancelTransaction",
  [anon_sym_LeaseTransaction] = "LeaseTransaction",
  [anon_sym_MassTransferTransaction] = "MassTransferTransaction",
  [anon_sym_ReissueTransaction] = "ReissueTransaction",
  [anon_sym_SetScriptTransaction] = "SetScriptTransaction",
  [anon_sym_SetAssetScriptTransaction] = "SetAssetScriptTransaction",
  [anon_sym_SponsorshipTransaction] = "SponsorshipTransaction",
  [anon_sym_UpdateAssetInfoTransaction] = "UpdateAssetInfoTransaction",
  [anon_sym_Address] = "Address",
  [anon_sym_Alias] = "Alias",
  [anon_sym_DataEntry] = "DataEntry",
  [anon_sym_ScriptResult] = "ScriptResult",
  [anon_sym_Invocation] = "Invocation",
  [anon_sym_ScriptTransfer] = "ScriptTransfer",
  [anon_sym_TransferSet] = "TransferSet",
  [anon_sym_WriteSet] = "WriteSet",
  [anon_sym_AssetInfo] = "AssetInfo",
  [anon_sym_BlockInfo] = "BlockInfo",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_case] = "case",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_ATCallable] = "@Callable",
  [anon_sym_ATVerifier] = "@Verifier",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_match] = "match",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LBRACE_DASH_POUND] = "{-#",
  [anon_sym_POUND_DASH_RBRACE] = "#-}",
  [anon_sym_STDLIB_VERSION] = "STDLIB_VERSION",
  [anon_sym_CONTENT_TYPE] = "CONTENT_TYPE",
  [anon_sym_SCRIPT_TYPE] = "SCRIPT_TYPE",
  [anon_sym_EXPRESSION] = "EXPRESSION",
  [anon_sym_ACCOUNT] = "ACCOUNT",
  [anon_sym_ASSET] = "ASSET",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_statement] = "parameter_statement",
  [sym_block] = "block",
  [sym__type] = "_type",
  [sym_basic_type] = "basic_type",
  [sym_special_type] = "special_type",
  [sym_transaction_type] = "transaction_type",
  [sym_predefined_data_structures] = "predefined_data_structures",
  [sym__statement] = "_statement",
  [sym_variable_declaration_statement] = "variable_declaration_statement",
  [sym__type_matching_statement] = "_type_matching_statement",
  [sym__if_statement] = "_if_statement",
  [sym__expression] = "_expression",
  [sym__annotation] = "_annotation",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_type_matching] = "type_matching",
  [sym_list_declaration] = "list_declaration",
  [sym__arithmetic_operator] = "_arithmetic_operator",
  [sym__conditional_operator] = "_conditional_operator",
  [sym__directive] = "_directive",
  [sym__assignment_operator] = "_assignment_operator",
  [sym_directive_type] = "directive_type",
  [sym_directive_value] = "directive_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__if_statement_repeat1] = "_if_statement_repeat1",
  [aux_sym_list_declaration_repeat1] = "list_declaration_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_ByteVector] = anon_sym_ByteVector,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_AliasTransaction] = anon_sym_AliasTransaction,
  [anon_sym_BurnTransaction] = anon_sym_BurnTransaction,
  [anon_sym_DataTransaction] = anon_sym_DataTransaction,
  [anon_sym_ExchangeTransaction] = anon_sym_ExchangeTransaction,
  [anon_sym_GenesisTransaction] = anon_sym_GenesisTransaction,
  [anon_sym_InvokeScriptTransaction] = anon_sym_InvokeScriptTransaction,
  [anon_sym_IssueTransaction] = anon_sym_IssueTransaction,
  [anon_sym_LeaseCancelTransaction] = anon_sym_LeaseCancelTransaction,
  [anon_sym_LeaseTransaction] = anon_sym_LeaseTransaction,
  [anon_sym_MassTransferTransaction] = anon_sym_MassTransferTransaction,
  [anon_sym_ReissueTransaction] = anon_sym_ReissueTransaction,
  [anon_sym_SetScriptTransaction] = anon_sym_SetScriptTransaction,
  [anon_sym_SetAssetScriptTransaction] = anon_sym_SetAssetScriptTransaction,
  [anon_sym_SponsorshipTransaction] = anon_sym_SponsorshipTransaction,
  [anon_sym_UpdateAssetInfoTransaction] = anon_sym_UpdateAssetInfoTransaction,
  [anon_sym_Address] = anon_sym_Address,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_DataEntry] = anon_sym_DataEntry,
  [anon_sym_ScriptResult] = anon_sym_ScriptResult,
  [anon_sym_Invocation] = anon_sym_Invocation,
  [anon_sym_ScriptTransfer] = anon_sym_ScriptTransfer,
  [anon_sym_TransferSet] = anon_sym_TransferSet,
  [anon_sym_WriteSet] = anon_sym_WriteSet,
  [anon_sym_AssetInfo] = anon_sym_AssetInfo,
  [anon_sym_BlockInfo] = anon_sym_BlockInfo,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_ATCallable] = anon_sym_ATCallable,
  [anon_sym_ATVerifier] = anon_sym_ATVerifier,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LBRACE_DASH_POUND] = anon_sym_LBRACE_DASH_POUND,
  [anon_sym_POUND_DASH_RBRACE] = anon_sym_POUND_DASH_RBRACE,
  [anon_sym_STDLIB_VERSION] = anon_sym_STDLIB_VERSION,
  [anon_sym_CONTENT_TYPE] = anon_sym_CONTENT_TYPE,
  [anon_sym_SCRIPT_TYPE] = anon_sym_SCRIPT_TYPE,
  [anon_sym_EXPRESSION] = anon_sym_EXPRESSION,
  [anon_sym_ACCOUNT] = anon_sym_ACCOUNT,
  [anon_sym_ASSET] = anon_sym_ASSET,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_statement] = sym_parameter_statement,
  [sym_block] = sym_block,
  [sym__type] = sym__type,
  [sym_basic_type] = sym_basic_type,
  [sym_special_type] = sym_special_type,
  [sym_transaction_type] = sym_transaction_type,
  [sym_predefined_data_structures] = sym_predefined_data_structures,
  [sym__statement] = sym__statement,
  [sym_variable_declaration_statement] = sym_variable_declaration_statement,
  [sym__type_matching_statement] = sym__type_matching_statement,
  [sym__if_statement] = sym__if_statement,
  [sym__expression] = sym__expression,
  [sym__annotation] = sym__annotation,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_type_matching] = sym_type_matching,
  [sym_list_declaration] = sym_list_declaration,
  [sym__arithmetic_operator] = sym__arithmetic_operator,
  [sym__conditional_operator] = sym__conditional_operator,
  [sym__directive] = sym__directive,
  [sym__assignment_operator] = sym__assignment_operator,
  [sym_directive_type] = sym_directive_type,
  [sym_directive_value] = sym_directive_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__if_statement_repeat1] = aux_sym__if_statement_repeat1,
  [aux_sym_list_declaration_repeat1] = aux_sym_list_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByteVector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AliasTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BurnTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExchangeTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GenesisTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InvokeScriptTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IssueTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LeaseCancelTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LeaseTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MassTransferTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ReissueTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetScriptTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetAssetScriptTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SponsorshipTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpdateAssetInfoTransaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataEntry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScriptResult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Invocation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScriptTransfer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TransferSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WriteSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AssetInfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BlockInfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATCallable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATVerifier] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_DASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STDLIB_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTENT_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCRIPT_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXPRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCOUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSET] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_special_type] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction_type] = {
    .visible = true,
    .named = true,
  },
  [sym_predefined_data_structures] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__type_matching_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__if_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_matching] = {
    .visible = true,
    .named = true,
  },
  [sym_list_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__arithmetic_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__conditional_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(450);
      if (lookahead == '!') ADVANCE(520);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(452);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(526);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '/') ADVANCE(528);
      if (lookahead == ':') ADVANCE(454);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '=') ADVANCE(492);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'B') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(193);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'W') ADVANCE(336);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(275);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '}') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(526);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '/') ADVANCE(528);
      if (lookahead == ':') ADVANCE(454);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(244);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(446);
      if (lookahead == 'G') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(193);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'W') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(526);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '/') ADVANCE(528);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(519);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '}') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(519);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(535);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(448);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(530);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(529);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(529);
      if (lookahead == '>') ADVANCE(495);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(386);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == 'V') ADVANCE(192);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(352);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(539);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(538);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(283);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(540);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(537);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead == 'T') ADVANCE(348);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(542);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(346);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(347);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(351);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(355);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(356);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(358);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 80:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'V') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 'V') ADVANCE(177);
      END_STATE();
    case 83:
      if (lookahead == 'X') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'Y') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'Y') ADVANCE(47);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(496);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(499);
      END_STATE();
    case 200:
      if (lookahead == 'f') ADVANCE(302);
      END_STATE();
    case 201:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(458);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(521);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 243:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 326:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 327:
      if (lookahead == 'p') ADVANCE(409);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'v') ADVANCE(301);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 446:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 447:
      if (lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 448:
      if (lookahead == '}') ADVANCE(536);
      END_STATE();
    case 449:
      if (eof) ADVANCE(450);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(526);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '/') ADVANCE(528);
      if (lookahead == '<') ADVANCE(531);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(449)
      END_STATE();
    case 450:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ByteVector);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_AliasTransaction);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_BurnTransaction);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DataTransaction);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_ExchangeTransaction);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_GenesisTransaction);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_InvokeScriptTransaction);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_IssueTransaction);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LeaseCancelTransaction);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LeaseTransaction);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_MassTransferTransaction);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ReissueTransaction);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SetScriptTransaction);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SetAssetScriptTransaction);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SponsorshipTransaction);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_UpdateAssetInfoTransaction);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_Address);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_Alias);
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DataEntry);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ScriptResult);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_Invocation);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ScriptTransfer);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_TransferSet);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_WriteSet);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_AssetInfo);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BlockInfo);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(529);
      if (lookahead == '>') ADVANCE(495);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_case);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATCallable);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATVerifier);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(512);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(515);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(509);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(494);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(497);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(522);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(513);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(506);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(463);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(490);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(505);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(530);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_match);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(533);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(534);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_STDLIB_VERSION);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_CONTENT_TYPE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_SCRIPT_TYPE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_EXPRESSION);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_ACCOUNT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_ASSET);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 449},
  [6] = {.lex_state = 449},
  [7] = {.lex_state = 449},
  [8] = {.lex_state = 449},
  [9] = {.lex_state = 449},
  [10] = {.lex_state = 449},
  [11] = {.lex_state = 449},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 449},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 449},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_ByteVector] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_AliasTransaction] = ACTIONS(1),
    [anon_sym_BurnTransaction] = ACTIONS(1),
    [anon_sym_DataTransaction] = ACTIONS(1),
    [anon_sym_ExchangeTransaction] = ACTIONS(1),
    [anon_sym_GenesisTransaction] = ACTIONS(1),
    [anon_sym_InvokeScriptTransaction] = ACTIONS(1),
    [anon_sym_IssueTransaction] = ACTIONS(1),
    [anon_sym_LeaseCancelTransaction] = ACTIONS(1),
    [anon_sym_LeaseTransaction] = ACTIONS(1),
    [anon_sym_MassTransferTransaction] = ACTIONS(1),
    [anon_sym_ReissueTransaction] = ACTIONS(1),
    [anon_sym_SetScriptTransaction] = ACTIONS(1),
    [anon_sym_SetAssetScriptTransaction] = ACTIONS(1),
    [anon_sym_SponsorshipTransaction] = ACTIONS(1),
    [anon_sym_UpdateAssetInfoTransaction] = ACTIONS(1),
    [anon_sym_Address] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_DataEntry] = ACTIONS(1),
    [anon_sym_ScriptResult] = ACTIONS(1),
    [anon_sym_Invocation] = ACTIONS(1),
    [anon_sym_ScriptTransfer] = ACTIONS(1),
    [anon_sym_TransferSet] = ACTIONS(1),
    [anon_sym_WriteSet] = ACTIONS(1),
    [anon_sym_AssetInfo] = ACTIONS(1),
    [anon_sym_BlockInfo] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_ATCallable] = ACTIONS(1),
    [anon_sym_ATVerifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(1),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_STDLIB_VERSION] = ACTIONS(1),
    [anon_sym_CONTENT_TYPE] = ACTIONS(1),
    [anon_sym_SCRIPT_TYPE] = ACTIONS(1),
    [anon_sym_EXPRESSION] = ACTIONS(1),
    [anon_sym_ACCOUNT] = ACTIONS(1),
    [anon_sym_ASSET] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(107),
    [sym__directive] = STATE(97),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_unit,
    ACTIONS(17), 1,
      anon_sym_Alias,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(9), 4,
      anon_sym_String,
      anon_sym_Int,
      anon_sym_Boolean,
      anon_sym_ByteVector,
    STATE(89), 5,
      sym__type,
      sym_basic_type,
      sym_special_type,
      sym_transaction_type,
      sym_predefined_data_structures,
    ACTIONS(15), 9,
      anon_sym_Address,
      anon_sym_DataEntry,
      anon_sym_ScriptResult,
      anon_sym_Invocation,
      anon_sym_ScriptTransfer,
      anon_sym_TransferSet,
      anon_sym_WriteSet,
      anon_sym_AssetInfo,
      anon_sym_BlockInfo,
    ACTIONS(13), 15,
      anon_sym_AliasTransaction,
      anon_sym_BurnTransaction,
      anon_sym_DataTransaction,
      anon_sym_ExchangeTransaction,
      anon_sym_GenesisTransaction,
      anon_sym_InvokeScriptTransaction,
      anon_sym_IssueTransaction,
      anon_sym_LeaseCancelTransaction,
      anon_sym_LeaseTransaction,
      anon_sym_MassTransferTransaction,
      anon_sym_ReissueTransaction,
      anon_sym_SetScriptTransaction,
      anon_sym_SetAssetScriptTransaction,
      anon_sym_SponsorshipTransaction,
      anon_sym_UpdateAssetInfoTransaction,
  [57] = 8,
    ACTIONS(11), 1,
      anon_sym_unit,
    ACTIONS(17), 1,
      anon_sym_Alias,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(9), 4,
      anon_sym_String,
      anon_sym_Int,
      anon_sym_Boolean,
      anon_sym_ByteVector,
    STATE(95), 5,
      sym__type,
      sym_basic_type,
      sym_special_type,
      sym_transaction_type,
      sym_predefined_data_structures,
    ACTIONS(15), 9,
      anon_sym_Address,
      anon_sym_DataEntry,
      anon_sym_ScriptResult,
      anon_sym_Invocation,
      anon_sym_ScriptTransfer,
      anon_sym_TransferSet,
      anon_sym_WriteSet,
      anon_sym_AssetInfo,
      anon_sym_BlockInfo,
    ACTIONS(13), 15,
      anon_sym_AliasTransaction,
      anon_sym_BurnTransaction,
      anon_sym_DataTransaction,
      anon_sym_ExchangeTransaction,
      anon_sym_GenesisTransaction,
      anon_sym_InvokeScriptTransaction,
      anon_sym_IssueTransaction,
      anon_sym_LeaseCancelTransaction,
      anon_sym_LeaseTransaction,
      anon_sym_MassTransferTransaction,
      anon_sym_ReissueTransaction,
      anon_sym_SetScriptTransaction,
      anon_sym_SetAssetScriptTransaction,
      anon_sym_SponsorshipTransaction,
      anon_sym_UpdateAssetInfoTransaction,
  [111] = 6,
    ACTIONS(17), 1,
      anon_sym_Alias,
    ACTIONS(25), 1,
      anon_sym_unit,
    ACTIONS(9), 4,
      anon_sym_String,
      anon_sym_Int,
      anon_sym_Boolean,
      anon_sym_ByteVector,
    STATE(108), 5,
      sym__type,
      sym_basic_type,
      sym_special_type,
      sym_transaction_type,
      sym_predefined_data_structures,
    ACTIONS(15), 9,
      anon_sym_Address,
      anon_sym_DataEntry,
      anon_sym_ScriptResult,
      anon_sym_Invocation,
      anon_sym_ScriptTransfer,
      anon_sym_TransferSet,
      anon_sym_WriteSet,
      anon_sym_AssetInfo,
      anon_sym_BlockInfo,
    ACTIONS(13), 15,
      anon_sym_AliasTransaction,
      anon_sym_BurnTransaction,
      anon_sym_DataTransaction,
      anon_sym_ExchangeTransaction,
      anon_sym_GenesisTransaction,
      anon_sym_InvokeScriptTransaction,
      anon_sym_IssueTransaction,
      anon_sym_LeaseCancelTransaction,
      anon_sym_LeaseTransaction,
      anon_sym_MassTransferTransaction,
      anon_sym_ReissueTransaction,
      anon_sym_SetScriptTransaction,
      anon_sym_SetAssetScriptTransaction,
      anon_sym_SponsorshipTransaction,
      anon_sym_UpdateAssetInfoTransaction,
  [159] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(29), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [188] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(33), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [217] = 2,
    ACTIONS(37), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [243] = 2,
    ACTIONS(41), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [269] = 2,
    ACTIONS(45), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [295] = 2,
    ACTIONS(49), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [321] = 2,
    ACTIONS(53), 3,
      anon_sym_else,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 18,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_then,
      anon_sym_elseif,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [347] = 10,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(59), 3,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    STATE(48), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [385] = 10,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_number,
    STATE(73), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 3,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    STATE(43), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [423] = 10,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_number,
    STATE(68), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(81), 3,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    STATE(49), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [461] = 10,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      sym_number,
    STATE(67), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(89), 3,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    STATE(42), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [499] = 8,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_number,
    STATE(57), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(36), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [529] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
  [549] = 8,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_number,
    STATE(64), 1,
      sym_block,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(39), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [579] = 5,
    STATE(21), 1,
      sym__arithmetic_operator,
    STATE(26), 1,
      sym__conditional_operator,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [602] = 5,
    STATE(21), 1,
      sym__arithmetic_operator,
    STATE(33), 1,
      sym__conditional_operator,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(111), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [625] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(6), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [649] = 3,
    ACTIONS(119), 1,
      anon_sym_then,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [667] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(17), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [691] = 6,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_match,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(52), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [715] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(51), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [739] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(56), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [763] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(44), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [787] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(20), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [811] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(5), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [835] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(19), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [859] = 6,
    ACTIONS(67), 1,
      anon_sym_match,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_number,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(50), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [883] = 3,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 8,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [901] = 6,
    ACTIONS(135), 1,
      anon_sym_match,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_number,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(55), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [925] = 6,
    ACTIONS(135), 1,
      anon_sym_match,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(54), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_type_matching,
      sym_list_declaration,
  [949] = 6,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_func,
    ACTIONS(182), 1,
      anon_sym_let,
    STATE(113), 1,
      sym__annotation,
    ACTIONS(185), 2,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
    STATE(35), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration_statement,
      aux_sym_source_file_repeat1,
  [972] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_let,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
  [989] = 6,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_func,
    ACTIONS(194), 1,
      anon_sym_let,
    STATE(113), 1,
      sym__annotation,
    ACTIONS(196), 2,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
    STATE(35), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration_statement,
      aux_sym_source_file_repeat1,
  [1012] = 6,
    ACTIONS(192), 1,
      anon_sym_func,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym__annotation,
    ACTIONS(196), 2,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
    STATE(37), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration_statement,
      aux_sym_source_file_repeat1,
  [1035] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_let,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
  [1052] = 5,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      anon_sym_case,
    ACTIONS(206), 1,
      anon_sym_if,
    STATE(46), 5,
      sym__statement,
      sym_variable_declaration_statement,
      sym__type_matching_statement,
      sym__if_statement,
      aux_sym_block_repeat1,
  [1072] = 5,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(204), 1,
      anon_sym_case,
    ACTIONS(206), 1,
      anon_sym_if,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(46), 5,
      sym__statement,
      sym_variable_declaration_statement,
      sym__type_matching_statement,
      sym__if_statement,
      aux_sym_block_repeat1,
  [1092] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(79), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1108] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(57), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1124] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1140] = 5,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(204), 1,
      anon_sym_case,
    ACTIONS(206), 1,
      anon_sym_if,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(41), 5,
      sym__statement,
      sym_variable_declaration_statement,
      sym__type_matching_statement,
      sym__if_statement,
      aux_sym_block_repeat1,
  [1160] = 5,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(219), 1,
      anon_sym_case,
    ACTIONS(222), 1,
      anon_sym_if,
    STATE(46), 5,
      sym__statement,
      sym_variable_declaration_statement,
      sym__type_matching_statement,
      sym__if_statement,
      aux_sym_block_repeat1,
  [1180] = 5,
    ACTIONS(194), 1,
      anon_sym_let,
    ACTIONS(204), 1,
      anon_sym_case,
    ACTIONS(206), 1,
      anon_sym_if,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(40), 5,
      sym__statement,
      sym_variable_declaration_statement,
      sym__type_matching_statement,
      sym__if_statement,
      aux_sym_block_repeat1,
  [1200] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1216] = 3,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(71), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1232] = 5,
    ACTIONS(229), 1,
      anon_sym_elseif,
    ACTIONS(231), 1,
      anon_sym_else,
    STATE(21), 1,
      sym__arithmetic_operator,
    STATE(75), 1,
      aux_sym__if_statement_repeat1,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1251] = 5,
    ACTIONS(229), 1,
      anon_sym_elseif,
    ACTIONS(233), 1,
      anon_sym_else,
    STATE(21), 1,
      sym__arithmetic_operator,
    STATE(80), 1,
      aux_sym__if_statement_repeat1,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1270] = 2,
    STATE(24), 1,
      sym__arithmetic_operator,
    ACTIONS(31), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1281] = 1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_let,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
      anon_sym_LBRACE_DASH_POUND,
  [1290] = 2,
    STATE(24), 1,
      sym__arithmetic_operator,
    ACTIONS(27), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1301] = 3,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(24), 1,
      sym__arithmetic_operator,
    ACTIONS(239), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1314] = 3,
    ACTIONS(241), 1,
      anon_sym_then,
    STATE(21), 1,
      sym__arithmetic_operator,
    ACTIONS(101), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1327] = 1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_let,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
  [1335] = 1,
    ACTIONS(51), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1343] = 1,
    ACTIONS(47), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1351] = 1,
    ACTIONS(43), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1359] = 1,
    ACTIONS(39), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1367] = 1,
    ACTIONS(35), 5,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1375] = 2,
    STATE(103), 1,
      sym_directive_value,
    ACTIONS(243), 4,
      sym_number,
      anon_sym_EXPRESSION,
      anon_sym_ACCOUNT,
      anon_sym_ASSET,
  [1385] = 1,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_let,
      anon_sym_ATCallable,
      anon_sym_ATVerifier,
  [1393] = 2,
    STATE(63), 1,
      sym_directive_type,
    ACTIONS(245), 3,
      anon_sym_STDLIB_VERSION,
      anon_sym_CONTENT_TYPE,
      anon_sym_SCRIPT_TYPE,
  [1402] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(72), 2,
      sym_parameter_statement,
      aux_sym_parameter_list_repeat1,
  [1413] = 1,
    ACTIONS(79), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1420] = 1,
    ACTIONS(71), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1427] = 1,
    ACTIONS(227), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1434] = 3,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(66), 2,
      sym_parameter_statement,
      aux_sym_parameter_list_repeat1,
  [1445] = 1,
    ACTIONS(253), 4,
      sym_number,
      anon_sym_EXPRESSION,
      anon_sym_ACCOUNT,
      anon_sym_ASSET,
  [1452] = 3,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(72), 2,
      sym_parameter_statement,
      aux_sym_parameter_list_repeat1,
  [1463] = 1,
    ACTIONS(57), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_case,
      anon_sym_if,
  [1470] = 3,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_list_declaration_repeat1,
  [1480] = 3,
    ACTIONS(229), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    STATE(85), 1,
      aux_sym__if_statement_repeat1,
  [1490] = 1,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      sym_identifier,
  [1496] = 3,
    ACTIONS(268), 1,
      sym_number,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_list_declaration_repeat1,
  [1506] = 3,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_list_declaration_repeat1,
  [1516] = 3,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_list_declaration_repeat1,
  [1526] = 3,
    ACTIONS(229), 1,
      anon_sym_elseif,
    ACTIONS(277), 1,
      anon_sym_else,
    STATE(85), 1,
      aux_sym__if_statement_repeat1,
  [1536] = 2,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(279), 2,
      sym_number,
      anon_sym_RBRACK,
  [1544] = 3,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_list_declaration_repeat1,
  [1554] = 1,
    ACTIONS(285), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      sym_identifier,
  [1560] = 1,
    ACTIONS(287), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      sym_identifier,
  [1566] = 3,
    ACTIONS(289), 1,
      anon_sym_elseif,
    ACTIONS(292), 1,
      anon_sym_else,
    STATE(85), 1,
      aux_sym__if_statement_repeat1,
  [1576] = 1,
    ACTIONS(294), 3,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
      sym_identifier,
  [1582] = 1,
    ACTIONS(271), 2,
      sym_number,
      anon_sym_RBRACK,
  [1587] = 2,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
  [1594] = 1,
    ACTIONS(21), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1599] = 2,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [1606] = 2,
    ACTIONS(302), 1,
      anon_sym_elseif,
    ACTIONS(304), 1,
      anon_sym_else,
  [1613] = 2,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(38), 1,
      sym__directive,
  [1620] = 2,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [1627] = 2,
    ACTIONS(306), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym__assignment_operator,
  [1634] = 1,
    ACTIONS(308), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1639] = 2,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_parameter_list,
  [1646] = 2,
    ACTIONS(3), 1,
      anon_sym_LBRACE_DASH_POUND,
    STATE(92), 1,
      sym__directive,
  [1653] = 2,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_parameter_list,
  [1660] = 2,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym__assignment_operator,
  [1667] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [1671] = 1,
    ACTIONS(316), 1,
      sym_identifier,
  [1675] = 1,
    ACTIONS(318), 1,
      anon_sym_POUND_DASH_RBRACE,
  [1679] = 1,
    ACTIONS(320), 1,
      anon_sym_POUND_DASH_RBRACE,
  [1683] = 1,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [1687] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [1691] = 1,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [1695] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [1699] = 1,
    ACTIONS(330), 1,
      anon_sym_EQ_GT,
  [1703] = 1,
    ACTIONS(332), 1,
      anon_sym_EQ,
  [1707] = 1,
    ACTIONS(334), 1,
      anon_sym_func,
  [1711] = 1,
    ACTIONS(336), 1,
      sym_identifier,
  [1715] = 1,
    ACTIONS(338), 1,
      sym_identifier,
  [1719] = 1,
    ACTIONS(340), 1,
      anon_sym_func,
  [1723] = 1,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
  [1727] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [1731] = 1,
    ACTIONS(346), 1,
      anon_sym_EQ,
  [1735] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [1739] = 1,
    ACTIONS(350), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 499,
  [SMALL_STATE(17)] = 529,
  [SMALL_STATE(18)] = 549,
  [SMALL_STATE(19)] = 579,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 625,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 667,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 715,
  [SMALL_STATE(26)] = 739,
  [SMALL_STATE(27)] = 763,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 811,
  [SMALL_STATE(30)] = 835,
  [SMALL_STATE(31)] = 859,
  [SMALL_STATE(32)] = 883,
  [SMALL_STATE(33)] = 901,
  [SMALL_STATE(34)] = 925,
  [SMALL_STATE(35)] = 949,
  [SMALL_STATE(36)] = 972,
  [SMALL_STATE(37)] = 989,
  [SMALL_STATE(38)] = 1012,
  [SMALL_STATE(39)] = 1035,
  [SMALL_STATE(40)] = 1052,
  [SMALL_STATE(41)] = 1072,
  [SMALL_STATE(42)] = 1092,
  [SMALL_STATE(43)] = 1108,
  [SMALL_STATE(44)] = 1124,
  [SMALL_STATE(45)] = 1140,
  [SMALL_STATE(46)] = 1160,
  [SMALL_STATE(47)] = 1180,
  [SMALL_STATE(48)] = 1200,
  [SMALL_STATE(49)] = 1216,
  [SMALL_STATE(50)] = 1232,
  [SMALL_STATE(51)] = 1251,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1281,
  [SMALL_STATE(54)] = 1290,
  [SMALL_STATE(55)] = 1301,
  [SMALL_STATE(56)] = 1314,
  [SMALL_STATE(57)] = 1327,
  [SMALL_STATE(58)] = 1335,
  [SMALL_STATE(59)] = 1343,
  [SMALL_STATE(60)] = 1351,
  [SMALL_STATE(61)] = 1359,
  [SMALL_STATE(62)] = 1367,
  [SMALL_STATE(63)] = 1375,
  [SMALL_STATE(64)] = 1385,
  [SMALL_STATE(65)] = 1393,
  [SMALL_STATE(66)] = 1402,
  [SMALL_STATE(67)] = 1413,
  [SMALL_STATE(68)] = 1420,
  [SMALL_STATE(69)] = 1427,
  [SMALL_STATE(70)] = 1434,
  [SMALL_STATE(71)] = 1445,
  [SMALL_STATE(72)] = 1452,
  [SMALL_STATE(73)] = 1463,
  [SMALL_STATE(74)] = 1470,
  [SMALL_STATE(75)] = 1480,
  [SMALL_STATE(76)] = 1490,
  [SMALL_STATE(77)] = 1496,
  [SMALL_STATE(78)] = 1506,
  [SMALL_STATE(79)] = 1516,
  [SMALL_STATE(80)] = 1526,
  [SMALL_STATE(81)] = 1536,
  [SMALL_STATE(82)] = 1544,
  [SMALL_STATE(83)] = 1554,
  [SMALL_STATE(84)] = 1560,
  [SMALL_STATE(85)] = 1566,
  [SMALL_STATE(86)] = 1576,
  [SMALL_STATE(87)] = 1582,
  [SMALL_STATE(88)] = 1587,
  [SMALL_STATE(89)] = 1594,
  [SMALL_STATE(90)] = 1599,
  [SMALL_STATE(91)] = 1606,
  [SMALL_STATE(92)] = 1613,
  [SMALL_STATE(93)] = 1620,
  [SMALL_STATE(94)] = 1627,
  [SMALL_STATE(95)] = 1634,
  [SMALL_STATE(96)] = 1639,
  [SMALL_STATE(97)] = 1646,
  [SMALL_STATE(98)] = 1653,
  [SMALL_STATE(99)] = 1660,
  [SMALL_STATE(100)] = 1667,
  [SMALL_STATE(101)] = 1671,
  [SMALL_STATE(102)] = 1675,
  [SMALL_STATE(103)] = 1679,
  [SMALL_STATE(104)] = 1683,
  [SMALL_STATE(105)] = 1687,
  [SMALL_STATE(106)] = 1691,
  [SMALL_STATE(107)] = 1695,
  [SMALL_STATE(108)] = 1699,
  [SMALL_STATE(109)] = 1703,
  [SMALL_STATE(110)] = 1707,
  [SMALL_STATE(111)] = 1711,
  [SMALL_STATE(112)] = 1715,
  [SMALL_STATE(113)] = 1719,
  [SMALL_STATE(114)] = 1723,
  [SMALL_STATE(115)] = 1727,
  [SMALL_STATE(116)] = 1731,
  [SMALL_STATE(117)] = 1735,
  [SMALL_STATE(118)] = 1739,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(65),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_statement, 1),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(76),
  [11] = {.count = 1, .reusable = false}, SHIFT(86),
  [13] = {.count = 1, .reusable = true}, SHIFT(84),
  [15] = {.count = 1, .reusable = true}, SHIFT(83),
  [17] = {.count = 1, .reusable = false}, SHIFT(83),
  [19] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_statement, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_statement, 2),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_statement, 2),
  [25] = {.count = 1, .reusable = true}, SHIFT(86),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_list_declaration, 2),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_list_declaration, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_type_matching, 3),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_type_matching, 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_list_declaration, 3),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_list_declaration, 3),
  [55] = {.count = 1, .reusable = true}, SHIFT(47),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 8),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 8),
  [61] = {.count = 1, .reusable = false}, SHIFT(48),
  [63] = {.count = 1, .reusable = true}, SHIFT(48),
  [65] = {.count = 1, .reusable = true}, SHIFT(29),
  [67] = {.count = 1, .reusable = false}, SHIFT(111),
  [69] = {.count = 1, .reusable = true}, SHIFT(78),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 7),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 7),
  [75] = {.count = 1, .reusable = false}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(43),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 6),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 6),
  [83] = {.count = 1, .reusable = false}, SHIFT(49),
  [85] = {.count = 1, .reusable = true}, SHIFT(49),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 5),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 5),
  [91] = {.count = 1, .reusable = false}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, SHIFT(42),
  [95] = {.count = 1, .reusable = false}, SHIFT(36),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration_statement, 4),
  [101] = {.count = 1, .reusable = true}, SHIFT(21),
  [103] = {.count = 1, .reusable = false}, SHIFT(39),
  [105] = {.count = 1, .reusable = true}, SHIFT(39),
  [107] = {.count = 1, .reusable = true}, SHIFT(26),
  [109] = {.count = 1, .reusable = false}, SHIFT(26),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = false}, SHIFT(33),
  [115] = {.count = 1, .reusable = false}, SHIFT(6),
  [117] = {.count = 1, .reusable = true}, SHIFT(6),
  [119] = {.count = 1, .reusable = true}, SHIFT(25),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [125] = {.count = 1, .reusable = false}, SHIFT(17),
  [127] = {.count = 1, .reusable = true}, SHIFT(17),
  [129] = {.count = 1, .reusable = false}, SHIFT(52),
  [131] = {.count = 1, .reusable = true}, SHIFT(52),
  [133] = {.count = 1, .reusable = true}, SHIFT(34),
  [135] = {.count = 1, .reusable = false}, SHIFT(118),
  [137] = {.count = 1, .reusable = true}, SHIFT(74),
  [139] = {.count = 1, .reusable = false}, SHIFT(51),
  [141] = {.count = 1, .reusable = true}, SHIFT(51),
  [143] = {.count = 1, .reusable = false}, SHIFT(56),
  [145] = {.count = 1, .reusable = true}, SHIFT(56),
  [147] = {.count = 1, .reusable = false}, SHIFT(44),
  [149] = {.count = 1, .reusable = true}, SHIFT(44),
  [151] = {.count = 1, .reusable = false}, SHIFT(32),
  [153] = {.count = 1, .reusable = true}, SHIFT(20),
  [155] = {.count = 1, .reusable = false}, SHIFT(5),
  [157] = {.count = 1, .reusable = true}, SHIFT(5),
  [159] = {.count = 1, .reusable = false}, SHIFT(22),
  [161] = {.count = 1, .reusable = true}, SHIFT(19),
  [163] = {.count = 1, .reusable = false}, SHIFT(50),
  [165] = {.count = 1, .reusable = true}, SHIFT(50),
  [167] = {.count = 1, .reusable = true}, SHIFT(91),
  [169] = {.count = 1, .reusable = false}, SHIFT(55),
  [171] = {.count = 1, .reusable = true}, SHIFT(55),
  [173] = {.count = 1, .reusable = false}, SHIFT(54),
  [175] = {.count = 1, .reusable = true}, SHIFT(54),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(115),
  [194] = {.count = 1, .reusable = true}, SHIFT(117),
  [196] = {.count = 1, .reusable = true}, SHIFT(114),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [202] = {.count = 1, .reusable = true}, SHIFT(7),
  [204] = {.count = 1, .reusable = true}, SHIFT(112),
  [206] = {.count = 1, .reusable = true}, SHIFT(30),
  [208] = {.count = 1, .reusable = true}, SHIFT(62),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym__type_matching_statement, 6),
  [212] = {.count = 1, .reusable = true}, SHIFT(60),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [225] = {.count = 1, .reusable = true}, SHIFT(9),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 9),
  [229] = {.count = 1, .reusable = true}, SHIFT(28),
  [231] = {.count = 1, .reusable = false}, SHIFT(13),
  [233] = {.count = 1, .reusable = false}, SHIFT(15),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__directive, 4),
  [237] = {.count = 1, .reusable = true}, SHIFT(88),
  [239] = {.count = 1, .reusable = true}, SHIFT(24),
  [241] = {.count = 1, .reusable = true}, SHIFT(31),
  [243] = {.count = 1, .reusable = true}, SHIFT(102),
  [245] = {.count = 1, .reusable = true}, SHIFT(71),
  [247] = {.count = 1, .reusable = true}, SHIFT(116),
  [249] = {.count = 1, .reusable = true}, SHIFT(2),
  [251] = {.count = 1, .reusable = true}, SHIFT(109),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_directive_type, 1),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(2),
  [260] = {.count = 1, .reusable = true}, SHIFT(81),
  [262] = {.count = 1, .reusable = true}, SHIFT(61),
  [264] = {.count = 1, .reusable = false}, SHIFT(12),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_basic_type, 1),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_declaration_repeat1, 2),
  [273] = {.count = 1, .reusable = true}, SHIFT(8),
  [275] = {.count = 1, .reusable = true}, SHIFT(11),
  [277] = {.count = 1, .reusable = false}, SHIFT(14),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_declaration_repeat1, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(87),
  [283] = {.count = 1, .reusable = true}, SHIFT(58),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_predefined_data_structures, 1),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_transaction_type, 1),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym__if_statement_repeat1, 2), SHIFT_REPEAT(28),
  [292] = {.count = 1, .reusable = false}, REDUCE(aux_sym__if_statement_repeat1, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_special_type, 1),
  [296] = {.count = 1, .reusable = true}, REDUCE(aux_sym__if_statement_repeat1, 5),
  [298] = {.count = 1, .reusable = false}, REDUCE(aux_sym__if_statement_repeat1, 5),
  [300] = {.count = 1, .reusable = true}, SHIFT(45),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym__if_statement_repeat1, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(aux_sym__if_statement_repeat1, 3),
  [306] = {.count = 1, .reusable = true}, SHIFT(16),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_statement, 3),
  [310] = {.count = 1, .reusable = true}, SHIFT(70),
  [312] = {.count = 1, .reusable = true}, SHIFT(18),
  [314] = {.count = 1, .reusable = true}, SHIFT(96),
  [316] = {.count = 1, .reusable = true}, SHIFT(106),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_directive_value, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(53),
  [322] = {.count = 1, .reusable = true}, SHIFT(23),
  [324] = {.count = 1, .reusable = true}, SHIFT(4),
  [326] = {.count = 1, .reusable = true}, SHIFT(110),
  [328] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [330] = {.count = 1, .reusable = true}, SHIFT(27),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__annotation, 4),
  [336] = {.count = 1, .reusable = true}, SHIFT(93),
  [338] = {.count = 1, .reusable = true}, SHIFT(105),
  [340] = {.count = 1, .reusable = true}, SHIFT(100),
  [342] = {.count = 1, .reusable = true}, SHIFT(101),
  [344] = {.count = 1, .reusable = true}, SHIFT(98),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [348] = {.count = 1, .reusable = true}, SHIFT(104),
  [350] = {.count = 1, .reusable = true}, SHIFT(90),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ride(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
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
