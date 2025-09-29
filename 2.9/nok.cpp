#include <vector>
#include <algorithm>
#include <math.h>
#include <stdexcept>
#include "nok.h"
int nok(int a, int b){
    if(a == 0 && b == 0 ){
        throw std::runtime_error("Denominator first and second equals zero");
    }
    else if(a == 0){
        throw std::runtime_error("Denominator first equals zero");
    }
    else if(b == 0){
        throw std::runtime_error("Denominator second equals zero");
    }
    a = abs(a);
    b = abs(b);
    std::vector<int> a1;
    std::vector<int> b1;
    if(a == b)return a;
    int i = 2;
    while(i <= a || i <= b){
        if(a >= i){
            if(a % i == 0){
                a1.push_back(i);
                a /= i;
            }
        }
        if(b >= i){
            if(b % i == 0){
                b1.push_back(i);
                b /= i;
            }
        }
        if(b % i != 0 && a % i != 0) i++;
    }
    for(int j = 0; j < a1.size(); j++){
        auto it = find(b1.begin(), b1.end(), a1[j]);
        if(it != b1.end()) b1.erase(it);
    }
    int s = 1;
    for(int j = 0; j < a1.size() || j < b1.size(); j++){
        if(j < a1.size()) s *= a1[j];
        if(j < b1.size()) s *= b1[j];
    }
    return s;
}
