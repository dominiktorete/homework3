#include "rectangle.h"
#include <iostream>
Rectangle::Rectangle(int count, int _a, int _b, int _c, int _d,  int _A, int _B, int _C, int _D)
    : Quadrangle(count, _a, _b, _c, _d, _A, _B, _C, _D){
    if(_a != _c || _b != _d){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' or \'b\' and \'d\' is not equal!");
    }
    else if(_A != 90 || _C != 90 || _B != 90 || _D != 90){
        throw ExceptFigure("Figure not create!!! Angles \'A\' or \'C\' or \'B\' or \'D\' is not equal 90");
    }
}
void Rectangle::get_value(){
    std::cout << "Rectangle" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << ", " << d << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << ", " << D << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
