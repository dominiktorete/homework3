#ifndef AIRGROUNDRACE_H
#define AIRGROUNDRACE_H
#include <vector>
#include "airrace.h"
#include "groundrace.h"
class AirGroundRace : public GroundRace, public AirRace
{
public:
    AirGroundRace();
    std::vector<std::pair<std::string, double>> get_resultskyground(std::vector<std::pair<std::string, double>> sky, std::vector<std::pair<std::string, double>> ground);
};

#endif // AIRGROUNDRACE_H
