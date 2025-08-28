#include <iostream>
#include <locale>
#include <string>
class Counter{
	int value{};
public:
	Counter() : value(1)
	{}
	Counter(int individual_value) : value(individual_value)
	{}
	void increase_count();
	void decrease_count();
	int return_value_count();

};
	void Counter::increase_count(){
		++value;
	}
	void Counter::decrease_count(){
		--value;
	}
	int Counter::return_value_count(){
		return value;
	}

void function_dublicate(Counter& coun){
	std::string comm{};
	do{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> comm;
		if(comm == "+") coun.increase_count();
		else if(comm == "-") coun.decrease_count();
		else if(comm == "=") std::cout << coun.return_value_count() << std::endl;
	}while(comm != "x" && comm != "х");
}
int main(){
	setlocale(LC_ALL, "ru");
	int ind_val{};
	std::string command{};
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> command;
	if(command == "Да" || command == "да"){
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> ind_val;
		Counter count(ind_val);
		function_dublicate(count);
	}
	else{ Counter count;
		function_dublicate(count);
	}
	std::cout << "До свидания!";
	return 0;
}

/*
 * hw2.3.2.cpp
 *
 *  Created on: 27 авг. 2025 г.
 *      Author: emec8
 */




