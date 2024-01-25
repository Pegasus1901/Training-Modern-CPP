#include "Employee.h"

Employee::Employee(int id, std::string name, float salary, RefType idCard)
:_id(id),_name(name),_salary(salary),_idCard(idCard){
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _idCard: " << *rhs._idCard.get();
    return os;
}
