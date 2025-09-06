#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    virtual void get_value_shape(){}
public:
    Shape(){}
    virtual void print_info(Shape* sh);
    virtual ~Shape(){}
};

#endif // SHAPE_H
