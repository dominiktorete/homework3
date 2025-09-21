#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "quadrangle.h"
class Parallelogram : public Quadrangle
{
protected:
    void get_value_shape()override;
public:
    Parallelogram(int _a, int _b, int _A, int _B);
};

#endif // PARALLELOGRAM_H
