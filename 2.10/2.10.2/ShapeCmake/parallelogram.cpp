#include "parallelogram.h"
#include <iostream>
Parallelogram::Parallelogram(int _a, int _b, int _A, int _B):
    Quadrangle(_a, _b, _a, _b, _A, _B, _A, _B){}
void Parallelogram::get_value_shape(){
    std::cout << "Parallelogram:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d <<  std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
