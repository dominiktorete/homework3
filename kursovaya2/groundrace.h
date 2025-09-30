#ifndef GROUNDRACE_H
#define GROUNDRACE_H
#include <vector>
#include <string>
#include "ground.h"

class GroundRace
{
protected:
    std::vector<Ground*> groundTC;

public:
    GroundRace();
    bool set_registr_groundTC(Ground* gr);
    double get_time_race(Ground* gr, double distance);
    std::vector<std::pair<std::string, double>> get_result(double distance);
    int get_size_vector(){return groundTC.size();}
    std::string get_name_vehicle(int i){return groundTC[i]->get_name();}
    ~GroundRace();
};

#endif // GROUNDRACE_H
