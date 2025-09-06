#include <iostream>
#include <math.h>
#include "math_func.h"
void sum(double a, double b){
    std::cout << a << " + " << b << " = " << a + b;
}
void subtract(double a, double b){
    std::cout << a << " - " << b << " = " << a - b;
}
void divide(double a, double b){
    if(b == 0){
        std::cerr << "Error: divide by zero!!!" << std::endl;
        return;
    }
    std::cout << a << " / " << b << " = " << a / b;
}
void multiply(double a, double b){
    std::cout << a << " * " << b << " = " << a * b;
}
void pow_h(double a, double b){
    std::cout << a << " ^ " << b << " = " << pow(a, b);
}
