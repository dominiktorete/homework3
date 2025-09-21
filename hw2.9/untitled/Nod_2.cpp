#include <math.h>
#include "Nod_2.h"
int nod2(int a, int b){
    a = abs(a);
    b = abs(b);
    while(a != b){
        if(a > b){
            a -= b;
        }
        else b -= a;
        if(a <= 0) return 0;
        else if(b <= 0) return 0;
    }
    return a;
}
