// Code generated by tools/generate-diagnostic-metadata.cpp. DO NOT EDIT.
// source: src/quick-lint-js/diag/diagnostic-types-2.h

// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#pragma once

#include <quick-lint-js/diag/diagnostic.h>

namespace quick_lint_js {
// clang-format off
#define QLJS_X_DIAG_TYPE_NAMES \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Field_Cannot_Have_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Methods_Cannot_Be_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Methods_Cannot_Be_Generators) \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Property_Not_Allowed_In_Interface) \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Property_Not_Allowed_In_Non_Abstract_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_Abstract_Methods_Cannot_Contain_Bodies) \
  QLJS_DIAG_TYPE_NAME(Diag_Adjacent_JSX_Without_Parent) \
  QLJS_DIAG_TYPE_NAME(Diag_Arrow_Parameter_With_Type_Annotation_Requires_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Question_In_Type_Expression_Should_Be_Void) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_Before_Variable_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_Makes_Condition_Constant) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_To_Const_Global_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_To_Const_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_To_Imported_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_To_Const_Variable_Before_Its_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Assignment_To_Undeclared_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Await_Operator_Outside_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_Await_Followed_By_Arrow_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Async_Static_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Async_Export_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Cyclic_TypeScript_Type_Definition) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Function_Cannot_Be_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Function_Cannot_Be_Generator) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Function_Cannot_Have_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Missing_Declare_Or_Export) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Non_Declaring_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_DTS_Var_Cannot_Have_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Class_Fields_Cannot_Have_Initializers) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Class_Methods_Cannot_Be_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Class_Methods_Cannot_Be_Generators) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Class_Methods_Cannot_Contain_Bodies) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Abstract_Class_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Class_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Function_Cannot_Be_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Function_Cannot_Be_Generator) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Function_Cannot_Have_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Function_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Keyword_Is_Not_Allowed_Inside_Declare_Namespace) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Namespace_Cannot_Contain_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Namespace_Cannot_Import_Module) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Var_Cannot_Have_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_Declare_Var_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_After_Class_Member_Modifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_Before_And_After_Export_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_Not_Allowed_On_Class_Static_Block) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_In_TypeScript_Interface) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_On_Abstract_Class_Member) \
  QLJS_DIAG_TYPE_NAME(Diag_Decorator_On_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Function_Async_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Big_Int_Literal_Contains_Decimal_Point) \
  QLJS_DIAG_TYPE_NAME(Diag_Big_Int_Literal_Contains_Exponent) \
  QLJS_DIAG_TYPE_NAME(Diag_C_Style_For_Loop_Is_Missing_Third_Component) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Assign_To_Loop_Variable_In_For_Of_Or_In_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Access_Private_Identifier_Outside_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Assign_To_Variable_Named_Async_In_For_Of_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Declare_Await_In_Async_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Declare_Class_Named_Let) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Declare_Variable_Named_Let_With_Let) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Declare_Variable_With_Keyword_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Declare_Yield_In_Generator_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Export_Default_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Export_Let) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Export_Variable_Named_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Import_Let) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Import_Variable_Named_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Import_From_Unquoted_Module) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Refer_To_Private_Variable_Without_Object) \
  QLJS_DIAG_TYPE_NAME(Diag_Cannot_Update_Variable_During_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Catch_Without_Try) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Accessor_On_Getter_Or_Setter) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Accessor_On_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Conflicting_Modifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Modifier_Missing_On_Method_With_TypeScript_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Modifier_Missing_On_TypeScript_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Modifier_Must_Preceed_Other_Modifier) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Modifier_Not_Allowed_On_TypeScript_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Statement_Not_Allowed_In_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_Character_Disallowed_In_Identifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Comma_Not_Allowed_After_Spread_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_Comma_Not_Allowed_Before_First_Generic_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_Comma_Not_Allowed_Between_Class_Methods) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Json_Syntax_Error) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Global_Groups_Group_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Global_Groups_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Globals_Descriptor_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Globals_Descriptor_Shadowable_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Globals_Descriptor_Writable_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Config_Globals_Type_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_Depth_Limit_Exceeded) \
  QLJS_DIAG_TYPE_NAME(Diag_Dot_Not_Allowed_After_Generic_Arguments_In_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Dot_Dot_Is_Not_An_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Duplicated_Cases_In_Switch_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Fallthrough_Without_Comment_In_Switch) \
  QLJS_DIAG_TYPE_NAME(Diag_Else_Has_No_If) \
  QLJS_DIAG_TYPE_NAME(Diag_Equals_Does_Not_Distribute_Over_Or) \
  QLJS_DIAG_TYPE_NAME(Diag_Escaped_Character_Disallowed_In_Identifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Escaped_Code_Point_In_Identifier_Out_Of_Range) \
  QLJS_DIAG_TYPE_NAME(Diag_Escaped_Code_Point_In_Unicode_Out_Of_Range) \
  QLJS_DIAG_TYPE_NAME(Diag_Escaped_Hyphen_Not_Allowed_In_JSX_Tag) \
  QLJS_DIAG_TYPE_NAME(Diag_Extra_Comma_Not_Allowed_Between_Arguments) \
  QLJS_DIAG_TYPE_NAME(Diag_Extra_Comma_Not_Allowed_Between_Enum_Members) \
  QLJS_DIAG_TYPE_NAME(Diag_Misleading_Comma_Operator_In_Index_Operation) \
  QLJS_DIAG_TYPE_NAME(Diag_Misleading_Comma_Operator_In_Conditional_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Empty_Paren_After_Control_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_As_Before_Imported_Namespace_Alias) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Comma_To_Separate_Object_Literal_Entries) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Expression_Before_Newline) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Expression_For_Switch_Case) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Expression_Before_Semicolon) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_From_And_Module_Specifier) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_From_Before_Module_Specifier) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Hex_Digits_In_Unicode_Escape) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Left_Curly) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Right_Paren_For_Function_Call) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parentheses_Around_Do_While_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parenthesis_Around_Do_While_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parentheses_Around_If_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parenthesis_Around_If_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parentheses_Around_Switch_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parenthesis_Around_Switch_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parentheses_Around_While_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parenthesis_Around_While_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parentheses_Around_With_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Parenthesis_Around_With_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Variable_Name_For_Catch) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Variable_Name_For_Import_As) \
  QLJS_DIAG_TYPE_NAME(Diag_Exporting_Requires_Default) \
  QLJS_DIAG_TYPE_NAME(Diag_Exporting_Requires_Curlies) \
  QLJS_DIAG_TYPE_NAME(Diag_Exporting_String_Name_Only_Allowed_For_Export_From) \
  QLJS_DIAG_TYPE_NAME(Diag_Finally_Without_Try) \
  QLJS_DIAG_TYPE_NAME(Diag_Function_Statement_Not_Allowed_In_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_Generator_Function_Star_Belongs_After_Keyword_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Generator_Function_Star_Belongs_Before_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Getter_Or_Setter_Cannot_Have_TypeScript_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Multiple_Commas_In_Generic_Parameter_List) \
  QLJS_DIAG_TYPE_NAME(Diag_In_Disallowed_In_C_Style_For_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Indexing_Requires_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Expression_Left_Of_Assignment) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Hex_Escape_Sequence) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Lone_Literal_In_Object_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Quotes_Around_String_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Rhs_For_Dot_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Utf_8_Sequence) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Attribute_Has_Wrong_Capitalization) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Attribute_Renamed_By_React) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Event_Attribute_Should_Be_Camel_Case) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Not_Allowed_In_TypeScript) \
  QLJS_DIAG_TYPE_NAME(Diag_Keywords_Cannot_Contain_Escape_Sequences) \
  QLJS_DIAG_TYPE_NAME(Diag_Label_Named_Await_Not_Allowed_In_Async_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Legacy_Octal_Literal_May_Not_Be_Big_Int) \
  QLJS_DIAG_TYPE_NAME(Diag_Legacy_Octal_Literal_May_Not_Contain_Underscores) \
  QLJS_DIAG_TYPE_NAME(Diag_Let_With_No_Bindings) \
  QLJS_DIAG_TYPE_NAME(Diag_Lexical_Declaration_Not_Allowed_In_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_Functions_Or_Methods_Should_Not_Have_Arrow_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Methods_Should_Not_Use_Function_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Mismatched_JSX_Tags) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Array_Close) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Arrow_Operator_In_Arrow_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Arrow_Function_Parameter_List) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Catch_Clause) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Do_While_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Finally_Clause) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_For_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_If_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Switch_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_Try_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_TypeScript_Interface) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_TypeScript_Namespace) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Body_For_While_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Catch_Or_Finally_For_Try_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Catch_Variable_Between_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Comma_Between_Object_Literal_Entries) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Comma_Between_Generic_Parameters) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Comma_Between_Variable_Declarations) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Colon_In_Conditional_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Condition_For_If_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Condition_For_While_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Condition_For_Switch_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Dots_For_Attribute_Spread) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Equal_After_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Export_For_Function_With_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Expression_Between_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_For_Loop_Header) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_For_Loop_Rhs_Or_Components_After_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_For_Loop_Rhs_Or_Components_After_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Function_Parameter_List) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Function_Body) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Header_Of_For_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Initializer_In_Const_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Key_For_Object_Entry) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Class_Member_After_Decorator) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Class_Method_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Expression_After_Angle_Type_Assertion) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Name_In_Function_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Name_In_Class_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Name_Of_Exported_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Name_Of_Exported_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Name_Or_Parentheses_For_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_New_In_Abstract_Constructor_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Operand_For_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Parameter_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Separator_Between_Object_Type_Entries) \
  QLJS_DIAG_TYPE_NAME(Diag_Redundant_Delete_Statement_On_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_If_After_Else) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Operator_Between_Expression_And_Arrow_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Parentheses_Around_Exponent_With_Unary_Lhs) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Parentheses_Around_Self_Invoked_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Parentheses_Around_Unary_Lhs_Of_Exponent) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Property_Name_For_Dot_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Abstract_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Declare_Class_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_TypeScript_Method_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Field) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Index_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_After_Interface_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_Between_For_Loop_Condition_And_Update) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Semicolon_Between_For_Loop_Init_And_Condition) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Token_After_Export) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Type_Between_Intersection_Or_Union) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_TypeScript_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Value_For_Object_Literal_Entry) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Variable_Name_In_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_While_And_Condition_For_Do_While_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Between_Async_And_Parameter_List) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Between_Async_And_Function_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Between_Modifier_And_Method_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_Abstract_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_Export_Declare) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_Interface_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_Namespace_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_Type_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Before_Assignment_Assertion_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Before_Definite_Assignment_Assertion) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Before_Extends_In_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_Before_Generic_Arguments_In_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Newline_Not_Allowed_After_In_Out_Const_Modifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Number_Literal_Contains_Consecutive_Underscores) \
  QLJS_DIAG_TYPE_NAME(Diag_Number_Literal_Contains_Trailing_Underscores) \
  QLJS_DIAG_TYPE_NAME(Diag_Octal_Literal_May_Not_Have_Exponent) \
  QLJS_DIAG_TYPE_NAME(Diag_Octal_Literal_May_Not_Have_Decimal) \
  QLJS_DIAG_TYPE_NAME(Diag_Object_Literal_Default_In_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Optional_Arrow_Parameter_Requires_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_Optional_Arrow_Parameter_With_Type_Annotation_Requires_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_Optional_Parameter_Cannot_Have_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_Optional_Parameter_Cannot_Be_Followed_By_Required_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_Integer_Literal_Will_Lose_Precision) \
  QLJS_DIAG_TYPE_NAME(Diag_Parameter_Decorator_In_Abstract_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Parameter_Decorator_In_Declare_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_Parameter_Decorator_In_Non_Class_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_Parameter_Decorator_Must_Preceed_Modifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Private_Properties_Are_Not_Allowed_In_Object_Literals) \
  QLJS_DIAG_TYPE_NAME(Diag_Readonly_Static_Field) \
  QLJS_DIAG_TYPE_NAME(Diag_Redeclaration_Of_Global_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Redeclaration_Of_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Redundant_Await) \
  QLJS_DIAG_TYPE_NAME(Diag_Regexp_Literal_Flags_Cannot_Contain_Unicode_Escapes) \
  QLJS_DIAG_TYPE_NAME(Diag_Return_Statement_Returns_Nothing) \
  QLJS_DIAG_TYPE_NAME(Diag_Spread_Parameter_Cannot_Be_This) \
  QLJS_DIAG_TYPE_NAME(Diag_Statement_Before_First_Switch_Case) \
  QLJS_DIAG_TYPE_NAME(Diag_Stray_Comma_In_Let_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Stray_Comma_In_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_String_Namespace_Name_Is_Only_Allowed_With_Declare_Module) \
  QLJS_DIAG_TYPE_NAME(Diag_String_Namespace_Name_Not_Allowed_In_Namespace) \
  QLJS_DIAG_TYPE_NAME(Diag_This_Parameter_Must_Be_First) \
  QLJS_DIAG_TYPE_NAME(Diag_This_Parameter_Not_Allowed_In_Arrow_Functions) \
  QLJS_DIAG_TYPE_NAME(Diag_This_Parameter_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_This_Parameter_Not_Allowed_When_Destructuring) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Abstract_Class_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Abstract_Static_Property) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Angle_Type_Assertion_Not_Allowed_In_Tsx) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Accessor_Cannot_Be_Optional) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_As_Const_With_Non_Literal_Typeable) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_As_Type_Assertion_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_As_Or_Satisfies_Used_For_Parameter_Type_Annotation) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assertion_Signature_Only_Allowed_As_Return_Types) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Fields_Not_Allowed_In_Declare_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Fields_Not_Allowed_In_Interfaces) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Fields_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Field_Cannot_Have_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Field_Must_Have_A_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Assignment_Asserted_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Catch_Type_Annotation_Must_Be_Any) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Class_Implements_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Delete_Cannot_Delete_Variables) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Definite_Assignment_Assertion_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Definite_Assignment_Assertion_On_Const) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Enum_Auto_Member_Needs_Initializer_After_Computed) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Enum_Computed_Name_Must_Be_Simple) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Enum_Is_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Enum_Member_Name_Cannot_Be_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Enum_Value_Must_Be_Constant) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Export_As_Namespace_Is_Not_Allowed_In_Namespace_Or_Module) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Export_As_Namespace_Is_Only_Allowed_In_TypeScript_Definition_File) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Export_Equal_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Implements_Must_Be_After_Extends) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Import_Alias_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Index_Signature_Cannot_Be_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Index_Signature_Needs_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Infer_Outside_Conditional_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Infer_Requires_Parentheses) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Function_Overload_Signature_Must_Have_Same_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Function_Overload_Signature_Must_Not_Have_Generator_Star) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Generic_Arrow_Needs_Comma_In_JSX_Mode) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Generic_Parameter_List_Is_Empty) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Generics_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Global_Block_Must_Be_Declare) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Global_Block_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Global_Block_Not_Allowed_In_Namespace) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Export_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Predicate_Only_Allowed_As_Return_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Inline_Type_Export_Not_Allowed_In_Type_Only_Export) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Inline_Type_Import_Not_Allowed_In_Type_Only_Import) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Interfaces_Cannot_Contain_Static_Blocks) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Generic_Less_Less_Not_Split) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Declare_Class_Cannot_Contain_Static_Block_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Declare_Field_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Declare_Field_Cannot_Use_Private_Identifier) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Declare_Field_Cannot_Be_Assignment_Asserted) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Declare_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Interfaces_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Missing_Name_And_Colon_In_Named_Tuple_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Missing_Name_In_Named_Tuple_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Named_Tuple_Element_Question_After_Name_And_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Named_Tuple_Element_Question_After_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Named_Tuple_Element_Spread_Before_Name_And_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Named_Tuple_Element_Spread_Before_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Namespace_Cannot_Export_Default) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Namespaces_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Non_Null_Assertion_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Optional_Parameters_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Optional_Properties_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Optional_Tuple_Element_Cannot_Follow_Spread_Element) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Overload_Signature_Access_Specifier_Mismatch) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Decorator_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Property_Cannot_Be_Destructured) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Property_Cannot_Be_Rest) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Property_Not_Allowed_In_Declare_Class) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Property_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Parameter_Property_Only_Allowed_In_Class_Constructor) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Private_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Protected_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Public_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Readonly_Fields_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Readonly_Method) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Readonly_In_Type_Needs_Array_Or_Tuple_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Required_Tuple_Element_After_Optional_Element) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Requires_Space_Between_Greater_And_Equal) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Satisfies_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Annotation_In_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Annotations_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Alias_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Only_Import_Cannot_Import_Default_And_Named) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Type_Import_Not_Allowed_In_JavaScript) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Spread_Element_Cannot_Be_Optional) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Style_Const_Field) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Variance_Keywords_In_Wrong_Order) \
  QLJS_DIAG_TYPE_NAME(Diag_TypeScript_Variance_Keyword_Repeated) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Block_Comment) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Class_Block) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Code_Block) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Interface_Block) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Identifier_Escape_Sequence) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Object_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Regexp_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_String_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_JSX_String_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unclosed_Template) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Arrow_After_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Arrow_After_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Backslash_In_Identifier) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Case_Outside_Switch_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Characters_In_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Control_Character) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Characters_In_Binary_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Characters_In_Octal_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Characters_In_Hex_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Default_Outside_Switch_Statement) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Greater_In_JSX_Text) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Literal_In_Parameter_List) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Right_Curly_In_JSX_Text) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Question_In_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Question_When_Destructuring) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Semicolon_After_Decorator) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Semicolon_After_Overload_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Semicolon_In_C_Style_For_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Semicolon_In_For_In_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Semicolon_In_For_Of_Loop) \
  QLJS_DIAG_TYPE_NAME(Diag_Unopened_Block_Comment) \
  QLJS_DIAG_TYPE_NAME(Diag_Unused_Variable_Shadows) \
  QLJS_DIAG_TYPE_NAME(Diag_No_Digits_In_Binary_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_No_Digits_In_Hex_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_No_Digits_In_Octal_Number) \
  QLJS_DIAG_TYPE_NAME(Diag_Non_Null_Assertion_Not_Allowed_In_Parameter) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Hash_Character) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Bom_Before_Shebang) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Identifier_In_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Token) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Token_After_Export) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Token_In_Variable_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Unmatched_Indexing_Bracket) \
  QLJS_DIAG_TYPE_NAME(Diag_Unmatched_Parenthesis) \
  QLJS_DIAG_TYPE_NAME(Diag_Unmatched_Right_Curly) \
  QLJS_DIAG_TYPE_NAME(Diag_Use_Of_Undeclared_Parameter_In_Assertion_Signature) \
  QLJS_DIAG_TYPE_NAME(Diag_Use_Of_Undeclared_Parameter_In_Type_Predicate) \
  QLJS_DIAG_TYPE_NAME(Diag_Use_Of_Undeclared_Type) \
  QLJS_DIAG_TYPE_NAME(Diag_Use_Of_Undeclared_Variable) \
  QLJS_DIAG_TYPE_NAME(Diag_Variable_Used_Before_Declaration) \
  QLJS_DIAG_TYPE_NAME(Diag_Function_Call_Before_Declaration_In_Block_Scope) \
  QLJS_DIAG_TYPE_NAME(Diag_Import_Cannot_Have_Declare_Keyword) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Field_Cannot_Be_Accessor) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Field_Cannot_Be_Declare) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Fields_Cannot_Have_Initializers) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Methods_Cannot_Be_Async) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Methods_Cannot_Be_Generators) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Methods_Cannot_Contain_Bodies) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Properties_Cannot_Be_Explicitly_Public) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Properties_Cannot_Be_Private) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Properties_Cannot_Be_Protected) \
  QLJS_DIAG_TYPE_NAME(Diag_Interface_Properties_Cannot_Be_Static) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Break) \
  QLJS_DIAG_TYPE_NAME(Diag_Invalid_Continue) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_String_Comp_Contains_Lower) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_String_Comp_Contains_Upper) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Strict_Comp_Against_Array_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Comp_Against_Arrow_Function) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Comp_Against_Class_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Strict_Comp_Against_Empty_Array_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Comp_Against_Object_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Comp_Against_Regular_Expression_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Function_Parameter_Is_Parenthesized) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Comma_After_Class_Field) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Colon_After_Generic_Definition) \
  QLJS_DIAG_TYPE_NAME(Diag_Pointless_Nullish_Coalescing_Operator) \
  QLJS_DIAG_TYPE_NAME(Diag_Bang_Equal_Equal_Interpreted_As_Non_Null_Assertion) \
  QLJS_DIAG_TYPE_NAME(Diag_Unexpected_Space_Between_Bang_And_Equal_Equal) \
  QLJS_DIAG_TYPE_NAME(Diag_JSX_Prop_Is_Missing_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Keyword_Contains_Escape_Characters) \
  QLJS_DIAG_TYPE_NAME(Diag_Access_Specifier_Must_Precede_Other_Modifiers) \
  QLJS_DIAG_TYPE_NAME(Diag_Spread_Must_Precede_Expression) \
  QLJS_DIAG_TYPE_NAME(Diag_Spread_Must_Precede_Variable_Name) \
  QLJS_DIAG_TYPE_NAME(Diag_Variable_Assigned_To_Self_Is_Noop) \
  QLJS_DIAG_TYPE_NAME(Diag_Xor_Used_As_Exponentiation) \
  QLJS_DIAG_TYPE_NAME(Diag_Expected_Expression_In_Template_Literal) \
  QLJS_DIAG_TYPE_NAME(Diag_Missing_Comma_Between_Array_Elements) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Generator_On_Getter_Or_Setter) \
  QLJS_DIAG_TYPE_NAME(Diag_Class_Async_On_Getter_Or_Setter) \
  QLJS_DIAG_TYPE_NAME(Diag_Multiple_Export_Defaults) \
  QLJS_DIAG_TYPE_NAME(Diag_Unintuitive_Bitshift_Precedence) \
  /* END */
// clang-format on

inline constexpr int Diag_Type_Count = 455;

extern const Diagnostic_Info all_diagnostic_infos[Diag_Type_Count];
}

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
