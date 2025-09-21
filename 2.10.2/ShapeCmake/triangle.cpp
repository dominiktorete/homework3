#include "triangle.h"
#include <iostream>
Triangle::Triangle(int _a, int _b, int _c, int _A, int _B, int _C ) :
    a(_a), b(_b), c(_c), A(_A), B(_B), C(_C){}
void Triangle::get_value_shape(){
    std::cout << "Triangle:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}
