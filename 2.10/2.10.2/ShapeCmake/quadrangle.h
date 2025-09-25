#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "shape.h"
class Quadrangle : public Shape
{
protected:
    int a{}, b{}, c{}, d{}, A{}, B{}, C{}, D{};
    void get_value_shape()override;
public:
    Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
};

#endif // QUADRANGLE_H
