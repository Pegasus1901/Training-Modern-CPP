#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Employee.h"
#include"BuisnessMan.h"

#include<memory>
#include<vector>
#include<thread>
#include<mutex>
#include<optional>

//I need alias for shared pointer to employee
using EmpPointer= std::shared_ptr<Employee>;

//I need alias for shared pointer to buisnessman
using BuisnessmanPtr = std::shared_ptr<BuisnessMan>;

//I need alias for variants of above 2 pointers
using VType = std::variant<EmpPointer, BuisnessmanPtr>;

//I finally would want a container of above variants
using Container = std::vector<VType>;

void CreateObjects(Container& data);

// void StartApp(Container& data);

void DisplayData(const Container& data);

std::optional<Container> OnlyEmployeeContainer(const Container& data);


#endif // FUNCTIONALITIES_H
