#ifndef TRIANGLEISOS_H
#define TRIANGLEISOS_H
#include "triangle.h"
class TriangleIsos : public Triangle
{
protected:
    void get_value_shape()override;
public:
    TriangleIsos(int _a, int _b, int _A, int _B);
};

#endif // TRIANGLEISOS_H
