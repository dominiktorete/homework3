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
//     std::cout << "������� ������ �����: ";
//     std::cin >> a;
//     std::cout << "������� ������ �����: ";
//     std::cin >> b;
//     std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
//         std::cout << "����� ������� �� ����������!!!" << std::endl;
//         break; // �������������.
//     }

//     return 0;
// }
