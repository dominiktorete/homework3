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
//         std::cout << "Работаю в боевом режиме" << std::endl;
//         std::cout << "Введите первое число: ";
//         std::cin >> a;
//         std::cout << "Введите второе число: ";
//         std::cin >> b;
//         std::cout << "Результат сложения: " << add(a,b) << std::endl;
//     #elif(MODE == 0)
//         std::cout << "Работаю в режиме тренировки" << std::endl;
//     #else
//         std::cout << "Неизвестный режим. Завершение работы!" << std::endl;

//     #endif
//     }
// #endif
// #ifndef MODE
//     #error Define MODE.
// #endif
