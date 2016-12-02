#include "Interpreter.h"
#include <iostream>
//TODO read expression from command line
//TODO create a branch and add booleans by splitting element into two sub-classes
double Interpreter::parse(std::string expression){
  expression += " ";
  std::string current = "";
  double result = 0;
  for(unsigned int i = 0; i < expression.length(); i++){
    std::cout << expression[i] << std::endl;
    if(expression[i] == 32){
      std::cout << "HERE" << std::endl;
      if(current == "add"){
        //do add
        Element * e1 = element_stack.top();
        element_stack.pop();
        Element * e2 = element_stack.top();
        element_stack.pop();
        Element * e3 = *e1 + *e2;
        delete e1;
        delete e2;
        element_stack.push(e3);
        std::cout << "OH NO:" << std::endl;
        std::cout << e3->get_value() << std::endl;
        std::cout << current << std::endl;
      }
      else if(current == "sub"){
        //do sub
        Element * e1 = element_stack.top();
        element_stack.pop();
        Element * e2 = element_stack.top();
        element_stack.pop();
        Element * e3 = *e1 - *e2;
        delete e1;
        delete e2;
        element_stack.push(e3);
        std::cout << current << std::endl;
      }
      else if(current == "mul"){
        //do mul
        Element * e1 = element_stack.top();
        element_stack.pop();
        Element * e2 = element_stack.top();
        element_stack.pop();
        Element * e3 = *e1 * *e2;
        delete e1;
        delete e2;
        element_stack.push(e3);
        std::cout << current << std::endl;
      }
      else if(current == "div"){
        //do divide
        Element * e1 = element_stack.top();
        element_stack.pop();
        Element * e2 = element_stack.top();
        element_stack.pop();
        Element * e3 = *e1 / *e2;
        element_stack.push(e3);

        delete e1;
        delete e2;
        std::cout << current << std::endl;
      }
      else if(current == "T"){
          element_stack.push(new Boolean(1));
      }
      else if(current == "F"){
          element_stack.push(new Boolean(0));
      }
      else {
        double value = std::stod(current);
        std::cout << value << std::endl;
        Element * n = new Numerical(value);
        //Element e(value);
        element_stack.push(n);
      }
      current = "";
    } // expression
    else {
      current += expression[i];
    }

  } // for

  Element * r = element_stack.top();
  element_stack.pop();
  if(!element_stack.empty()){
    std::cout << "ERROR! Stack not cleared..." << std::endl;
  }

  result = r->get_value();

  delete r;
  return result;
}
