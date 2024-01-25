#include"Functionalities.h"

void CreateObjectS(Container& data){
    data.emplace(std::make_pair(101,std::make_unique<Employee>(101,"JAtin",2000.0f)));
    data.emplace(std::make_pair(102,std::make_unique<Employee>(102,"JAtin2",4000.0f)));
    data.emplace(std::make_pair(103,std::make_unique<Employee>(103,"JAtin3",5000.0f)));
}