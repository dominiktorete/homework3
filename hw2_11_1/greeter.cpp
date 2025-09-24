#include <iostream>
#include "greeter.h"
Greeter::Greeter() {}
void Greeter::greaterstr(std::string str ){
    std::cout << "Hello " << str << std::endl;
}
