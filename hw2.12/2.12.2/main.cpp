#include <iostream>
#include <exception>
#include "extended_array.h"
using namespace std;
void test_mean() {
    ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
    int begin = 1, end = 4;
    try{
        double c = v1.mean(begin, end);
        std::cout << "Mean test OK" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
}
void test_mean_no() {
    ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
    int begin = 4, end = 4;
    try{
        double c = v1.mean(begin, end);
        std::cout << "Mean test OK" << std::endl;
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
}
int main()
{
    test_mean();
    test_mean_no();
    return 0;
}
