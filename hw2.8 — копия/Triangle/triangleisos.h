#ifndef TRIANGLEISOS_H
#define TRIANGLEISOS_H
#include "triangle.h"
#include "exceptfigure.h"
class TriangleIsos : public Triangle
{
public:
    TriangleIsos(int count, int _a, int _b, int _c, int _A, int _B, int _C);
    void get_value() override;
};

#endif // TRIANGLEISOS_H
