#include "Employee.h"

Employee::Employee(idVariant id, std::string name, float salary)
    : _id(id), _name(name), _salary(salary)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    os << "_id: " ; 
    std::visit([&](auto &&val)
                                { os<<val; },
                                rhs._id);
       os<< " _name: " << rhs._name
       << " _salary: " << rhs._salary<<std::endl;
    return os;
}
