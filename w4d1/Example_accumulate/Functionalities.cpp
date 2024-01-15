#include"Functionalities.h"

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

std::function<float(Container&)>AverageSalary=[](Container& data){
    if(data.empty()){
        throw std::runtime_error("hi");
    }

    float result= std::accumulate(
        data.begin(),
        data.end(),
        0.0f,
        [](float current_result, Pointer& instance_of_data){
            return current_result+instance_of_data->salary();
        }
    );
    
    return result/data.size();
};