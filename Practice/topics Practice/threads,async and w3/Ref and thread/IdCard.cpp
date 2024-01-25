#include "IdCard.h"

IdCard::IdCard(int empId, std::string department)
:_empId(empId),_department(department)
{
}
std::ostream &operator<<(std::ostream &os, const IdCard &rhs) {
    os << "_empId: " << rhs._empId
       << " _department: " << rhs._department;
    return os;
}
