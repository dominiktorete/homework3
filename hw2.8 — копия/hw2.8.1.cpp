#include <iostream>
#include <string>
#define BAD_LENGTH -1
int function(std::string str, int forbidden_length);

int main(){

    int length{};
    std::cout << "Enter to forbidden length: ";
    std::cin >> length;
    std::string str{};
    while(true){
        std::cout << "Enter to string: ";
        std::cin >> str;
        try{
            int l = function(str,length);
            std::cout << "Length your string \"" << str << "\" is equal " << l << std::endl;
        }
        catch(std::exception& ex){
            std::cout << ex.what() << std::endl;
            break;
        }
    }
    return 0;
}
int function(std::string str, int forbidden_length){

    if(str.length() == forbidden_length){
        throw std::runtime_error("Your word is forbidden in length. Goodbye!");
    }
    else return str.length();
}
