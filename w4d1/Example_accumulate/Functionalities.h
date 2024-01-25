#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<vector>
#include<memory>
#include"Employee.h"
#include<functional>


#include<algorithm>
#include<numeric>

// using namespace std::placeholders;

using Pointer= std::shared_ptr<Employee>;
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

extern std::function<float(Container& data)> AverageSalary;

extern std::function<float(Container&,int)> SalaryOfGivenId;

extern std::function<float(Container&,std::string)> SalaryOfGivenName;

#endif // FUNCTIONALITIES_H
