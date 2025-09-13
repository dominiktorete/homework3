#include "romb.h"
#include <iostream>
Romb::Romb(int count, int _a, int _b, int _c, int _d,  int _A, int _B, int _C, int _D)
    : Parallelogram(count, _a, _b, _c, _d, _A, _B, _C, _D){
    if(_a != _c || _b != _d || _b != _c || _a != _b){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' or \'b\' and \'d\' or \'b\' and \'c\' or \'a\' and \'b\' is not equal!");
    }

}
void Romb::get_value(){
    std::cout << "Romb" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << ", " << d << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << ", " << D << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
