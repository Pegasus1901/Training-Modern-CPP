#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<memory>
#include<iostream>
#include"IdCard.h"

using IdPointer = std::shared_ptr<IdCard>;
using RefType=std::reference_wrapper<IdPointer> ;

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;
    RefType _idCard;

    
public:
    Employee()=delete;
    Employee(int id, std::string name, float salary, RefType idCard);
    ~Employee()=default;

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
