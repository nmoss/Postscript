#include <iostream>
#include "Element.h"
#include "Interpreter.h"

int main(int argc, char** argv){

  Interpreter i;

  double x = i.parse("3 4 add 2 mul");

  std::cout << x << std::endl;

  return 0;
}
