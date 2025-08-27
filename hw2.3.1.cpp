#include <iostream>
#include <locale>

class Calculator{
	double num1{}, num2{};
public:
	Calculator() = default;
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();
	bool set_num1(double num1);
	bool set_num2(double num2);

};
	double Calculator::add(){
		return num1 + num2;
	}
	double Calculator::multiply(){
		return num1 * num2;
	}
	double Calculator::subtract_1_2(){
		return num1 - num2;
	}
	double Calculator::subtract_2_1(){
		return num2 - num1;
	}
	double Calculator::divide_1_2(){
		return num1 / num2;
	}
	double Calculator::divide_2_1(){
		return num2 / num1;
	}
	bool Calculator::set_num1(double num1){
		if(num1 != 0){
			this->num1 = num1;
			return true;
		}
		else return false;
	}
	bool Calculator::set_num2(double num2){
		if(num2 != 0){
			this->num2 = num2;
			return true;
		}
		else return false;
	}

int main(){
	setlocale(LC_ALL, "ru");
	Calculator cl{};
	double num1{}, num2{};
	while(true){
		remove_num1:
		std::cout << "Введите num1: ";
		std::cin >> num1;
		if(!cl.set_num1(num1)){
			goto remove_num1;
		}
		remove_num2:
		std::cout << "Введите num2: ";
		std::cin >> num2;
		if(!cl.set_num2(num2)){
			goto remove_num2;
		}
		std::cout << "num1 + num2 = " << cl.add() << std::endl;
		std::cout << "num1 * num2 = " << cl.multiply() << std::endl;
		std::cout << "num1 - num2 = " << cl.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << cl.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << cl.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << cl.divide_2_1() << std::endl;
	}
	return 0;
}

