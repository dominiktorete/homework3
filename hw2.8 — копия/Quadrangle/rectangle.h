#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "quadrangle.h"
#include "exceptfigure.h"
class Rectangle : public Quadrangle
{
public:
    Rectangle(int count, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void get_value() override;
};

#endif // RECTANGLE_H
