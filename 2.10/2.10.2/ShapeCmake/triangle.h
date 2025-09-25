#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
class Triangle : public Shape
{
protected:
    int a{}, b{}, c{}, A{}, B{}, C{};
    void get_value_shape()override;
public:
    Triangle(int _a, int _b, int _c, int _A, int _B, int _C);

};

#endif // TRIANGLE_H
