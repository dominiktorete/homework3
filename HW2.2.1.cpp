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
    std::cout << "������� ����� ������: ";
    std::cin >> number_of_mounth;
    switch(number_of_mounth){
        case static_cast<int>(mounth::January) :
            std::cout << "������"<< std::endl;
            break;
        case static_cast<int>(mounth::February) :
            std::cout << "�������"<< std::endl;
            break;  
        case static_cast<int>(mounth::March) :
            std::cout << "����"<< std::endl;
            break;
        case static_cast<int>(mounth::April) :
            std::cout << "������"<< std::endl;
            break;
        case static_cast<int>(mounth::May) :
            std::cout << "���"<< std::endl;
            break;
        case static_cast<int>(mounth::June) :
            std::cout << "����"<< std::endl;
            break;
        case static_cast<int>(mounth::July) :
            std::cout << "����"<< std::endl;
            break;
        case static_cast<int>(mounth::August) :
            std::cout << "������"<< std::endl;
            break;
        case static_cast<int>(mounth::September) :
            std::cout << "��������"<< std::endl;
            break;
        case static_cast<int>(mounth::October) :
            std::cout << "�������"<< std::endl;
            break;
        case static_cast<int>(mounth::November) :
            std::cout << "������"<< std::endl;
            break;
        case static_cast<int>(mounth::December) :
            std::cout << "�������"<< std::endl;
            break; 
        case static_cast<int>(mounth::Exit) :
            std::cout << "�� ��������!";
            break;
        default:
            std::cout << "�������� �����!" << std::endl;
            break;
    }
    }while(number_of_mounth != static_cast<int>(mounth::Exit));
    
    return 0;
}