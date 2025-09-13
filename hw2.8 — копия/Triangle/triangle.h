#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
#include "exceptfigure.h"
class Triangle : public Shape
{
protected:
    int a{}, b{}, c{}, A{}, B{}, C{};
public:
    Triangle(int count, int _a, int _b, int _c, int _A, int _B, int _C);
    void get_value() override;
};

#endif // TRIANGLE_H
