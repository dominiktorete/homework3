#include <iostream>
#include <windows.h>
enum class mounth  { 
    Exit,
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number_of_mounth{};
    
    do{
    std::cout << "Введите номер месяца: ";
    std::cin >> number_of_mounth;
    switch(number_of_mounth){
        case static_cast<int>(mounth::January) :
            std::cout << "Январь"<< std::endl;
            break;
        case static_cast<int>(mounth::February) :
            std::cout << "Февраль"<< std::endl;
            break;  
        case static_cast<int>(mounth::March) :
            std::cout << "Март"<< std::endl;
            break;
        case static_cast<int>(mounth::April) :
            std::cout << "Апрель"<< std::endl;
            break;
        case static_cast<int>(mounth::May) :
            std::cout << "Май"<< std::endl;
            break;
        case static_cast<int>(mounth::June) :
            std::cout << "Июнь"<< std::endl;
            break;
        case static_cast<int>(mounth::July) :
            std::cout << "Июль"<< std::endl;
            break;
        case static_cast<int>(mounth::August) :
            std::cout << "Август"<< std::endl;
            break;
        case static_cast<int>(mounth::September) :
            std::cout << "Сентябрь"<< std::endl;
            break;
        case static_cast<int>(mounth::October) :
            std::cout << "Октябрь"<< std::endl;
            break;
        case static_cast<int>(mounth::November) :
            std::cout << "Ноябрь"<< std::endl;
            break;
        case static_cast<int>(mounth::December) :
            std::cout << "Декабрь"<< std::endl;
            break; 
        case static_cast<int>(mounth::Exit) :
            std::cout << "До свидания!";
            break;
        default:
            std::cout << "Неверный номер!" << std::endl;
            break;
    }
    }while(number_of_mounth != static_cast<int>(mounth::Exit));
    
    return 0;
}