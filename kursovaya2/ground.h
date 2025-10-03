#ifndef GROUND_H
#define GROUND_H
#include <vector>
#include <string>
class Ground
{
protected:
    std::string nameTC;
    double speed{};
    double time_move{};
    std::vector<double> relax;
    //bool registr = false;

public:
    Ground(std::string name, double _speed, double _time_move);
    std::string get_name(){return nameTC;}
    double get_speed(){return speed;}
    double get_time(){return time_move;}
    std::vector<double> get_vec_relax(){return relax;}
    virtual ~Ground(){}
};

#endif // GROUND_H
