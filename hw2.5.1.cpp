#include <iostream>
class Shape{
	int count_side{};
public:
	Shape(int arg = 0) : count_side(arg){}
	int get_count_side(){
		return count_side;
	}
};
class Triangle : public Shape{
public:
	Triangle(int arg = 3) : Shape(arg){}
};
class Rectangle : public Shape{
public:
	Rectangle(int arg = 4) : Shape(arg){}
};

int main(){
	Shape s;
	Triangle tr;
	Rectangle re;
	std::cout << "Количество сторон:" << std::endl;
	std::cout << "Фигура: " << s.get_count_side() << std::endl;
	std::cout << "Треугольник: " << tr.get_count_side() << std::endl;
	std::cout << "Четырёхугольник: " << re.get_count_side() << std::endl;


}










/*
 * hw2.5.1.cpp
 *
 *  Created on: 2 сент. 2025 г.
 *      Author: emec8
 */




