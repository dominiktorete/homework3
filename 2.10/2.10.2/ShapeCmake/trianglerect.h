#ifndef TRIANGLERECT_H
#define TRIANGLERECT_H
#include "triangle.h"
class TriangleRect : public Triangle
{
protected:
    void get_value_shape()override;
public:
    TriangleRect(int _a, int _b, int _c, int _A, int _B);
};

#endif // TRIANGLERECT_H
