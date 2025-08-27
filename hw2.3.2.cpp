#include <iostream>
#include <locale>
#include <string>
class Counter{
	int value{};
public:
	Counter() : value(1)
	{}
	void set_individual_value(int individual_value);
	void increase_count();
	void decrease_count();
	int return_value_count();

};
	void Counter::set_individual_value(int individual_value){
		value = individual_value;
	}
	void Counter::increase_count(){
		++value;
	}
	void Counter::decrease_count(){
		--value;
	}
	int Counter::return_value_count(){
		return value;
	}

int main(){
	setlocale(LC_ALL, "ru");
	int ind_val{};
	std::string command{};
	Counter count;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> command;
	if(command == "Да" || command == "да"){
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> ind_val;
		count.set_individual_value(ind_val);
	}
	do{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> command;
		if(command == "+") count.increase_count();
		else if(command == "-") count.decrease_count();
		else if(command == "=") std::cout << count.return_value_count() << std::endl;
	}while(command != "x" && command != "х");
	std::cout << "До свидания!";
	return 0;
}

/*
 * hw2.3.2.cpp
 *
 *  Created on: 27 авг. 2025 г.
 *      Author: emec8
 */




