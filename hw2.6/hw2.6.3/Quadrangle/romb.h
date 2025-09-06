#ifndef ROMB_H
#define ROMB_H
#include "parallelogram.h"
class Romb : public Parallelogram
{
protected:
    void get_value_shape()override;
public:
    Romb(int _a, int _A, int _B);
};

#endif // ROMB_H
