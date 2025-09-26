#include "fraction_2.h"
#include "nod.h"
#include "Nod_2.h"
Fraction::Fraction(int numerator, int denominator)
{
    if((numerator < 0 && denominator < 0) || denominator < 0){
        numerator_ = -numerator;
        denominator_ = -denominator;
    }
    else{
        numerator_ = numerator;
        denominator_ = denominator;
    }
    int gcd = nod2(numerator_, denominator_);
    numerator_ /= gcd;
    denominator_ /= gcd;
}

bool Fraction::operator == ( Fraction &other){
    int common = nod(this->denominator_, other.denominator_);
    if((this->numerator_ * (common / this->denominator_)) == (other.numerator_ * (common / other.denominator_)))
        return true;
    else return false;
}
bool Fraction::operator != ( Fraction &other){
    if(*this == other) return false;
    else return true;
}
bool Fraction::operator < ( Fraction &other){
    int common = nod(this->denominator_, other.denominator_);
    if((this->numerator_ * (common / this->denominator_)) < (other.numerator_ * (common / other.denominator_)))
        return true;
    else return false;
}
bool Fraction::operator > ( Fraction &other){
    int common = nod(this->denominator_, other.denominator_);
    if((this->numerator_ * (common / this->denominator_)) > (other.numerator_ * (common / other.denominator_)))
        return true;
    else return false;
}
bool Fraction::operator <= ( Fraction &other){
    if(*this < other || *this == other)return true;
    else return false;
}
bool Fraction::operator >= ( Fraction &other){
    if(*this > other || *this == other)return true;
    else return false;
}
Fraction Fraction::operator+(Fraction &other){
    int common = nod(this->denominator_, other.denominator_);
    int numt = this->numerator_ * (common / this->denominator_);
    int numo = other.numerator_ * (common / other.denominator_);
    numt += numo;
    int den = common;
    int NOD = nod2(numt,den);
    if(NOD == 0)return Fraction(numt, den);
    numt /= NOD;
    den /= NOD;
    return Fraction(numt, den);
}
Fraction Fraction::operator-(Fraction &other){
    int common = nod(this->denominator_, other.denominator_);
    int numt = this->numerator_ * (common / this->denominator_);
    int numo = other.numerator_ * (common / other.denominator_);
    numt -= numo;
    int den = common;
    int NOD = nod2(numt,den);
    if(NOD == 0)return Fraction(numt, den);
    numt /= NOD;
    den /= NOD;
    return Fraction(numt, den);
}
Fraction Fraction::operator*(Fraction &other){
    int num = this->numerator_ * other.numerator_;
    int den = this->denominator_ * other.denominator_;
    int NOD = nod2(num,den);
    if(NOD == 0)return Fraction(num, den);
    num /= NOD;
    den /= NOD;
    return Fraction(num, den);
}
Fraction Fraction::operator/(Fraction &other){
    int num = this->numerator_ * other.denominator_;
    int den = this->denominator_ * other.numerator_;
    int NOD = nod2(num,den);
    if(NOD == 0)return Fraction(num, den);
    num /= NOD;
    den /= NOD;
    return Fraction(num, den);
}
Fraction Fraction::operator-(){
    return Fraction(-this->numerator_, -this->denominator_);
}
Fraction Fraction::operator--(){
    this->numerator_ -= this->denominator_;
    return *this;

}
Fraction Fraction::operator--(int){
    Fraction temp(this->numerator_, this->denominator_);
    this->numerator_ -= this->denominator_;
    return temp;
}
Fraction Fraction::operator++(){
    this->numerator_ += this->denominator_;
    return *this;
}
Fraction Fraction::operator++(int){
    Fraction temp(this->numerator_, this->denominator_);
    this->numerator_ += this->denominator_;
    return temp;
}
std::ostream& operator << (std::ostream&, Fraction obj){
    std::cout << obj.numerator_ << '/' << obj.denominator_;
    return std::cout;
}
