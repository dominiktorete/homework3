#include "trianglerect.h"
#include <iostream>
TriangleRect::TriangleRect(int _a, int _b, int _c, int _A, int _B)
    : Triangle(_a, _b, _c, _A, _B, 90){}
void TriangleRect::get_value_shape(){
    std::cout << "TriangleRect:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}
