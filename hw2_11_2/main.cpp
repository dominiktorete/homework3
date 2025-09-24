#include <iostream>
#include <string>
#include "leaver.h"


int main()
{
    std::string str;
    Leaver lv;
    std::cout << "Enter to name: ";
    std::getline(std::cin >> std::ws, str);
    lv.leave(str);
    return 0;
}
