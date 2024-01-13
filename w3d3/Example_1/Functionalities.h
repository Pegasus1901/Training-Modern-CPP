#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<memory>
#include<vector>
#include<variant>
#include"Employee.h"
#include"Buisnessman.h"

//I need alias for shared pointer to employee
using EmpPointer= std::shared_ptr<Employee>;

//I need alias for shared pointer to buisnessman
using BuisnessmanPtr = std::shared_ptr<Buisnessman>;

//I need alias for variants of above 2 pointers
using VType = std::variant<EmpPointer, BuisnessmanPtr>;

//I finally would want a container of above variants
using Container = std::vector<VType>;

void CreateObjects(Container& data){
    data.emplace_back(
        std::make_shared<Employee>()
    );

    data.emplace_back(
        std::make_shared<Buisnessman>()
    );
}

#endif // FUNCTIONALITIES_H
