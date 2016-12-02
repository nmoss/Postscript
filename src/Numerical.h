#ifndef __NUMERICAL_H__
#define __NUMERICAL_H__
#include "Element.h"
class Numerical: public Element {
 public:
  Numerical(double n);
  Element * operator+(const Element& e) const;
  Element * operator-(const Element& e) const;
  Element * operator*(const Element& e) const;
  Element * operator/(const Element& e) const;
  //~Numerical(){};
};
#endif
