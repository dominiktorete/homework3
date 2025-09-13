#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "quadrangle.h"
#include "exceptfigure.h"
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int count, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void get_value() override;
};

#endif // PARALLELOGRAM_H
