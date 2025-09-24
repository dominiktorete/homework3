#include <iostream>
#include <string>
#include "greeter.h"

int main()
{
    std::string str{};
    std::cout << "Enter to name: ";
    std::getline(std::cin >> std::ws, str);
    Greeter::greaterstr(str);
    return 0;
}
