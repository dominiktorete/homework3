// #include <iostream>
// #include <locale>
// #include <Windows.h>
// #include "counter.h"
// void func_io(Counter& cr){
//     char ch{};
//     do{
//         std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
//         std::cin >> ch;
//         if(ch == '+') cr.countUP();
//         else if(ch == '-')cr.countDown();
//         else if(ch == '=')std::cout << cr.get_count() << std::endl;
//         else if(ch == 'x' || ch == '�') std::cout << "�� ��������!" << std::endl;
//         else std::cout << "����� ������� ���!!!" << std::endl;
//     }while(ch != 'x' && ch != '�');
// }
// int main(){
//     setlocale(LC_ALL, "ru");
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);
//     std::string command{};
//     std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
//     std::cin >> command;
//     if(command == "��" || command == "��" || command == "��"){
//         std::cout << "�������� ��������� ��������: ";
//         int number{};
//         std::cin >> number;
//         Counter c1(number);
//         func_io(c1);
//     }
//     else if(command == "���" || command == "���" || command == "���"){
//         Counter c2;
//         func_io(c2);
//     }
//     else std::cout << "� ��� �� �������...";
//     return 0;
// }
