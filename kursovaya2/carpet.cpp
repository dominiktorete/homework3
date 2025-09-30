#include "carpet.h"

Carpet::Carpet() : Sky("Carpet", 10) {}
double Carpet::get_time_sky(double distance){
    if(distance < 1000);
    else if(distance < 5000){
        distance -= (distance * 3 / 100);
    }
    else if(distance < 10000){
        distance -= (distance * 10 / 100);
    }
    else if(distance >= 10000){
        distance -= (distance * 5 / 100);
    }
    return distance / speedsky;
}
