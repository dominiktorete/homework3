#ifndef FRACTION_2_H
#define FRACTION_2_H
#include <iostream>
class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator);

    bool operator == ( Fraction &other);
    bool operator != ( Fraction &other);
    bool operator < ( Fraction &other);
    bool operator > ( Fraction &other);
    bool operator <= ( Fraction &other);
    bool operator >= ( Fraction &other);
    Fraction operator+(Fraction &other);
    Fraction operator-(Fraction &other);
    Fraction operator*(Fraction &other);
    Fraction operator/(Fraction &other);
    Fraction operator-();
    Fraction operator--();
    Fraction operator--(int);
    Fraction operator++();
    Fraction operator++(int);
    friend std::ostream& operator << (std::ostream&, Fraction obj);

};

#endif // FRACTION_2_H
