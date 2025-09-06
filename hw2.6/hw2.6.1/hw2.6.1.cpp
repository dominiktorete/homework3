// #include <iostream>
// #include <locale>
// #include <Windows.h>
// #include "math_func.h"
// int main()
// {
//     setlocale(LC_ALL, "ru");
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);
//     double a{}, b{};
//     int command{};
//     std::cout << "Введите первое число: ";
//     std::cin >> a;
//     std::cout << "Введите второе число: ";
//     std::cin >> b;
//     std::cout << "Выберите действие (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
//     std::cin >> command;
//     switch(command){
//     case 1:
//         sum(a, b);
//         break;
//     case 2:
//         subtract(a, b);
//         break;
//     case 3:
//         multiply(a, b);
//         break;
//     case 4:
//         divide(a, b);
//         break;
//     case 5:
//         pow_h(a, b);
//         break;
//     default:
//         std::cout << "Такой команды не существует!!!" << std::endl;
//         break; // Необязательно.
//     }

//     return 0;
// }
