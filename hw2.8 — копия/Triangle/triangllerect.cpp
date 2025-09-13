#include "triangllerect.h"
#include <iostream>
TriangleRect::TriangleRect(int count, int _a, int _b, int _c, int _A, int _B, int _C)
    : Triangle(count, _a, _b, _c, _A, _B, _C){
    if(_C != 90){
        throw ExceptFigure("Figure not create!!! Angle \'C\' is not equal 90");
    }

}
void TriangleRect::get_value(){
    std::cout << "TriangleRect" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
