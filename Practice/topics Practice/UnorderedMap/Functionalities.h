#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<memory>
#include<unordered_map>
#include"Employee.h"

using Pointer=std::unique_ptr<Employee>;
using Container=std::unordered_map<int,Pointer>;

void CreateObjectS(Container& data);

#endif // FUNCTIONALITIES_H
