#ifndef AIRRACE_H
#define AIRRACE_H
#include <vector>
#include <string>
#include "sky.h"
class AirRace
{
protected:
    std::vector<Sky*> skyTC;
public:
    AirRace();
    bool set_registr_skyTC(Sky* gr);
    double get_time_airrace(Sky* gr, double distance);
    int get_size_vectorsky(){return skyTC.size();}
    std::string get_namesky_vehicle(int i){return skyTC[i]->get_namesky();}
    std::vector<std::pair<std::string, double>> get_resultsky(double distance);
    virtual ~AirRace();
};
#endif // AIRRACE_H
