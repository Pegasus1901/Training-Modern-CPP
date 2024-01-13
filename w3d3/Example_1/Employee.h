#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee
{
private:
    
public:
    Employee() {}
    ~Employee() {}

    void PayTax(){
        std::cout<<"paytax Employee"<<std::endl;
    }
};

#endif // EMPLOYEE_H
