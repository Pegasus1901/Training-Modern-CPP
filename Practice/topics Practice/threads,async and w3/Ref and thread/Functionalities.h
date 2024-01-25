#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Employee.h"
#include<vector>
#include<thread>

using EmpPointer= std::shared_ptr<Employee>;
using EmpContainer = std::vector<EmpPointer>;

using PointerId=std::shared_ptr<IdCard>;
using IdContainer = std::vector<PointerId>;


void CreateObjects(EmpContainer& Edata, IdContainer& idData);

void DisplayContainerData(const EmpContainer& data);

void StartApp(EmpContainer& data, IdContainer& idData);

#endif // FUNCTIONALITIES_H
