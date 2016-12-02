#include "Numerical.h"
#include <iostream>

Numerical::Numerical(double n){
  value = n;
}

Element* Numerical::operator+(const Element& e) const {
  double x = e.get_value();
  double result = this->value + x;
  std::cout<< result << std::endl;
  Element * e1 = new Numerical(result);
  std::cout << e1->get_value() << std::endl;
  return e1;
}

Element* Numerical::operator-(const Element& e) const {
  double result = this->value - e.get_value();
  Element * e1 = new Numerical(result);
  return e1;
}

Element* Numerical::operator*(const Element& e) const {
  double result = this->value * e.get_value();
  Element * e1 = new Numerical(result);
  return e1;
}

Element* Numerical::operator/(const Element& e) const {
  double result = this->value / e.get_value();
  Element * e1 = new Numerical(result);
  return e1;
}
