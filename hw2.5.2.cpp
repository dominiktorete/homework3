#include <iostream>
class Shape{
protected:
	virtual void get_value_shape(){};
public:
	void print_info(Shape* sh){
		sh->get_value_shape();
		std::cout << "\n";
	}
	virtual ~Shape(){}
};
class Triangle : public Shape{
protected:
	int a{}, b{}, c{};
	int A{}, B{}, C{};
	void get_value_shape() override
	{
		std::cout << "Треугольник: " << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
	}
public:
	Triangle(int _a, int _b, int _c, int _A, int _B, int _C)
		: a(_a), b(_b), c(_c), A(_A), B(_B), C(_C){}

};
class TriangleRect : public Triangle{
private:
	void get_value_shape() override
	{
		std::cout << "Прямоугольный треугольник: " << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
	}
public:
	TriangleRect(int _a, int _b, int _c, int _A, int _B):Triangle(_a, _b, _c, _A, _B, 90){}

};
class TriangleIsos : public Triangle{
private:
	void get_value_shape() override
	{
		std::cout << "Равнобедренный треугольник: " << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
	}
public:
	TriangleIsos(int _a, int _b, int _A, int _B):Triangle(_a, _b, _a, _A, _B, _A){}

};
class TriangleEqual : public Triangle{
private:
	void get_value_shape() override
	{
		std::cout << "Равносторонний треугольник: " << std::endl;
		std::cout << "Стороны: " << "a=" << a << " b="<< b << " c="<< c << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << std::endl;
	}
public:
	TriangleEqual(int _a):Triangle(_a, _a, _a, 60, 60, 60){}

};
class Quadrangle : public Shape{
protected:
	int a{}, b{}, c{}, d{};
	int A{}, B{}, C{}, D{};

	void get_value_shape() override
	{
		std::cout << "Четырёхугольник:" << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
	}
public:
	Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D)
	: a(_a), b(_b), c(_c), d(_d), A(_A), B(_B), C(_C), D(_D){}
};
class Parallelogram : public Quadrangle{
private:

	void get_value_shape() override
	{
		std::cout << "Параллелограмм: " << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
	}
public:
	Parallelogram(int _a, int _b, int _A, int _B ): Quadrangle(_a, _b, _a, _b, _A, _B, _A, _B){}
};
class Rectangle : public Parallelogram{
private:
	void get_value_shape() override
	{
		std::cout << "Прямоугольник: " << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
	}
public:
	Rectangle(int _a, int _b):Parallelogram(_a, _b, 90, 90){}
};
class Square : public Rectangle{

	void get_value_shape() override
	{
		std::cout << "Квадрат: " << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
	}
public:
	Square(int _a):Rectangle(_a, _a){}
};

class Romb : public Parallelogram{
private:
	void get_value_shape() override
	{
		std::cout << "Ромб: " << std::endl;
		std::cout << "Стороны: " << "a="<< a << " b="<< b << " c="<< c << " d="<< d << std::endl;
		std::cout << "Углы: " << "A="<< A << " B="<< B << " C="<< C << " D="<< D <<std::endl;
	}
public:
	Romb(int _a, int _A, int _B):Parallelogram(_a, _a, _A, _B){}
};

int main(){
	Shape sh;
	Triangle tr(10, 20, 30, 50, 60, 70);
	TriangleRect trR(10,20,30,50,60);
	TriangleIsos trI(10,20,50,60);
	TriangleEqual trEq(30);
	Quadrangle q(10,20,30,40,50,60,70,80);
	Rectangle re(10,20);
	Square s(20);
	Parallelogram p(20,30,30,40);
	Romb romb(30,30,40);
	sh.print_info(&tr);
	sh.print_info(&trR);
	sh.print_info(&trI);
	sh.print_info(&trEq);
	sh.print_info(&q);
	sh.print_info(&re);
	sh.print_info(&s);
	sh.print_info(&p);
	sh.print_info(&romb);

}










/*
 * hw2.5.1.cpp
 *
 *  Created on: 2 сент. 2025 г.
 *      Author: emec8
 */




/*
 * hw2.5.2.cpp
 *
 *  Created on: 3 сент. 2025 г.
 *      Author: emec8
 */




