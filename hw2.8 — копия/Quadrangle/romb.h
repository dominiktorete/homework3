#ifndef ROMB_H
#define ROMB_H
#include "parallelogram.h"
#include "exceptfigure.h"
class Romb : Parallelogram
{
public:
    Romb(int count, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void get_value() override;
};

#endif // ROMB_H
