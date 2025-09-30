#ifndef BROOM_H
#define BROOM_H
#include "sky.h"

class Broom : public Sky
{
public:
    Broom();
    double get_time_sky(double distance);
};

#endif // BROOM_H
