#include "romb.h"
#include <iostream>
Romb::Romb(int _a, int _A, int _B):
    Parallelogram(_a, _a, _A, _B){}
void Romb::get_value_shape(){
    std::cout << "Romb:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d <<  std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
