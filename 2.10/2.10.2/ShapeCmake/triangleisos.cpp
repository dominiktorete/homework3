#include "triangleisos.h"
#include <iostream>
TriangleIsos::TriangleIsos(int _a, int _b, int _A, int _B)
    : Triangle(_a, _b, _a, _A, _B, _A){}
void TriangleIsos::get_value_shape(){
    std::cout << "TriangleIsos:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}
