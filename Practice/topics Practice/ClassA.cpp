#include "ClassA.h"

ClassA::ClassA(int id, int age, std::string name,float salary)
:_id(id),_age(age),_name(name), _salary(salary)
{
    
}
std::ostream &operator<<(std::ostream &os, const ClassA &rhs) {
    os << "_id: " << rhs._id 
       << " _age: " << rhs._age
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << std::endl;
    return os;
}
