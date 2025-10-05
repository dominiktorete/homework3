#include <iostream>
#include "extended_array.h"
using namespace std;
void test_check_bool() {
    ExtArray<bool> v1{ true, false, true, false, true};
    try{
        v1.check_sum();
        std::cout << "check_bool test OK" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

}
void test_check_int() {
    ExtArray<int> v2{1, 0, 1, 0, 1 };
    try{
        v2.check_sum();
        std::cout << "check_int test OK" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }

}
void test_check_no_int() {
    ExtArray<int> v1{ 4, 2, 7, 2, 5, -5, 0, 5, 5 };
    try{
        v1.check_sum();
        std::cout << "check_no_int test OK" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;

    }


}

int main()
{
    test_check_bool();
    test_check_int();
    test_check_no_int();

    return 0;
}
