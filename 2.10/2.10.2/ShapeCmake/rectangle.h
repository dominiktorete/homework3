#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "parallelogram.h"
class Rectangle : public Parallelogram
{
protected:
    void get_value_shape()override;
public:
    Rectangle(int _a, int _b);
};

#endif // RECTANGLE_H
