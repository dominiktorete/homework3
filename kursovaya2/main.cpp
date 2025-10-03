#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "camel.h"
#include "camel_fast.h"
#include "centawr.h"
#include "boots.h"
#include "carpet.h"
#include "eagle.h"
#include "broom.h"
#include "groundrace.h"
#include "airrace.h"
using namespace std;
void print_to_groundrace();
void print_to_airrace();
void print_to_airgroundrace();
int print_to_try_exit();
int print_to_run_registred(int count_regist);
std::vector<std::pair<std::string, double>> get_resultskyground(std::vector<std::pair<std::string, double>> sky, std::vector<std::pair<std::string, double>> ground);
int main()
{
    int command{};
    std::cout << "Welcome to the racing simulator!!!" << std::endl;
    while(true){
        std::cout << "Enter to race mode: " << std::endl;
        std::cout << "1. Land vehicle race" << std::endl;
        std::cout << "2. Air vehicle race" << std::endl;
        std::cout << "3. Air and land vehicle race" << std::endl;
        std::cout << "Enter to race mode: ";
        std::cin >> command;
        if(command == 1){
            print_to_groundrace();
            if(print_to_try_exit() == 1)continue;
            else{
                std::cout << "Goodbye!!!" << std::endl;
                return 0;
            }
        }
        else if(command == 2){
            print_to_airrace();
            if(print_to_try_exit() == 1)continue;
            else{
                std::cout << "Goodbye!!!" << std::endl;
                return 0;
            }
        }
        else if(command == 3){
            print_to_airgroundrace();
            if(print_to_try_exit() == 1)continue;
            else{
                std::cout << "Goodbye!!!" << std::endl;
                return 0;
            }
        }
        else{
            std::cout << "Incorrect number, try again, please" << std::endl;
        }
    }
    return 0;
}
std::vector<std::pair<std::string, double>> get_resultskyground(std::vector<std::pair<std::string, double>> sky, std::vector<std::pair<std::string, double>> ground){
    sky.insert(sky.end(), ground.begin(), ground.end());
    std::sort(sky.begin(), sky.end(),
              [](const std::pair<std::string, double>& a, std::pair<std::string, double>& b )
              { return a.second < b.second;});
    return sky;
}
int print_to_run_registred(int count_regist){
    int comm{};
    do{
        std::cout << "1. Register vehicle" << std::endl;
        std::cout << "2. Run vehicle race" << std::endl;
        std::cout << "Enter: ";
        std::cin >> comm;
        if(comm == 1)return 1;
        else if(comm == 2 && count_regist >= 2) return 2;
        else if(comm == 2 && count_regist < 2){
            std::cout << "Count register vehicle < 2" << std::endl;
        }
        else {
            std::cout << "Incorrect number!!!" << std::endl;
        }
    }while(true);
}
int print_to_try_exit(){
    int command{};
    do{
    std::cout << "1. Try again?" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cout << "Enter: ";
    std::cin >> command;
    if(command != 1 && command != 2)
    {
        std::cout << "Incorrect number!!!" << std::endl;
    }
    }while(command != 1 && command != 2);
    return command;
}
void print_to_groundrace(){
    int distance{};
    int count_register{};
    int command{};
    GroundRace Race;
    do{
        std::cout << "Enter to distance: ";
        std::cin >> distance;
        if(distance <= 0){
            std::cout << "Incorrect value distance!!!" << std::endl;
        }
    }while(distance <= 0);
    do{
        std::cout << "Register at least 2 vehicles" << std::endl;
        std::cout << "1. Register vehicle" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command != 1){
            std::cout << "Incorrect number!!!" << std::endl;
        }
    }while(command != 1);
    do{
        std::cout << "Land vehicle race. Distance: " << distance << std::endl;
        if(Race.get_size_vector() > 0){
            std::cout << "Register vehicle: ";
            for(int i = 0; i < Race.get_size_vector(); i++){
                if(i < Race.get_size_vector() - 1)
                    std::cout << Race.get_name_vehicle(i) << ", ";
                else
                    std::cout << Race.get_name_vehicle(i);
            }
            std::cout << std::endl;
        }
        std::cout << "Enter to vehicle!!!" << std::endl;
        std::cout << "1. Camel" << std::endl;
        std::cout << "2. Fast camel" << std::endl;
        std::cout << "3. Centaur" << std::endl;
        std::cout << "4. All-terrain boots" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command == 1){
            if(Race.set_registr_groundTC(new Camel())){
                std::cout << "Register Camel succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Camel is registered" << std::endl;
                continue;
            }
        }
        else if(command == 2){
            if(Race.set_registr_groundTC(new Camel_fast())){
                std::cout << "Register Camel fast succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Camel fast is registered" << std::endl;
                continue;
            }
        }
        else if(command == 3){
            if(Race.set_registr_groundTC(new Centawr())){
                std::cout << "Register Centaur succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Centaur is registered" << std::endl;
                continue;
            }
        }
        else if(command == 4){
            if(Race.set_registr_groundTC(new Boots())){
                std::cout << "Register All-terrain boots succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "All-terrain boots is registered" << std::endl;
                continue;
            }
        }
        else if(command == 0){
            if(print_to_run_registred(count_register) == 1) continue;
            else break;
        }
        else {
            std::cout << "Incorrect number!!!" << std::endl;
            continue;
        }
    }while(true);
    std::vector<std::pair<std::string, double>> res = Race.get_result(distance);
    for(int i = 0; i < res.size(); i++){
        std::cout << i+1 << ". " << res[i].first << ". Time: " << res[i].second << std::endl;
    }
}
void print_to_airrace(){
    int distance{};
    int count_register{};
    int command{};
    AirRace Race;
    do{
        std::cout << "Enter to distance: ";
        std::cin >> distance;
        if(distance <= 0){
            std::cout << "Incorrect value distance!!!" << std::endl;
        }
    }while(distance <= 0);
    do{
        std::cout << "Register at least 2 vehicles" << std::endl;
        std::cout << "1. Register vehicle" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command != 1){
            std::cout << "Incorrect number!!!" << std::endl;
        }
    }while(command != 1);
    do{
        std::cout << "Air vehicle race. Distance: " << distance << std::endl;
        if(Race.get_size_vectorsky() > 0){
            std::cout << "Register vehicle: ";
            for(int i = 0; i < Race.get_size_vectorsky(); i++){
                if(i < Race.get_size_vectorsky() - 1)
                    std::cout << Race.get_namesky_vehicle(i) << ", ";
                else
                    std::cout << Race.get_namesky_vehicle(i);
            }
            std::cout << std::endl;
        }
        std::cout << "Enter to vehicle!!!" << std::endl;
        std::cout << "1. Carpet" << std::endl;
        std::cout << "2. Eagle" << std::endl;
        std::cout << "3. Broom" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command == 1){
            if(Race.set_registr_skyTC(new Carpet())){
                std::cout << "Register Carpet succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Carpet is registered" << std::endl;
                continue;
            }
        }
        else if(command == 2){
            if(Race.set_registr_skyTC(new Eagle())){
                std::cout << "Register Eagle succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Eagle is registered" << std::endl;
                continue;
            }
        }
        else if(command == 3){
            if(Race.set_registr_skyTC(new Broom())){
                std::cout << "Register Broom succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Broom is registered" << std::endl;
                continue;
            }
        }
        else if(command == 0){
            if(print_to_run_registred(count_register) == 1) continue;
            else break;
        }
        else {
            std::cout << "Incorrect number!!!" << std::endl;
            continue;
        }
    }while(true);
    std::vector<std::pair<std::string, double>> res = Race.get_resultsky(distance);
    for(int i = 0; i < res.size(); i++){
        std::cout << i+1 << ". " << res[i].first << ". Time: " << res[i].second << std::endl;
    }
}
void print_to_airgroundrace(){
    int distance{};
    int count_register{};
    int command{};
    AirRace AR;
    GroundRace GR;
    do{
        std::cout << "Enter to distance: ";
        std::cin >> distance;
        if(distance <= 0){
            std::cout << "Incorrect value distance!!!" << std::endl;
        }
    }while(distance <= 0);
    do{
        std::cout << "Register at least 2 vehicles" << std::endl;
        std::cout << "1. Register vehicle" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command != 1){
            std::cout << "Incorrect number!!!" << std::endl;
        }
    }while(command != 1);
    do{
        std::cout << "Land vehicle race. Distance: " << distance << std::endl;
        if(GR.get_size_vector() > 0 || AR.get_size_vectorsky() > 0){
            std::cout << "Register vehicle: ";
            for(int i = 0; i < GR.get_size_vector(); i++){
                if(i < GR.get_size_vector() - 1)
                    std::cout << GR.get_name_vehicle(i) << ", ";
                else
                    std::cout << GR.get_name_vehicle(i);
            }
            if(GR.get_size_vector() > 0 && AR.get_size_vectorsky() > 0)std::cout << ", ";
            for(int i = 0; i < AR.get_size_vectorsky(); i++){
                if(i < AR.get_size_vectorsky() - 1)
                    std::cout << AR.get_namesky_vehicle(i) << ", ";
                else
                    std::cout << AR.get_namesky_vehicle(i);
            }
        }
        std::cout << std::endl;
        std::cout << "Enter to vehicle!!!" << std::endl;
        std::cout << "1. Camel" << std::endl;
        std::cout << "2. Fast camel" << std::endl;
        std::cout << "3. Centaur" << std::endl;
        std::cout << "4. All-terrain boots" << std::endl;
        std::cout << "5. Carpet" << std::endl;
        std::cout << "6. Eagle" << std::endl;
        std::cout << "7. Broom" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter: ";
        std::cin >> command;
        if(command == 1){
            if(GR.set_registr_groundTC(new Camel())){
                std::cout << "Register Camel succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Camel is registered" << std::endl;
                continue;
            }
        }
        else if(command == 2){
            if(GR.set_registr_groundTC(new Camel_fast())){
                std::cout << "Register Camel fast succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Camel fast is registered" << std::endl;
                continue;
            }
        }
        else if(command == 3){
            if(GR.set_registr_groundTC(new Centawr())){
                std::cout << "Register Centaur succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Centaur is registered" << std::endl;
                continue;
            }
        }
        else if(command == 4){
            if(GR.set_registr_groundTC(new Boots())){
                std::cout << "Register All-terrain boots succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "All-terrain boots is registered" << std::endl;
                continue;
            }
        }
        if(command == 5){
            if(AR.set_registr_skyTC(new Carpet())){
                std::cout << "Register Carpet succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Carpet is registered" << std::endl;
                continue;
            }
        }
        else if(command == 6){
            if(AR.set_registr_skyTC(new Eagle())){
                std::cout << "Register Eagle succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Eagle is registered" << std::endl;
                continue;
            }
        }
        else if(command == 7){
            if(AR.set_registr_skyTC(new Broom())){
                std::cout << "Register Broom succesful" << std::endl;
                count_register++;
            }
            else {
                std::cout << "Broom is registered" << std::endl;
                continue;
            }
        }
        else if(command == 0){
            if(print_to_run_registred(count_register) == 1) continue;
            else break;
        }
        else {
            std::cout << "Incorrect number!!!" << std::endl;
            continue;
        }
    }while(true);
    std::vector<std::pair<std::string, double>> resground = GR.get_result(distance);
    std::vector<std::pair<std::string, double>> ressky = AR.get_resultsky(distance);

    std::vector<std::pair<std::string, double>> res = get_resultskyground(resground, ressky);
    for(int i = 0; i < res.size(); i++){
        std::cout << i+1 << ". " << res[i].first << ". Time: " << res[i].second << std::endl;
    }
}
