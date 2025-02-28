// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#include <algorithm>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iterator>
#include <quick-lint-js/array.h>
#include <quick-lint-js/cli/cli-location.h>
#include <quick-lint-js/container/concat.h>
#include <quick-lint-js/container/padded-string.h>
#include <quick-lint-js/container/string-view.h>
#include <quick-lint-js/diag-collector.h>
#include <quick-lint-js/diag-matcher.h>
#include <quick-lint-js/diag/diagnostic-types.h>
#include <quick-lint-js/fe/language.h>
#include <quick-lint-js/fe/parse.h>
#include <quick-lint-js/parse-support.h>
#include <quick-lint-js/port/char8.h>
#include <quick-lint-js/spy-visitor.h>
#include <string>
#include <string_view>
#include <vector>

using ::testing::ElementsAreArray;

namespace quick_lint_js {
namespace {
class Test_Parse_TypeScript_Var : public Test_Parse_Expression {};

TEST_F(Test_Parse_TypeScript_Var, let_can_have_type_annotation) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(u8"let x: C;"_sv, no_diags,
                                                   typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                          }));
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({let_noinit_decl(u8"x"_sv)}));
    EXPECT_THAT(p.variable_uses, ElementsAreArray({u8"C"}));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"let x: C = init;"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_use",          // init
                              "visit_variable_declaration",  // x
                          }));
    EXPECT_THAT(p.variable_uses, ElementsAreArray({u8"C", u8"init"}));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"let [x, y, z]: Array = init;"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_variable_use",          // init
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // Array
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                              "visit_variable_declaration",  // y
                              "visit_variable_declaration",  // z
                          }));
    EXPECT_THAT(p.variable_uses, ElementsAreArray({u8"init", u8"Array"}));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"let {p1, p2: x, p3 = y}: T;"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // T
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // p1
                              "visit_variable_declaration",  // p2
                              "visit_variable_use",          // y
                              "visit_variable_declaration",  // p3
                          }));
    EXPECT_THAT(p.variable_uses, ElementsAreArray({u8"T", u8"y"}));
  }
}

TEST_F(Test_Parse_TypeScript_Var, for_loop_init_can_have_type_annotation) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"for (let i: N = 0; ;);"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_for_scope",       //
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // N
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // i
                              "visit_exit_for_scope",
                          }));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       for_of_loop_variable_can_have_type_annotation) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"for (let x: C of xs);"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_for_scope",       //
                              "visit_variable_use",          // xs
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                              "visit_exit_for_scope",
                          }));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"for (const x: C of xs);"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_for_scope",       //
                              "visit_variable_use",          // xs
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                              "visit_exit_for_scope",
                          }));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       for_in_loop_variable_can_have_type_annotation) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"for (let x: C in xs);"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_for_scope",       //
                              "visit_variable_use",          // xs
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                              "visit_exit_for_scope",
                          }));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"for (const x: C in xs);"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_for_scope",       //
                              "visit_variable_use",          // xs
                              "visit_enter_type_scope",      // :
                              "visit_variable_type_use",     // C
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                              "visit_exit_for_scope",
                          }));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       catch_variable_can_have_any_or_unknown_or_star_type_annotation) {
  for (String8 type : {u8"*", u8"any", u8"unknown"}) {
    Padded_String code(concat(u8"try { } catch (e: "_sv, type, u8") {} "_sv));
    SCOPED_TRACE(code);
    Spy_Visitor p = test_parse_and_visit_statement(code.string_view(), no_diags,
                                                   typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_block_scope",     // try {
                              "visit_exit_block_scope",      // } try
                              "visit_enter_block_scope",     // catch {
                              "visit_variable_declaration",  // e
                              "visit_exit_block_scope",      // } catch
                          }));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       catch_variable_cannot_have_arbitrary_type_annotation) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"try { } catch (e: SomeType) {} "_sv,  //
        u8"                  ^^^^^^^^ Diag_TypeScript_Catch_Type_Annotation_Must_Be_Any"_diag,  //
        typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_block_scope",     // try {
                              "visit_exit_block_scope",      // } try
                              "visit_enter_block_scope",     // catch {
                              "visit_variable_declaration",  // e
                              "visit_exit_block_scope",      // } catch
                          }))
        << "SomeType should be ignored (no visit_variable_type_use or "
           "visit_enter_type_scope/visit_exit_type_scope)";
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       catch_variable_type_annotations_are_not_allowed_in_javascript) {
  for (String8 type : {u8"*", u8"any", u8"unknown", u8"SomeType"}) {
    Test_Parser p(concat(u8"try { } catch (e: "_sv, type, u8") {} "_sv),
                  javascript_options, capture_diags);
    SCOPED_TRACE(p.code);
    p.parse_and_visit_statement();
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_block_scope",     // try {
                              "visit_exit_block_scope",      // } try
                              "visit_enter_block_scope",     // catch {
                              "visit_variable_declaration",  // e
                              "visit_exit_block_scope",      // } catch
                          }))
        << "type should be ignored (no visit_variable_type_use or "
           "visit_enter_type_scope/visit_exit_type_scope)";
    assert_diagnostics(
        p.code, p.errors,
        {
            u8"                ^ Diag_TypeScript_Type_Annotations_Not_Allowed_In_JavaScript"_diag,
        });
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       definite_assignment_assertion_is_not_allowed_in_javascript) {
  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_Not_Allowed_In_JavaScript.
  test_parse_and_visit_statement(
      u8"let x!: string;"_sv,  //
      u8"      ^ Diag_TypeScript_Type_Annotations_Not_Allowed_In_JavaScript.type_colon"_diag,
      javascript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation.
  test_parse_and_visit_statement(
      u8"let x!;"_sv,  //
      u8"     ^ Diag_TypeScript_Definite_Assignment_Assertion_Not_Allowed_In_JavaScript.definite_assignment_assertion"_diag,
      javascript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation or
  // Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer.
  test_parse_and_visit_statement(
      u8"let x! = null;"_sv,  //
      u8"     ^ Diag_TypeScript_Definite_Assignment_Assertion_Not_Allowed_In_JavaScript.definite_assignment_assertion"_diag,
      javascript_options);
}

TEST_F(Test_Parse_TypeScript_Var,
       let_or_var_can_have_definite_assignment_assertion) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"let x!: string;"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                          }));
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({let_noinit_decl(u8"x"_sv)}));
  }

  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"var x!: string;"_sv, no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_exit_type_scope",       //
                              "visit_variable_declaration",  // x
                          }));
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({var_noinit_decl(u8"x"_sv)}));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       definite_assignment_asserted_variable_cannot_have_initializer) {
  {
    Spy_Visitor p = test_parse_and_visit_statement(
        u8"let x!: string = '';"_sv,  //
        u8"               ^ Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer.equal\n"_diag
        u8"     ^ .definite_assignment_assertion"_diag,
        typescript_options);
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({let_init_decl(u8"x"_sv)}));
  }
}

TEST_F(Test_Parse_TypeScript_Var,
       definite_assignment_asserted_variable_requires_type_annotation) {
  test_parse_and_visit_statement(
      u8"let x!;"_sv,  //
      u8"     ^ Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation.definite_assignment_assertion"_diag,
      typescript_options);
  test_parse_and_visit_statement(
      u8"var x, y!, z;"_sv,  //
      u8"        ^ Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation.definite_assignment_assertion"_diag,
      typescript_options);
}

TEST_F(Test_Parse_TypeScript_Var,
       const_cannot_have_definite_assignment_assertion) {
  // Should not also report Diag_Missing_Initializer_In_Const_Declaration.
  test_parse_and_visit_statement(
      u8"const x!: string;"_sv,  //
      u8"       ^ Diag_TypeScript_Definite_Assignment_Assertion_On_Const.definite_assignment_assertion\n"_diag
      u8"^^^^^ .const_keyword"_diag,
      typescript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer.
  test_parse_and_visit_statement(
      u8"const x!: string = '';"_sv,  //
      u8"       ^ Diag_TypeScript_Definite_Assignment_Assertion_On_Const.definite_assignment_assertion\n"_diag
      u8"^^^^^ .const_keyword"_diag,
      typescript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation.
  test_parse_and_visit_statement(
      u8"const x!;"_sv,  //
      u8"       ^ Diag_TypeScript_Definite_Assignment_Assertion_On_Const.definite_assignment_assertion\n"_diag
      u8"^^^^^ .const_keyword"_diag,
      typescript_options);
}

TEST_F(Test_Parse_TypeScript_Var,
       declared_variable_cannot_have_definite_assignment_assertion) {
  test_parse_and_visit_statement(
      u8"declare let x!: string;"_sv,  //
      u8"             ^ Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context.definite_assignment_assertion\n"_diag
      u8"^^^^^^^ .declare_keyword"_diag,
      typescript_options);

  // Should not also report Diag_Missing_Initializer_In_Const_Declaration.
  test_parse_and_visit_statement(
      u8"declare const x!: string;"_sv,  //
      u8"               ^ Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context.definite_assignment_assertion\n"_diag
      u8"^^^^^^^ .declare_keyword"_diag,
      typescript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_Without_Type_Annotation.
  test_parse_and_visit_statement(
      u8"declare let x!;"_sv,  //
      u8"             ^ Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context.definite_assignment_assertion\n"_diag
      u8"^^^^^^^ .declare_keyword"_diag,
      typescript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer.
  test_parse_and_visit_statement(
      u8"declare const x!: string = '';"_sv,  //
      u8"               ^ Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context.definite_assignment_assertion\n"_diag
      u8"^^^^^^^ .declare_keyword"_diag,
      typescript_options);

  // Should not also report
  // Diag_TypeScript_Definite_Assignment_Assertion_With_Initializer.
  test_parse_and_visit_statement(
      u8"declare let x!: string = '';"_sv,  //
      u8"                       ^ Diag_Declare_Var_Cannot_Have_Initializer.equal"_diag,
      u8"             ^ Diag_TypeScript_Definite_Assignment_Assertion_In_Ambient_Context.definite_assignment_assertion\n"_diag
      u8"^^^^^^^ .declare_keyword"_diag,
      typescript_options);
}

TEST_F(Test_Parse_TypeScript_Var,
       newline_not_allowed_before_definite_assignment_assertion_bang) {
  {
    Spy_Visitor p = test_parse_and_visit_module(u8"let x\n!expr();"_sv,
                                                no_diags, typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_variable_declaration",  // x
                              "visit_variable_use",          // expr
                              "visit_end_of_module",         //
                          }));
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({let_noinit_decl(u8"x"_sv)}));
    EXPECT_THAT(p.variable_uses, ElementsAreArray({u8"expr"_sv}));
  }

  {
    Spy_Visitor p = test_parse_and_visit_module(
        u8"let x\n!: string;"_sv,
        u8"       ^ Diag_Newline_Not_Allowed_Before_Definite_Assignment_Assertion.definite_assignment_assertion"_diag,
        typescript_options);
    EXPECT_THAT(p.visits, ElementsAreArray({
                              "visit_enter_type_scope",      // :
                              "visit_exit_type_scope",       // :
                              "visit_variable_declaration",  // x
                              "visit_end_of_module",         //
                          }));
    EXPECT_THAT(p.variable_declarations,
                ElementsAreArray({let_noinit_decl(u8"x"_sv)}));
  }
}
}
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
