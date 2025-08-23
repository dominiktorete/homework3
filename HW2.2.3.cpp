#include <iostream>
#include <windows.h>
#include <string>

struct Addres{
private:
    std::string city{};
    std::string street{};
    int number_of_home{};
    int number_of_flat{};
    int index{};
public:
    void set_city(std::string str){
        city = str;
    }
    void set_street(std::string str){
        street = str;
    }
    void set_number_home(int numbhome){
        number_of_home = numbhome;
    }
    void set_number_flat(int numbflat){
        number_of_flat = numbflat;
    }
    void set_index(int inx){
        index = inx;
    }
    std::string get_city(){
        return city;
    }
    std::string get_street(){
        return street;
    }
    int get_number_home(){
        return number_of_home;
    }
    int get_number_flat(){
        return number_of_flat;
    }
    int get_index(){
        return index;
    }

};
void output(Addres& addres){
    std::cout << "Город: " << addres.get_city() << std::endl;
    std::cout << "Улица: " << addres.get_street() << std::endl;
    std::cout << "Номер дома: " << addres.get_number_home() << std::endl;
    std::cout << "Номер квартиры: " << addres.get_number_flat() << std::endl;
    std::cout << "Индекс: " << addres.get_index() << std::endl;
    std::cout << "\n";
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Addres addr, addr2;
    addr.set_city("Москва");
    addr.set_street("Арбат");
    addr.set_number_home(12);
    addr.set_number_flat(8);
    addr.set_index(123456);
    addr2.set_city("Ижевск");
    addr2.set_street("Пушкино");
    addr2.set_number_home(59);
    addr2.set_number_flat(143);
    addr2.set_index(953769);
    output(addr);
    output(addr2);
    return 0;
}