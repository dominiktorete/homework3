#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "shape.h"
#include "exceptfigure.h"
class Quadrangle : public Shape
{
protected:
    int a{}, b{}, c{}, d{}, A{}, B{}, C{}, D{};
public:
    Quadrangle(int count, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void get_value() override;
};

#endif // QUADRANGLE_H
