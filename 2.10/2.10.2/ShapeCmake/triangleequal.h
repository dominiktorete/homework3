#ifndef TRIANGLEEQUAL_H
#define TRIANGLEEQUAL_H
#include "triangle.h"
class TriangleEqual : public Triangle
{
protected:
    void get_value_shape()override;
public:
    TriangleEqual(int _a);
};

#endif // TRIANGLEEQUAL_H
