#include <math.h>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "nod.h"
int nod(int a, int b){
    if(b == 0 && a == 0){
        throw std::runtime_error("Denominator equals zero and numerator equals zero");
    }
    else if(a == 0){
        return 0;
    }
    else if(b == 0){
        throw std::runtime_error("Devide by zero, denominator equals zero");
    }
    a = abs(a);
    b = abs(b);
    std::vector<int> a1;
    std::vector<int> b1;
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
    int s = 1;
    for(int j = 0; j < a1.size(); j++){
        auto it = find(b1.begin(), b1.end(), a1[j]);
        if(it != b1.end()){
            s *= a1[j];
            b1.erase(it);
        }
    }
    return s;
}
