#include <iostream>
#include <locale>
#include <Windows.h>
#include "math_func.h"
int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a{}, b{};
    int command{};
    std::cout << "Ââĺäčňĺ ďĺđâîĺ ÷čńëî: ";
    std::cin >> a;
    std::cout << "Ââĺäčňĺ âňîđîĺ ÷čńëî: ";
    std::cin >> b;
    std::cout << "Âűáĺđčňĺ äĺéńňâčĺ (1 - ńëîćĺíčĺ, 2 - âű÷čňŕíčĺ, 3 - óěíîćĺíčĺ, 4 - äĺëĺíčĺ, 5 - âîçâĺäĺíčĺ â ńňĺďĺíü): ";
    std::cin >> command;
    switch(command){
    case 1:
        sum(a, b);
        break;
    case 2:
        subtract(a, b);
        break;
    case 3:
        multiply(a, b);
        break;
    case 4:
        divide(a, b);
        break;
    case 5:
        pow_h(a, b);
        break;
    default:
        std::cout << "Ňŕęîé ęîěŕíäű íĺ ńóůĺńňâóĺň!!!" << std::endl;
        break; // Íĺîá˙çŕňĺëüíî.
    }

    return 0;
}

