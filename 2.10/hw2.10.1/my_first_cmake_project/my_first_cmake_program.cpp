#include <iostream>
#include <string>


int main()
{
    std::string name{};
    std::cout << "Enter name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello " << name << std::endl;
    return 0;
}
