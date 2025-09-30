#include "broom.h"

Broom::Broom() : Sky("Broom", 20) {}

double Broom::get_time_sky(double distance){
    if(distance >= 1000){
        int k{};
        while(k < distance){
            if(distance - k < 1000)break;
            k += 1000;
        }
        distance -= ((distance * (k / 1000)) / 100);
    }
    return distance / speedsky;
}
