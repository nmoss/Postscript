#ifndef __BOOLEAN_H__
#define __BOOLEAN_H__
#include "Element.h"

// Represents a T/F value
// Derived from Element which allows the Interpeter to place Booleans on the
// Element stack. Overrides the operators to allow the arithmetic operations to be
// applied to booleans in the same fashion as numbers
// Operators return new Elements which must be deleted
// + represents OR
// - represents XOR
// * represents AND
// Division is undefined
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
