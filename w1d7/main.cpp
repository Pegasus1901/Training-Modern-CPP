#include<vector>
#include<iostream>
#include<list>
#include<memory>
#include"Employee.h"

using EmpPointer = std::shared_ptr<Employee>;
using ListContainer= std::list<EmpPointer>;
using VectorContainer= std::vector<EmpPointer>;


void CreateObject(ListContainer &l1,VectorContainer &v1){
    l1.emplace_back(
        std::make_shared<Employee>(100)
    );
    l1.emplace_back(
        std::make_shared<Employee>(102)
    );
    l1.emplace_back(
        std::make_shared<Employee>(103)
    );
    l1.emplace_back(
        std::make_shared<Employee>(104)
    );
    l1.emplace_back(
        std::make_shared<Employee>(105)
    );
    l1.emplace_back(
        std::make_shared<Employee>(106)
    );
    l1.emplace_back(
        std::make_shared<Employee>(100)
    );
}
