#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <locale>

class Addres{
	std::string city{};
	std::string street{};
	int number_home{};
	int number_float{};
public:
	Addres() = default;
	void set_city(std::ifstream& file);
	void set_street(std::ifstream& file);
	void set_number_home(std::ifstream& file);
	void set_number_float(std::ifstream& file);
	std::string get_city();
	std::string get_street();
	int get_number_home();
	int get_number_float();
};

	void Addres::set_city(std::ifstream& file){
		file >> city;
	}
	void Addres::set_street(std::ifstream& file){
		file >> street;
	}
	void Addres::set_number_home(std::ifstream& file){
		file >> number_home;
	}
	void Addres::set_number_float(std::ifstream& file){
		file >> number_float;
	}
	std::string Addres::get_city(){
		return city;
	}
	std::string Addres::get_street(){
		return street;
	}
	int Addres::get_number_home(){
		return number_home;
	}
	int Addres::get_number_float(){
		return number_float;
	}

	int main(){
		setlocale(LC_ALL, "ru");

		std::ifstream file_in("in.txt");
		std::vector<Addres> vec;
		int count_addres{};
		if(file_in.is_open()){
			file_in >> count_addres;
			for(int i = 0; i < count_addres; i++){
				Addres a1;
				a1.set_city(file_in);
				a1.set_street(file_in);
				a1.set_number_home(file_in);
				a1.set_number_float(file_in);
				vec.push_back(a1);
			}
			std::ofstream file_out("out.txt");
			if(file_out.is_open()){
				file_out << count_addres << std::endl;
				for(size_t i = vec.size()-1; i >= 0; i--){
					file_out << vec[i].get_city() << ", " << vec[i].get_street() << ", " << vec[i].get_number_home() << ", " << vec[i].get_number_float() << std::endl;
				}
			file_out.close();
			file_in.close();
			}
			else std::cout << "file_out is not open" << std::endl;
		}
		else std::cout << "file_in is not open" << std::endl;
	}


/*
 * hw2.4.1.cpp
 *
 *  Created on: 30 авг. 2025 г.
 *      Author: emec8
 */







