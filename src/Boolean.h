#ifndef __BOOLEAN_H__
#define __BOOLEAN_H__
#include "Element.h"
class Boolean: public Element {
    public:
        Boolean(double v);
        ~Boolean();
        /* OR */
        Element * operator+(const Element &e) const;
        /* XOR */
        Element * operator-(const Element &e) const;
        /* AND */
        Element * operator*(const Element &e) const;
        /* UNDEFINED */
        Element * operator/(const Element &e) const;
};

#endif
