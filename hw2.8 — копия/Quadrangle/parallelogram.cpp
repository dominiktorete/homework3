#include "parallelogram.h"
#include <iostream>
Parallelogram::Parallelogram(int count, int _a, int _b, int _c, int _d,  int _A, int _B, int _C, int _D)
    : Quadrangle(count, _a, _b, _c, _d, _A, _B, _C, _D){
    if((_A != _C || _B != _D) && (_a != _c || _b != _d)){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' or \'b\' and \'d\' is not equal and angles \'A\' and \'C\' or \'B\' and \'D\' is not equal!");
    }
    else if(_a != _c || _b != _d){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' or \'b\' and \'d\' is not equal");
    }
    else if(_A != _C || _B != _D){
        throw ExceptFigure("Figure not create!!! Angles \'A\' and \'C\' or \'B\' and \'D\' is not equal");
    }
}
void Parallelogram::get_value(){
    std::cout << "Parallelogram" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << ", " << d << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << ", " << D << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}

