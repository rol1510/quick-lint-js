// Code generated by tools/compile-translations.go. DO NOT EDIT.
// source: po/*.po

// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/assert.h>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 5;
constexpr std::uint16_t translation_table_mapping_table_size = 298;
constexpr std::size_t translation_table_string_table_size = 59496;
constexpr std::size_t translation_table_locale_table_size = 37;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {235, "redundant delete statement on variable"},
          {283, "use of undeclared variable: {0}"},
          {54, "a 'for' loop"},
          {249, "unclosed code block; expected '}' by end of file"},
          {29, "BigInt literal contains decimal point"},
          {136, "function declared here"},
          {0, ""},
          {279, "unmatched parenthesis"},
          {119, "expected parameter for arrow function, but got a literal instead"},
          {0, ""},
          {0, ""},
          {0, ""},
          {6, "\"globals\" must be an object"},
          {96, "computer enum member name must be a simple string"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {223, "new variable shadows existing variable"},
          {230, "octal number literal has no digits"},
          {91, "classes cannot be named 'let'"},
          {179, "missing body for class"},
          {284, "variable already declared here"},
          {0, ""},
          {261, "unexpected 'default' outside switch statement"},
          {226, "number literal contains trailing underscore(s)"},
          {53, "a 'do-while' loop"},
          {38, "TypeScript call signatures are only allowed in classes"},
          {212, "missing property name between '.' and '.'"},
          {274, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {176, "missing body for 'switch' statement"},
          {128, "extra ',' is not allowed between function call arguments"},
          {0, ""},
          {0, ""},
          {205, "missing operand for operator"},
          {207, "missing parameters for arrow function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {214, "missing semicolon after field"},
          {41, "TypeScript interface methods cannot be marked 'async'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {192, "missing condition for while statement"},
          {0, ""},
          {286, "variable declared here"},
          {0, ""},
          {0, ""},
          {28, "'}' is not allowed directly in JSX text; write {{'}'} instead"},
          {259, "unexpected 'case' outside switch statement"},
          {257, "unexpected '@'"},
          {89, "class methods cannot be optional"},
          {237, "return statement returns nothing (undefined)"},
          {0, ""},
          {0, ""},
          {43, "TypeScript interface methods cannot contain a body"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {130, "for-in loop expression cannot have semicolons"},
          {99, "continue can only be used inside of a loop"},
          {63, "array started here"},
          {116, "expected expression before newline"},
          {181, "missing body for finally clause"},
          {178, "missing body for catch clause"},
          {220, "missing variable name"},
          {218, "missing semicolon between init and condition parts of for loop"},
          {280, "unopened block comment"},
          {244, "this {0} looks fishy"},
          {0, ""},
          {0, ""},
          {132, "forwarding exports are only allowed in export-from"},
          {209, "missing parentheses around operand of '{0}'"},
          {273, "unexpected token"},
          {0, ""},
          {171, "missing 'if' after 'else'"},
          {253, "unclosed regexp literal"},
          {262, "unexpected 'finally' without 'try'"},
          {0, ""},
          {221, "misspelled React attribute; write '{1}' instead"},
          {103, "do-while statement starts here"},
          {225, "number literal contains consecutive underscores"},
          {0, ""},
          {0, ""},
          {35, "RegExp literal flags cannot contain Unicode escapes"},
          {265, "unexpected characters in hex literal"},
          {83, "cannot import 'let'"},
          {236, "remove '{0}' to update an existing variable"},
          {82, "cannot export variable named keyword '{0}'"},
          {0, ""},
          {133, "free {1} and {0} {1} {2}"},
          {26, "'{0}' is not allowed on methods"},
          {0, ""},
          {245, "this {1} looks fishy"},
          {247, "unclosed block comment"},
          {165, "mismatched JSX tags; expected '</{1}>'"},
          {199, "missing name for class method"},
          {0, ""},
          {21, "'readonly static' is not allowed; write 'static readonly' instead"},
          {189, "missing comparison; '{1}' does not extend to the right side of '{0}'"},
          {216, "missing semicolon after statement"},
          {102, "do-while loop needs parentheses around condition"},
          {81, "cannot export variable named 'let'"},
          {0, ""},
          {0, ""},
          {69, "assignment to imported variable"},
          {0, ""},
          {27, "'{0}' operator cannot be used before '**' without parentheses"},
          {0, ""},
          {256, "unexpected '#'"},
          {0, ""},
          {185, "missing body for {1:headlinese}"},
          {78, "cannot declare 'yield' inside generator function"},
          {88, "children end here"},
          {129, "for loop needs an iterable, or condition and update clauses"},
          {0, ""},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {0, ""},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {169, "missing '<>' and '</>' to enclose multiple children"},
          {85, "cannot reference private variables without object; use 'this.'"},
          {0, ""},
          {0, ""},
          {206, "missing operator between expression and arrow function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {8, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {271, "unexpected literal in parameter list; expected parameter name"},
          {227, "object literal started here"},
          {30, "BigInt literal contains exponent"},
          {228, "octal literal may not have decimal"},
          {0, ""},
          {260, "unexpected 'catch' without 'try'"},
          {250, "unclosed identifier escape sequence"},
          {173, "missing arrow operator for arrow function"},
          {139, "generator function '*' belongs after keyword function"},
          {148, "index signatures require a value type"},
          {0, ""},
          {0, ""},
          {107, "event attributes must be camelCase: '{1}'"},
          {23, "'with' statement"},
          {1, "\"global-groups\" entries must be strings"},
          {211, "missing property name after '.' operator"},
          {293, "write a name to declare a class method"},
          {0, ""},
          {48, "TypeScript static blocks are not supported in JavaScript"},
          {44, "TypeScript interface properties cannot be 'static'"},
          {24, "'{0}' found here"},
          {0, ""},
          {0, ""},
          {46, "TypeScript interfaces cannot be named 'await' in async function"},
          {151, "interface properties are always public and cannot be marked {0}"},
          {0, ""},
          {0, ""},
          {95, "commas are not allowed between class methods"},
          {137, "function starts here"},
          {184, "missing body for while loop"},
          {109, "expected ')' to close function call"},
          {164, "methods should not use the 'function' keyword"},
          {296, "{0} with no bindings"},
          {0, ""},
          {201, "missing name of class"},
          {0, ""},
          {0, ""},
          {11, "'?' creates a conditional expression"},
          {51, "TypeScript's 'interface' feature is not allowed in JavaScript code"},
          {187, "missing catch variable name between parentheses"},
          {2, "\"global-groups\" must be a boolean or an array"},
          {159, "label named 'await' not allowed in async function"},
          {131, "for-of loop expression cannot have semicolons"},
          {145, "imported variable declared here"},
          {0, ""},
          {200, "missing name in function statement"},
          {0, ""},
          {0, ""},
          {254, "unclosed string literal"},
          {86, "cannot update variable with '{0}' while declaring it"},
          {234, "redeclaration of variable: {0}"},
          {0, ""},
          {56, "a 'with' statement"},
          {252, "unclosed object literal; expected '}'"},
          {285, "variable assigned before its declaration"},
          {0, ""},
          {0, ""},
          {0, ""},
          {266, "unexpected characters in number literal"},
          {0, ""},
          {74, "break can only be used inside of a loop or switch"},
          {0, ""},
          {172, "missing 'while (condition)' for do-while statement"},
          {0, ""},
          {101, "do-while loop is missing '{1}' around condition"},
          {0, ""},
          {141, "here"},
          {49, "TypeScript type annotations are not allowed in JavaScript code"},
          {113, "expected 'from' before module specifier"},
          {0, ""},
          {190, "missing condition for if statement"},
          {295, "{0} is not allowed in JavaScript"},
          {112, "expected 'from \"name_of_module.mjs\"'"},
          {12, "'async static' is not allowed; write 'static async' instead"},
          {153, "invalid UTF-8 sequence"},
          {64, "arrow is here"},
          {59, "a lexical declaration is not allowed as the body of {1:singular}"},
          {135, "function called before declaration in block scope: {0}"},
          {0, ""},
          {275, "unexpected token in variable declaration; expected variable name"},
          {174, "missing body for 'for' loop"},
          {60, "a {{0} b }} c"},
          {37, "TypeScript assignment-asserted fields are not supported in JavaScript"},
          {155, "invalid function parameter"},
          {288, "what is this '{1}' nonsense?"},
          {0, ""},
          {290, "while loop needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {161, "legacy octal literals may not contain underscores"},
          {110, "expected ',' between object literal entries"},
          {123, "expected {1:headlinese}"},
          {0, ""},
          {213, "missing quotes around module name '{0}'"},
          {222, "move the 'extends' clause before 'implements' here"},
          {157, "invalid lone literal in object literal"},
          {292, "with statement needs parentheses around expression"},
          {0, ""},
          {238, "see here"},
          {248, "unclosed class; expected '}' by end of file"},
          {0, ""},
          {0, ""},
          {0, ""},
          {272, "unexpected statement before first switch case, expected 'case' or 'default'"},
          {0, ""},
          {166, "missing ',' between variable declarations"},
          {115, "expected expression after 'case'"},
          {162, "let statement cannot declare variables named 'let'"},
          {281, "use 'while' instead to loop until a condition is false"},
          {0, ""},
          {264, "unexpected characters in binary literal"},
          {0, ""},
          {156, "invalid hex escape sequence: {0}"},
          {195, "missing for loop header"},
          {62, "another invalid string, do not use outside benchmark"},
          {215, "missing semicolon after index signature"},
          {0, ""},
          {0, ""},
          {0, ""},
          {108, "existing variable declared here"},
          {0, ""},
          {239, "something happened"},
          {40, "TypeScript interface fields cannot be initalized"},
          {0, ""},
          {90, "classes cannot be named 'await' in async function"},
          {0, ""},
          {14, "'await' is only allowed in async functions"},
          {229, "octal literal may not have exponent"},
          {242, "switch statement is missing '{1}' around condition"},
          {0, ""},
          {76, "cannot assign to loop variable in for of/in loop"},
          {269, "unexpected expression; missing key for object entry"},
          {124, "expected {1:singular}"},
          {255, "unclosed template"},
          {126, "exporting requires '{{' and '}'"},
          {127, "extra ',' is not allowed between enum members"},
          {0, ""},
          {0, ""},
          {73, "binary number literal has no digits"},
          {188, "missing comma between object literal entries"},
          {0, ""},
          {246, "try statement starts here"},
          {0, ""},
          {77, "cannot declare 'await' inside async function"},
          {0, ""},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {9, "'=' changes variables; to compare, use '===' instead"},
          {182, "missing body for function"},
          {0, ""},
          {120, "expected parameter for arrow function, but got an expression instead"},
          {68, "assignment to const variable before its declaration"},
          {50, "TypeScript's 'enum' feature is not allowed in JavaScript"},
          {0, ""},
          {25, "'{0}' is not allowed for strings; use {1} instead"},
          {39, "TypeScript generics are not allowed in JavaScript code"},
          {122, "expected variable name for 'import'-'as'"},
          {0, ""},
          {183, "missing body for try statement"},
          {66, "assignment to const global variable"},
          {106, "escaping '-' is not allowed in tag names; write '-' instead"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {45, "TypeScript interface properties cannot be private"},
          {13, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {167, "missing '...' in JSX attribute spread"},
          {0, ""},
          {0, ""},
          {204, "missing name or parentheses for function"},
          {0, ""},
          {0, ""},
          {276, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {33, "JSON syntax error"},
          {93, "code point out of range"},
          {0, ""},
          {198, "missing initializer in const declaration"},
          {268, "unexpected control character"},
          {277, "unmatched '}'"},
          {104, "enum member name cannot be numeric"},
          {0, ""},
          {0, ""},
          {0, ""},
          {191, "missing condition for switch statement"},
          {111, "expected 'as' between '{1}' and '{2}'"},
          {142, "hex number literal has no digits"},
          {0, ""},
          {52, "TypeScript's 'readonly' feature is not allowed in JavaScript code"},
          {278, "unmatched indexing bracket"},
          {175, "missing body for 'if' statement"},
          {31, "C-style for loop is missing its third component"},
          {70, "assignment to undeclared variable"},
          {170, "missing '=' after variable"},
          {80, "cannot declare variable named keyword '{0}'"},
          {224, "newline is not allowed between 'async' and arrow function parameter list"},
          {0, ""},
          {219, "missing value for object property"},
          {61, "an 'if' statement"},
          {196, "missing function parameter list"},
          {0, ""},
          {210, "missing parentheses around self-invoked function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {202, "missing name of exported class"},
          {147, "index signature must be a field, not a method"},
          {67, "assignment to const variable"},
          {0, ""},
          {79, "cannot declare and export variable with 'export default'"},
          {32, "C-style for loops have only three semicolon-separated components"},
          {0, ""},
          {16, "'else' has no corresponding 'if'"},
          {241, "stray comma in let statement"},
          {233, "redeclaration of global variable"},
          {267, "unexpected characters in octal literal"},
          {217, "missing semicolon between condition and update parts of for loop"},
          {7, "'**' operator cannot be used after unary '{1}' without parentheses"},
          {84, "cannot import variable named keyword '{0}'"},
          {232, "private properties are not allowed in object literals"},
          {150, "integer cannot be represented and will be rounded to '{1}'"},
          {0, ""},
          {0, ""},
          {168, "missing ':' in conditional expression"},
          {0, ""},
          {0, ""},
          {180, "missing body for do-while loop"},
          {125, "exporting requires 'default'"},
          {138, "functions/methods should not have '=>'"},
          {100, "depth limit exceeded"},
          {263, "unexpected '{0}'"},
          {22, "'while' loop"},
          {75, "cannot access private identifier outside class"},
          {0, ""},
          {289, "while loop is missing '{1}' around condition"},
          {143, "if statement is missing '{1}' around condition"},
          {146, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {163, "methods cannot be readonly"},
          {270, "unexpected identifier in expression; missing operator before"},
          {186, "missing catch or finally clause for try statement"},
          {287, "variable used before declaration: {0}"},
          {0, ""},
          {10, "'>' is not allowed directly in JSX text; write {{'>'} or &gt; instead"},
          {203, "missing name of exported function"},
          {291, "with statement is missing '{1}' around expression"},
          {58, "a function statement is not allowed as the body of {1:singular}"},
          {36, "TypeScript 'implements' is not allowed in JavaScript"},
          {0, ""},
          {92, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {0, ""},
          {71, "assignment-asserted fields are not supported in interfaces"},
          {0, ""},
          {240, "stray comma in function parameter"},
          {0, ""},
          {17, "'extends' must be before 'implements'"},
          {15, "'do-while' loop"},
          {87, "character is not allowed in identifiers"},
          {177, "missing body for TypeScript interface"},
          {158, "keywords cannot contain escape sequences"},
          {0, ""},
          {0, ""},
          {193, "missing end of array; expected ']'"},
          {20, "'in' disallowed in C-style for loop initializer"},
          {42, "TypeScript interface methods cannot be marked as a generator"},
          {208, "missing parentheses around left-hand side of '**'"},
          {231, "opening '<{1}>' tag here"},
          {114, "expected '{{'"},
          {0, ""},
          {0, ""},
          {121, "expected variable name for 'catch'"},
          {34, "React/JSX is not yet implemented"},
          {98, "const variable declared here"},
          {19, "'if' statement"},
          {47, "TypeScript optional properties are not allowed in JavaScript code"},
          {160, "legacy octal literal may not be BigInt"},
          {0, ""},
          {117, "expected expression before semicolon"},
          {0, ""},
          {0, ""},
          {94, "commas are not allowed after spread parameter"},
          {140, "generator function '*' belongs before function name"},
          {197, "missing header and body for 'for' loop"},
          {72, "attribute has wrong capitalization; write '{1}' instead"},
          {149, "indexing requires an expression"},
          {243, "switch statement needs parentheses around condition"},
          {134, "function call started here"},
          {144, "if statement needs parentheses around condition"},
          {294, "{0} classes are not allowed in JavaScript"},
          {297, "~~~ invalid string, do not use outside benchmark ~~~"},
          {258, "unexpected '\\' in identifier"},
          {194, "missing expression between parentheses"},
          {57, "a class statement is not allowed as the body of {1:singular}"},
          {0, ""},
          {18, "'for' loop"},
          {251, "unclosed interface; expected '}' by end of file"},
          {65, "assigning to 'async' in a for-of loop requires parentheses"},
          {97, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {154, "invalid expression left of assignment"},
          {0, ""},
          {118, "expected hexadecimal digits in Unicode escape sequence"},
          {105, "escaped character is not allowed in identifiers"},
          {0, ""},
          {0, ""},
          {152, "interfaces cannot contain static blocks"},
          {282, "use of undeclared type: {0}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {55, "a 'while' loop"},
          {0, ""},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346663752ULL);
  std::uint64_t table_size = 446;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry =
        const_hash_table[(hash + attempt * attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }

  // If you see an error with the following line, translation-table-generated.h
  // is out of date. Run tools/update-translator-sources to rebuild this file.
  QLJS_CONSTEXPR_ASSERT(false);

  return 0;
}
}

#endif

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
