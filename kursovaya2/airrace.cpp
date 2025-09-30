#include "airrace.h"
#include <algorithm>
AirRace::AirRace() {}
AirRace::~AirRace() {
    for(int i = 0; i < skyTC.size(); i++){
        delete skyTC[i];
        skyTC[i] = nullptr;
    }
}
bool AirRace::set_registr_skyTC(Sky* sk){
    for(int i = 0; i < skyTC.size(); i++){
        if(skyTC[i]->get_namesky() == sk->get_namesky()){
            delete sk;
            sk = nullptr;
            return false;
        }
    }
    skyTC.push_back(sk);
    return true;
}
double AirRace::get_time_airrace(Sky* sk, double distance){
    return sk->get_time_sky(distance);
}
std::vector<std::pair<std::string, double>> AirRace::get_resultsky(double distance){
    std::vector<std::pair<std::string, double>> result;
    for(int i = 0; i < skyTC.size(); i++){
        result.push_back(std::make_pair(skyTC[i]->get_namesky(), get_time_airrace(skyTC[i], distance)));
    }
    std::sort(result.begin(), result.end(),
              [](const std::pair<std::string, double>& a, std::pair<std::string, double>& b )
              { return a.second < b.second;});
    return result;
}
