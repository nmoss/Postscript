#include "Element.h"

Element::Element(double v){
  value = v;
}

Element Element::operator+(const Element& e){
  double v1 = this->value + e.value;
  Element result(v1);
  return result;
}

Element Element::operator-(const Element& e){
  double v1 = this->value - e.value;
  Element result(v1);
  return result;
}

Element Element::operator*(const Element& e){
  double v1 = this->value * e.value;
  Element result(v1);
  return result;
}

Element Element::operator/(const Element& e){
  double v1 = this->value / e.value;
  Element result(v1);
  return result;
}

