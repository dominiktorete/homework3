#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"
#include "exceptfigure.h"
class Square : public Rectangle
{
public:
    Square(int count, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    void get_value() override;
};

#endif // SQUARE_H
