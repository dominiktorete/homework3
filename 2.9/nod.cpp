#include <vector>
#include <algorithm>
#include <math.h>
#include "nod.h"
int nod(int a, int b){
    a = abs(a);
    b = abs(b);
    if(a % b == 0 || b % a == 0){
        if (a % b == 0) return a;
        else return b;
    }
    for(int i = 2; i < a; i++){
        if(i <= a/2){
            if(a % i == 0) break;
        }
        else return a*b;
    }
    for(int i = 2; i < b; i++){
        if(i <= b/2){
            if(b % i == 0) break;
        }
        else return a*b;
    }
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
    for(int j = 0; j < a1.size(); j++){
        auto it = find(b1.begin(), b1.end(), a1[i]);
        if(it != b1.end()) b1.erase(it);
    }
    int s = 1;
    for(int j = 0; j < a1.size() || j < b1.size(); j++){
        if(j < a1.size()) s *= a1[i];
        if(j < b1.size()) s *= b1[i];
    }
    return s;
}
