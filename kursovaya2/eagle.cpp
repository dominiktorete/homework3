#include "eagle.h"

Eagle::Eagle() : Sky("Eagle", 8) {}

double Eagle::get_time_sky(double distance){

    distance -= (distance * 6 / 100);

    return distance / speedsky;
}
