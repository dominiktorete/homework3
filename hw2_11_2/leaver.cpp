#include "leaver.h"
#include <iostream>
Leaver::Leaver() {}
void Leaver::leave(std::string str){
    std::cout << "Goodbye, " << str;
}
