#include "square.h"
#include <iostream>
Square::Square(int _a):
    Rectangle(_a, _a){}
void Square::get_value_shape(){
    std::cout << "Square:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d <<  std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
