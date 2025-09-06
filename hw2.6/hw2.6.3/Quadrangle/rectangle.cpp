#include "rectangle.h"
#include <iostream>
Rectangle::Rectangle(int _a, int _b):
    Parallelogram(_a, _b, 90, 90){}
void Rectangle::get_value_shape(){
    std::cout << "Rectangle:" << std::endl;
    std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d <<  std::endl;
    std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
