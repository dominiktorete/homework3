#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    int count_sides{};
public:
    Shape(int count);
    virtual void get_value(){}

};

#endif // SHAPE_H
