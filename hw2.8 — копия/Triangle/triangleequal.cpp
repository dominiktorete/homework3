#include "triangleequal.h"
#include <iostream>
TriangleEqual::TriangleEqual(int count, int _a, int _b, int _c, int _A, int _B, int _C)
    : Triangle(count, _a, _b, _c, _A, _B, _C){
    if((_A != _B || _B != _C || _A != _C) && (_a != _b || _b != _c || _a != _c)){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' and \'b\' is not equal and angles \'A\' and \'C\' and \'B\' is not equal");
    }
    else if(_A != _B || _B != _C || _A != _C){
        throw ExceptFigure("Figure not create!!! Angles \'A\' and \'C\' and \'B\' is not equal");
    }
    else if(_a != _b || _b != _c || _a != _c){
        throw ExceptFigure("Figure not create!!! Sides \'a\' and \'c\' and \'b\' is not equal");
    }

}
void TriangleEqual::get_value(){
    std::cout << "TriangleEqual" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}

