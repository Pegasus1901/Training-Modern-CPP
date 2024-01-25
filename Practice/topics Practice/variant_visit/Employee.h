#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<variant>
#include<iostream>

using idVariant= std::variant<std::string,int>;

class Employee
{
private:
    idVariant _id;
    std::string _name;
    float _salary;
public:
    Employee(idVariant id, std::string name, float salary);//PC
    Employee()=delete;
    ~Employee()=default;
    Employee(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee operator=(const Employee&)=delete;
    Employee operator=(Employee&&)=delete;

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
