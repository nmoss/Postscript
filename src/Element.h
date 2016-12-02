#ifndef __ELEMENT_H_INCLUDED__
#define __ELEMENT_H_INCLUDED__

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
  //~Element(){};
};

#endif // __ELEMENT_H_INCLUDED
