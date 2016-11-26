#ifndef __ELEMENT_H_INCLUDED__
#define __ELEMENT_H_INCLUDED__

class Element {
 private:
  double value;
 public:
  Element(double);
  double get_value () { return value;}
  Element operator+(const Element& e);
  Element operator-(const Element& e);
  Element operator*(const Element& e);
  Element operator/(const Element& e);
};

#endif // __ELEMENT_H_INCLUDED
