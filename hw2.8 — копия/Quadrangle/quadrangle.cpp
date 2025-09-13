#include "quadrangle.h"
#include <iostream>
Quadrangle::Quadrangle(int count, int _a, int _b, int _c, int _d,  int _A, int _B, int _C, int _D)
    : Shape(count), a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D){
    if(_A + _B + _C +_D != 360){
        throw ExceptFigure("Figure not create!!! Sum angles is not equal 360");
    }
    else if(count != 4){
        throw ExceptFigure("Figure not create!!! Count sides is not equal 4");
    }

}
void Quadrangle::get_value(){
    std::cout << "Quadrangle" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << ", " << d << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << ", " << D << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
