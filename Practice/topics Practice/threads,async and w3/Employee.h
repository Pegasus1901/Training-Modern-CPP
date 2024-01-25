#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<memory>
#include<iostream>

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;

public:
    Employee()=delete;
    Employee(int id, std::string name, float salary);
    ~Employee()=default;

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

};

#endif // EMPLOYEE_H
