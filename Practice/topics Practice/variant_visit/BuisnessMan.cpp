#include "BuisnessMan.h"

BuisnessMan::BuisnessMan(idVariant idB, std::string nameB, float salaryB)
    : _idB(idB), _nameB(nameB), _salaryB(salaryB)
{
}
std::ostream &operator<<(std::ostream &os, const BuisnessMan &rhs)
{
    os << "_idB: ";
    std::visit(
        [&](auto &&val)
        {
            os << val;
        },
        rhs._idB);
    os << " _nameB: " << rhs._nameB
       << " _salaryB: " << rhs._salaryB<<std::endl;
    return os;
}
