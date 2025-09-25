#include "triangleequal.h"
#include <iostream>
TriangleEqual::TriangleEqual(int _a)
    : Triangle(_a, _a, _a, 60, 60, 60){}
void TriangleEqual::get_value_shape(){
    std::cout << "TriangleEqual:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}
