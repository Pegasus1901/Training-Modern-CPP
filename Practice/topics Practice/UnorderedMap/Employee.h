#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;
public:
    Employee(int id, std::string name, float salary)
    : _id(id),_name(name),_salary(salary)
    {}

    Employee(Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(Employee&)=delete;
    Employee& operator=(Employee&&)=delete;

    ~Employee()=default;

    int id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

};

#endif // EMPLOYEE_H
