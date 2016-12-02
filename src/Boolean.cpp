#include "Boolean.h"

Boolean::Boolean(double v){
    value = v;
}

Boolean::~Boolean(){}

Element * Boolean::operator+(const Element &e) const {
    double value = this->value + e.get_value();

    if(value > 0){
        return new Boolean(1);
    }

    return new Boolean(0);
}

Element * Boolean::operator-(const Element &e) const {
    double value = this->value - e.get_value();

    if(value != 0){
        return new Boolean(1);
    }
    return new Boolean(0);
}

Element * Boolean::operator*(const Element &e) const {
    double value = this->value * e.get_value();
    return new Boolean(value);
}

Element * Boolean::operator/(const Element &e) const {
    return new Boolean(0);
}
