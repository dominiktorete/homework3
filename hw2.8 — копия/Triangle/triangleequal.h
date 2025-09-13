#ifndef TRIANGLEEQUAL_H
#define TRIANGLEEQUAL_H
#include "triangle.h"
#include "exceptfigure.h"
class TriangleEqual : public Triangle
{
public:
    TriangleEqual(int count, int _a, int _b, int _c, int _A, int _B, int _C);
    void get_value() override;
};

#endif // TRIANGLEEQUAL_H
