#include "triangleisos.h"
#include <iostream>
TriangleIsos::TriangleIsos(int count, int _a, int _b, int _c, int _A, int _B, int _C)
    : Triangle(count, _a, _b, _c, _A, _B, _C){
    if(_A != _C && _a != _c){
        throw ExceptFigure("Figure not create!!! Sides /'a/' and /'c/' is not equal and angles /'A/' and /'C/' is not equal!");
    }
    else if(_a != _c){
        throw ExceptFigure("Figure not create!!! Sides /'a/' and /'c/' is not equal");
    }
    else if(_A != _C){
        throw ExceptFigure("Figure not create!!! Angles /'A/' and /'C/' is not equal");
    }

}
void TriangleIsos::get_value(){
    std::cout << "TriangleIsos" << std::endl;
    std::cout << "Sides: " << a << ", " << b << ", " << c << "." << std::endl;
    std::cout << "Angles: " << A << ", " << B << ", " << C << "." << std::endl;
    std::cout << "Create!!!" << std::endl;
}
