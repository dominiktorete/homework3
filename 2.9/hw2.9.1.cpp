#include <iostream>
#include "fraction_2.h"
#include <exception>

int main()
{
    try{
        Fraction f1(8, 12);
        Fraction f2(6, 12);
        std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
        std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
        std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
        std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
        std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
        std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
