#ifndef EAGLE_H
#define EAGLE_H
#include "sky.h"
class Eagle : public Sky
{
public:
    Eagle();
    double get_time_sky(double distance);
};

#endif // EAGLE_H
