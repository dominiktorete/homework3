#include <iostream>
#include <locale>
#include <Windows.h>
#include "counter.h"
void func_io(Counter& cr){
    char ch{};
    do{
        std::cout << "Ââåäèòå êîìàíäó ('+', '-', '=' èëè 'x'): ";
        std::cin >> ch;
        if(ch == '+') cr.countUP();
        else if(ch == '-')cr.countDown();
        else if(ch == '=')std::cout << cr.get_count() << std::endl;
        else if(ch == 'x' || ch == 'õ') std::cout << "Äî ñâèäàíèÿ!" << std::endl;
        else std::cout << "Òàêîé êîìàíäû íåò!!!" << std::endl;
    }while(ch != 'x' && ch != 'õ');
}
int main(){
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string command{};
    std::cout << "Âû õîòèòå óêàçàòü íà÷àëüíîå çíà÷åíèå ñ÷¸ò÷èêà? Ââåäèòå äà èëè íåò: ";
    std::cin >> command;
    if(command == "Äà" || command == "äà" || command == "ÄÀ"){
        std::cout << "Âââåäèòå íà÷àëüíîå çíà÷åíèå: ";
        int number{};
        std::cin >> number;
        Counter c1(number);
        func_io(c1);
    }
    else if(command == "Íåò" || command == "íåò" || command == "ÍÅÒ"){
        Counter c2;
        func_io(c2);
    }
    else std::cout << "ß âàñ íå ïîíèìàþ...";
    return 0;
}

