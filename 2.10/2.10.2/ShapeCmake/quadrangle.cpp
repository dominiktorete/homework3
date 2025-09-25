#include "quadrangle.h"
#include <iostream>
Quadrangle::Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D):
    a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D){}
void Quadrangle::get_value_shape()
{
    std::cout << "Quadrangle:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d <<  std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
