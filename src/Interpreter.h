#ifndef __Interpreter_H__
#define __Interpreter_H__

#include <stack>
#include <string>
#include <cstdlib>
#include "Element.h"

class Interpreter {
  std::stack<Element> element_stack;
 public:
  double parse(std::string expression);
};
#endif
