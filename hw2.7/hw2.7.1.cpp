#include <iostream>
#include <Windows.h>
#include <locale>
#define MODE 1
#ifdef MODE
    #if(MODE == 1)
        int add(int a, int b){
        return a + b;
    }
    #endif
    int main(){
        setlocale(LC_ALL, "ru");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    #if(MODE == 1)
        int a{}, b{};
        std::cout << "Ðàáîòàþ â áîåâîì ðåæèìå" << std::endl;
        std::cout << "Ââåäèòå ïåðâîå ÷èñëî: ";
        std::cin >> a;
        std::cout << "Ââåäèòå âòîðîå ÷èñëî: ";
        std::cin >> b;
        std::cout << "Ðåçóëüòàò ñëîæåíèÿ: " << add(a,b) << std::endl;
    #elif(MODE == 0)
        std::cout << "Ðàáîòàþ â ðåæèìå òðåíèðîâêè" << std::endl;
    #else
        std::cout << "Íåèçâåñòíûé ðåæèì. Çàâåðøåíèå ðàáîòû!" << std::endl;

    #endif
    }
#endif
#ifndef MODE
    #error Define MODE.
#endif

