#ifndef __Interpreter_H__
#define __Interpreter_H__

#include <stack>
#include <string>
#include <cstdlib>
#include "Element.h"
#include "Numerical.h"
#include "Boolean.h"

// Parses an input string expression and returns the result.
// Input string expressions should be formatted in reverse polish notation
// e.g. "2 3 add" or "4 5 mul"
// Interpreter i;
// i.parse("5 6 add 2 mul")
// i.parse("T T add")
// Pushes operands to the stack until an operator is reached
// Should return a final result of the calculation, the stack should be empty
// Stack contains Elements which can either be numbers or boolean values
// Classes are structured in a way such that operators overridden to allow
// them both to be treated the same
class Interpreter {
  std::stack<Element*> element_stack;
 public:
  double parse(std::string expression);
};
#endif
