#include "groundrace.h"
#include <algorithm>
GroundRace::GroundRace() {}
GroundRace::~GroundRace() {
    for(int i = 0; i < groundTC.size(); i++){
        delete groundTC[i];
        groundTC[i] = nullptr;
    }
}
bool GroundRace::set_registr_groundTC(Ground* gr){
    for(int i = 0; i < groundTC.size(); i++){
        if(groundTC[i]->get_name() == gr->get_name()){
            delete gr;
            gr = nullptr;
            return false;
        }
    }
    groundTC.push_back(gr);
    return true;

}
double GroundRace::get_time_race(Ground* gr, double distance){
    double speed = gr->get_speed();
    double time_move = gr->get_time();
    std::vector<double> vec = gr->get_vec_relax();
    double time = distance / speed;
    if(time <= time_move)return time;
    else{
        double count_time = time;
        count_time -= time_move;
        for(int i = 0; i < vec.size();){
            if(i == vec.size()-1 && count_time > 0){
                time += vec[i];
                if(count_time > 0 && count_time <= time_move){
                    break;
                }
                else if(count_time > 0 && count_time > time_move)
                {
                    count_time -= time_move;
                }
                else if(count_time <= 0){
                    break;
                }
            }
            else if(i != vec.size()-1 && count_time > 0){
                time += vec[i];
                i++;
                if(count_time > 0 && count_time <= time_move){
                    break;
                }
                else if(count_time > 0 && count_time > time_move)
                {
                    count_time -= time_move;
                }
                else if(count_time <= 0){
                    break;
                }
            }
            else if(count_time <= 0)break;

        }
    }
    return time;
}
std::vector<std::pair<std::string, double>> GroundRace::get_result(double distance){
    std::vector<std::pair<std::string, double>> result;
    for(int i = 0; i < groundTC.size(); i++){
        result.push_back(std::make_pair(groundTC[i]->get_name(), get_time_race(groundTC[i], distance)));
    }
    std::sort(result.begin(), result.end(),
        [](const std::pair<std::string, double>& a, std::pair<std::string, double>& b )
            { return a.second < b.second;});
    return result;
}
