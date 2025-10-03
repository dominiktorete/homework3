#ifndef CARPET_H
#define CARPET_H
#include "sky.h"
class Carpet : public Sky
{
public:
    Carpet();
    double get_time_sky(double distance);
};

#endif // CARPET_H
