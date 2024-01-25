#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Employee.h"
#include"Developer.h"
#include"Manager.h"
#include<vector>
#include<thread>
#include<variant>
#include<list>
#include<optional>
#include<mutex>
#include<future>



using ManagerPointer= std::shared_ptr<Manager>;
using DeveloperPointer =std::shared_ptr<Developer>;

using EmpVariant = std::variant<DeveloperPointer,ManagerPointer>;
using VariantContainer = std::list<EmpVariant>;


void CreateObjects(VariantContainer& Edata);

void DisplayContainerData(const VariantContainer& data);

void StartApp(VariantContainer& data);

std::optional<VariantContainer> MatchingMessages(const VariantContainer& data,std::string msg);

std::string ReturnMessageFromObj(const VariantContainer& data);

#endif // FUNCTIONALITIES_H
