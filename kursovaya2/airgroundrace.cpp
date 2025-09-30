#include "airgroundrace.h"
#include <algorithm>

AirGroundRace::AirGroundRace() {}

std::vector<std::pair<std::string, double>> AirGroundRace::get_resultskyground(std::vector<std::pair<std::string, double>> sky, std::vector<std::pair<std::string, double>> ground){
    sky.insert(sky.end(), ground.begin(), ground.end());
    std::sort(sky.begin(), sky.end(),
              [](const std::pair<std::string, double>& a, std::pair<std::string, double>& b )
              { return a.second < b.second;});
    return sky;
}
