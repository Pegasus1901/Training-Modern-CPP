#include "Functionalities.h"
#include "Employee.h"
#include "DataModeller.h"

void CreateObjects(Container& data)
{
    data.emplace_back(std::make_unique<DataModeller>(
        std::make_unique<Employee>(
            "Harshit",
            EmployeeType::REGULAR,
            78.0f),
        // vector of floats
        std::vector<float>{19.21f, 145.31f, 204.5f})
    );

    data.emplace_back(std::make_unique<DataModeller>(
        std::make_unique<Employee>(
            "Harshit",
            EmployeeType::REGULAR,
            78.0f),
        // vector of floats
        std::vector<float>{19.21f, 145.31f, 204.5f})
    );
}

/*
    This function will accept a container of dataModeller poiner
        FOR EACH POINTER,   perform the following

        1. capture the instance refrence
        2. use holds_alternative to verify which type of pointer is present in the _instances
        3. if pointer is of type buisnessowner
            i) use std::get to fetch buisnessowner (this will be safe because if has been )
            ii) use the fetched pointer in buisnessowner to calculate tax for buisness

            else when pointer is of type Employee

            i) use std::get to fetch EmployeePointer
            ii)use the fetched pointer to fetch type of employee
            iii) if type is regular tax is 10% else it should  20% of salary
*/

void CalculateTaxPayable(const Container &data)
{
    for (const dataPointer& ptr : data)
    {
        const VariantType& val =ptr->instances();
        if( std::holds_alternative<BuisnessOwner>(val)){
            const BuisnessOwnerPointer& p = std::get<BuisnessOwnerPointer>(val);

            // std::cout << 0.1f*( std::get<BuisnessOwner>(val) );
            mt.lock();
            std::cout << 0.1f*(p->revenue() - p->expenseAmount() );
            mt.unlock();
        }
        else{

            //declare it in if block to limit the scope of the variable
            // const EmployeePointer& p = std::get<EmployeePointer>(val);
            // this statement will let p have scope till else block end so we need to erase after use use this syntax
            
            if( const EmployeePointer& p = std::get<EmployeePointer>(val); p->type() == EmployeeType::REGULAR){

                //std::lock_guard<std::mutex>lk(mt);

                mt.lock();
                std::cout<<"Tax is 10%"<<0.1*p->salary();
                mt.unlock();
            }else{
                //to automatic lock unlock use below line
                
                //in below case use lock unlock
                //sometimes exception comes lock-unlock does not work properly
                std::lock_guard<std::mutex>lk(mt);
                std::cout<<"Tax is 10%"<<0.2*p->salary();
            }
        }
    }
}

void CallParenOperator(const Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }else{
        for(const dataPointer& ptr: data){
            ptr->operator()();
        }
    }
}
