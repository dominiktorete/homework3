#ifndef TRIANGLLERECT_H
#define TRIANGLLERECT_H
#include "triangle.h"
#include "exceptfigure.h"
class TriangleRect : public Triangle
{
public:
    TriangleRect(int count, int _a, int _b, int _c, int _A, int _B, int _C);
    void get_value() override;
};

#endif // TRIANGLLERECT_H
