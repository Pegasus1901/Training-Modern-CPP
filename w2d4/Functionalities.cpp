#include"Functionalities.h"

std::function<float(Container&)>AverageSalary=[](Container& data){
    float total=0.0f;
    for (auto &ptr : data)
    {
        total+=ptr->salary();
    }
    return total;
};
std::function<float(Container&,int)> SalaryOfGivenId=[](Container& data,int id){

    float salary=0.0f;
    for (auto &ptr : data)
    {
        if(ptr->id()==id){
            salary= ptr->salary();
        }
    }
    return salary;
};

