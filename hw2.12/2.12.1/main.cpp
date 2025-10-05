#include <iostream>
#include <cassert>
#include "extended_array.h"
using namespace std;
void test_mean() {
    ExtArray<int> v1(0);
    assert(v1.mean() == 0);
    std::cout << "Mean test OK" << std::endl;
}
void test_median() {
    ExtArray<double> v2(0);
    assert(v2.median() == 0);
    std::cout << "Median test OK" << std::endl;
}
void test_mode() {
    ExtArray<int> v1(0);
    assert(v1.mode() == std::pair(0, 0));
    std::cout << "Mode test OK" << std::endl;
}

int main()
{
    test_mean();
    test_median();
    test_mode();

    return 0;
}
