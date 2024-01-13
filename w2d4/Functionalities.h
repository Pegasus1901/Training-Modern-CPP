#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<vector>
#include<memory>
#include"Employee.h"
#include<functional>

// using namespace std::placeholders;

using Pointer= std::shared_ptr<Employee>;
using Container = std::vector<Pointer>;

extern std::function<float(Container&)> AverageSalary;
extern std::function<float(Container&,int)> SalaryOfGivenId;

#endif // FUNCTIONALITIES_H
