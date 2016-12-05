#ifndef __NUMERICAL_H__
#define __NUMERICAL_H__
#include "Element.h"

// Represents a numerical value (decimal or integer)
// Derived class of Element which allows Numericals to be placed on the Element
// stack. Overrides the arithmetic operations from the Element class
// Operations return new Elements which must be deleted
class Numerical: public Element {
 public:
  Numerical(double n);
  Element * operator+(const Element& e) const;
  Element * operator-(const Element& e) const;
  Element * operator*(const Element& e) const;
  Element * operator/(const Element& e) const;
  ~Numerical();
};
#endif
