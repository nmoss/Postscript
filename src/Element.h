#ifndef __ELEMENT_H_INCLUDED__
#define __ELEMENT_H_INCLUDED__

// Abstract base class for values in the Interpreter stack
// Numbers or Boolean values parsed by the Interpreter are cast into Numerical
// or Boolean sub-classes of Element and then placed in an Element stack
// Contains operators for performing basic operations
// Operator methods return new elements which must be deleted
class Element {
 protected:
  double value;
 public:
  //Element(double);
  double get_value () const { return value;}
  virtual Element * operator+(const Element& e) const =0;
  virtual Element * operator-(const Element& e) const =0;
  virtual Element * operator*(const Element& e) const =0;
  virtual Element * operator/(const Element& e) const =0;
  virtual ~Element()=0;
};

#endif // __ELEMENT_H_INCLUDED
