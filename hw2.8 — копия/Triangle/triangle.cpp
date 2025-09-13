#include "triangle.h"
#include <iostream>
Triangle::Triangle(int count, int _a, int _b, int _c, int _A, int _B, int _C)
    : Shape(count), a(_a), b(_b), c(_c), A(_A), B(_B), C(_C){
    if(_A + _B + _C != 180){
        throw ExceptFigure("Figure not create!!! Sum angles is not equal 180");
    }
    else if(count != 3){
        throw ExceptFigure("Figure not create!!! Count sides is not equal 3");
    }

}
void Triangle::get_value(){
    std::cout << "Triangle" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
