#include "counter.h"

Counter::Counter() : count(1) {}
Counter::Counter(int x) : count(x) {}
void Counter::countUP(){
    ++count;
}
void Counter::countDown(){
    --count;
}
int Counter::get_count(){
    return Counter::count;
}
