#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int count{};
public:
    Counter();
    Counter(int x);
    void countUP();
    void countDown();
    int get_count();
};

#endif // COUNTER_H
