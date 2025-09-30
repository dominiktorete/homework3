#ifndef SKY_H
#define SKY_H
#include <string>
class Sky
{
protected:
    double speedsky{};
    std::string nameskyTC;
public:
    Sky(std::string str, int _speed);
    std::string get_namesky(){return nameskyTC;}
    virtual double get_time_sky(double distance) = 0;
    virtual ~Sky(){}
};

#endif // SKY_H
