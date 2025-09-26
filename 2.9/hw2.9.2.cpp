#include <iostream>
#include "fraction_2.h"

int main()
{
    int num, den;
    std::cout << "Enter to value numerator: ";
    std::cin >> num;
    std::cout << "Enter to value denomirator: ";
    std::cin >> den;
    Fraction f1(num, den);
    std::cout << "Enter to value numerator: ";
    std::cin >> num;
    std::cout << "Enter to value denomirator: ";
    std::cin >> den;
    Fraction f2(num, den);
    std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
    std::cout << f1 << " - " << f2 << " = " << f1-f2 << std::endl;
    std::cout << f1 << " * " << f2 << " = " << f1*f2 << std::endl;
    std::cout << f1 << " / " << f2 << " = " << f1/f2 << std::endl;
    std::cout << "++" << f1 << " * " << f2 << " = " << ++f1 * f2 << std::endl;
    std::cout << "Value fraction 1 " << f1 << std::endl;
    std::cout << f1 << "-- * " << f2 << " = " << f1-- * f2  << std::endl;
    std::cout << "Value fraction 1 " << f1 << std::endl;

    return 0;
}
