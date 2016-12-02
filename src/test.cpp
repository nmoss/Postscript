#include <iostream>
#include "Element.h"
#include "Interpreter.h"

int main(int argc, char** argv){
  /*
  if(argc < 2){
    std::cout << "Usage: test \"PROGRAM\" "<< std::endl;
    return 0;
  }*/

  Interpreter i;

  double x = i.parse("2 3 add");

  std::cout << x << std::endl;

  return 0;
}
