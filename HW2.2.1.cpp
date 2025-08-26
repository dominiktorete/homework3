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
    mounth moun;
    do{
    std::cout << "Введите номер месяца: ";
    std::cin >> number_of_mounth;
    moun = static_cast<mounth>(number_of_mounth);
    switch(moun){
        case mounth::January :
            std::cout << "Январь"<< std::endl;
            break;
        case mounth::February :
            std::cout << "Февраль"<< std::endl;
            break;  
        case mounth::March :
            std::cout << "Март"<< std::endl;
            break;
        case mounth::April :
            std::cout << "Апрель"<< std::endl;
            break;
        case mounth::May :
            std::cout << "Май"<< std::endl;
            break;
        case mounth::June :
            std::cout << "Июнь"<< std::endl;
            break;
        case mounth::July :
            std::cout << "Июль"<< std::endl;
            break;
        case mounth::August :
            std::cout << "Август"<< std::endl;
            break;
        case mounth::September :
            std::cout << "Сентябрь"<< std::endl;
            break;
        case mounth::October:
            std::cout << "Октябрь"<< std::endl;
            break;
        case mounth::November :
            std::cout << "Ноябрь"<< std::endl;
            break;
        case mounth::December :
            std::cout << "Декабрь"<< std::endl;
            break; 
        case mounth::Exit :
            std::cout << "До свидания!";
            break;
        default:
            std::cout << "Неверный номер!" << std::endl;
            break;
    }
    }while(moun != mounth::Exit);
    
    return 0;
}
    
