// #include <iostream>
// #include <Windows.h>
// #include <locale>
// #define MODE 1
// #ifdef MODE
//     #if(MODE == 1)
//         int add(int a, int b){
//         return a + b;
//     }
//     #endif
//     int main(){
//         setlocale(LC_ALL, "ru");
//         SetConsoleCP(1251);
//         SetConsoleOutputCP(1251);
//     #if(MODE == 1)
//         int a{}, b{};
//         std::cout << "������� � ������ ������" << std::endl;
//         std::cout << "������� ������ �����: ";
//         std::cin >> a;
//         std::cout << "������� ������ �����: ";
//         std::cin >> b;
//         std::cout << "��������� ��������: " << add(a,b) << std::endl;
//     #elif(MODE == 0)
//         std::cout << "������� � ������ ����������" << std::endl;
//     #else
//         std::cout << "����������� �����. ���������� ������!" << std::endl;

//     #endif
//     }
// #endif
// #ifndef MODE
//     #error Define MODE.
// #endif
