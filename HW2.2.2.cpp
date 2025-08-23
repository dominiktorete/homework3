#include <iostream>
#include <windows.h>
#include <string>

struct Person{
private:
    long long number{};
    std::string name{};
    long double balance{};
public:
    void set_number(long long numb){
        number = numb;
    }
    void set_name(std::string str){
        name = str;
    }
    void set_balance(long double bal){
        balance = bal;
    }
    void get_data_person(){
        std::cout << "¬аш счет: " << name << ", " << number << ", " << balance << std::endl;
    }

};

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Person pers;
    long long numb{};
    long double bal{};
    std::string name{};
    std::cout << "¬ведите номер счета: ";
    std::cin >> numb;
    std::cout << "¬ведите им€ владельца счета: ";
    getline(std::cin >> std::ws, name); 
    std::cout << "¬ведите баланс: ";
    std::cin >> bal;
    pers.set_number(numb);
    pers.set_name(name);
    pers.set_balance(bal);
    pers.get_data_person();
    return 0;
}