#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"
class Square : public Rectangle
{
protected:
    void get_value_shape()override;
public:
    Square(int _a);
};

#endif // SQUARE_H
