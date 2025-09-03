#include <iostream>
class Shape{
protected:
	int count_side = 0;
	virtual bool check(){
		if(count_side == 0)
			return true;
		else return false;
	}
public:
	Shape(int _count_side) : count_side(_count_side){}
	virtual void print_info(){
		std::cout << "Фигура: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "\n";
	}
	virtual ~Shape(){}
};
class Triangle : public Shape{
protected:
	int a{}, b{}, c{};
	int A{}, B{}, C{};
	virtual bool check(){
		if(count_side == 3 && (A + B + C) == 180)
			return true;
		else return false;
	}

public:
	Triangle(int _count_side, int _a, int _b, int _c, int _A, int _B, int _C ) : Shape(_count_side), a(_a), b(_b), c(_c), A(_A), B(_B), C(_C){}
	void print_info() override
	{
		std::cout << "Треугольник: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
		std::cout << "\n";
	}

};
class TriangleRect : public Triangle{
private:
	virtual bool check(){
		if(C == 90 && Triangle::check())
			return true;
		else return false;
	}
public:
	TriangleRect(int count_s, int _a, int _b, int _c, int _A, int _B, int _C )
	: Triangle(count_s, _a, _b, _c, _A, _B, _C){}
	void print_info() override
	{
		std::cout << "Прямоугольный треугольник: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
		std::cout << "\n";
	}
};
class TriangleIsos : public Triangle{
private:
	virtual bool check(){
		if(A == C && a == c && Triangle::check())
			return true;
		else return false;
	}
public:
	TriangleIsos(int count_s, int _a, int _b, int _c, int _A, int _B, int _C )
	: Triangle( count_s, _a, _b, _a, _A, _B, _A){}
	void print_info() override
	{
		std::cout << "Равнобедренный треугольник: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
		std::cout << "\n";
	}
};
class TriangleEqual : public Triangle{
private:
	virtual bool check(){
		if(a == c && c == b && a == b && A == C && C == B && Triangle::check())
			return true;
		else return false;
	}
public:
	TriangleEqual( int count_s, int _a, int _b, int _c, int _A, int _B, int _C)
	: Triangle( count_s, _a, _b, _a, _A, _B, _A){}
	void print_info() override
	{
		std::cout << "Равносторонний треугольник: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
		std::cout << "\n";
	}
};
class Quadrangle : public Shape{
protected:
	int a, b, c, d, A, B, C, D;
	virtual bool check(){
		if(count_side == 4 && (A + C + B + D) == 360)
			return true;
		else return false;
	}
public:
	Quadrangle(int count_s, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D )
	: Shape(count_s), a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D) {}
	void print_info() override
	{
		std::cout << "Четырёхугольник:" << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
		std::cout << "\n";
	}
};
class Parallelogram : public Quadrangle{
private:
	virtual bool check(){
		if(a == c && b == d && A == C && B == D && Quadrangle::check())
			return true;
		else return false;
	}
public:
	Parallelogram(int count_s, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D )
	: Quadrangle( count_s,_a, _b, _c, _d, _A, _B, _C, _D ){}
	void print_info() override
	{
		std::cout << "Параллелограмм: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
		std::cout << "\n";
	}


};
class Rectangle : public Parallelogram{
private:
	virtual bool check(){
		if(a == c && b == d && A == C && C == B && B == D && D == 90 && Quadrangle::check())
			return true;
		else return false;
	}
public:
	Rectangle(int count_s, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D )
	: Parallelogram( count_s ,_a, _b, _c, _d, _A, _B, _C, _D){}
	void print_info() override
	{
		std::cout << "Прямоугольник: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
		std::cout << "\n";
	}


};
class Square : public Rectangle{
private:
	virtual bool check(){
		if(a == c && c == b && b == d && A == C && C == B && B == D && D == 90 && Quadrangle::check())
			return true;
		else return false;
	}
public:
	Square(int count_s, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D )
	: Rectangle( count_s, _a, _b, _c, _d, _A, _B, _C, _D){}
	void print_info() override
	{
		std::cout << "Квадрат: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
		std::cout << "\n";
	}


};

class Romb : public Parallelogram{
private:
	virtual bool check(){
		if(a == c && c == b && b == d && A == C && B == D && Quadrangle::check())
			return true;
		else return false;
	}
public:
	Romb(int count_s, int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D )
	: Parallelogram(count_s, _a, _b, _c, _d, _A, _B, _C, _D ){}
	void print_info() override
	{
		std::cout << "Ромб: " << std::endl;
		if(check())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Колчество сторон: " << count_side << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
		std::cout << "\n";
	}

};

int main(){
	Shape sh(0);
	Triangle tr(3, 10, 20, 30, 50, 60, 70);
	TriangleRect trR(3, 10, 20, 30, 50, 60, 90);
	TriangleRect trR2(3, 10, 20, 30, 40, 50, 90);
	TriangleIsos trI(3, 10, 20, 10, 50, 60, 50);
	TriangleEqual trEq(3, 30, 30, 30, 60, 60, 60);
	Quadrangle q(4, 10,20,30,40,50,60,70,80);
	Rectangle re(4, 10,20, 10, 20, 90, 90, 90, 90);
	Square s(4, 20, 20, 20, 20, 90, 90, 90, 90);
	Parallelogram p(4, 20, 30, 20, 30, 30, 40, 30, 40);
	Romb romb(4, 30, 30, 30, 30, 30, 40, 30, 40);
	Shape* shptr = &sh;
	Shape* trptr = &tr;
	Shape* trRptr = &trR;
	Shape* trR2ptr = &trR2;
	Shape* tIptr = &trI;
	Shape* tEqptr = &trEq;
	Shape* qptr = &q;
	Shape* reptr = &re;
	Shape* sptr = &s;
	Shape* pptr = &p;
	Shape* rombptr = &romb;

	shptr->print_info();
	trptr->print_info();
	trRptr->print_info();
	trR2ptr->print_info();
	tIptr->print_info();
	tEqptr->print_info();
	qptr->print_info();
	reptr->print_info();
	sptr->print_info();
	pptr->print_info();
	rombptr->print_info();

}


/*
 * hw2.5.3.cpp
 *
 *  Created on: 3 сент. 2025 г.
 *      Author: emec8
 */




