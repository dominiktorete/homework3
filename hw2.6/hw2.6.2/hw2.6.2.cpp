// #include <iostream>
// #include <locale>
// #include <Windows.h>
// #include "counter.h"
// void func_io(Counter& cr){
//     char ch{};
//     do{
//         std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
//         std::cin >> ch;
//         if(ch == '+') cr.countUP();
//         else if(ch == '-')cr.countDown();
//         else if(ch == '=')std::cout << cr.get_count() << std::endl;
//         else if(ch == 'x' || ch == 'х') std::cout << "До свидания!" << std::endl;
//         else std::cout << "Такой команды нет!!!" << std::endl;
//     }while(ch != 'x' && ch != 'х');
// }
// int main(){
//     setlocale(LC_ALL, "ru");
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);
//     std::string command{};
//     std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
//     std::cin >> command;
//     if(command == "Да" || command == "да" || command == "ДА"){
//         std::cout << "Ввведите начальное значение: ";
//         int number{};
//         std::cin >> number;
//         Counter c1(number);
//         func_io(c1);
//     }
//     else if(command == "Нет" || command == "нет" || command == "НЕТ"){
//         Counter c2;
//         func_io(c2);
//     }
//     else std::cout << "Я вас не понимаю...";
//     return 0;
// }
