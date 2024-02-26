#include"DebitCard.h"
std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << "_debt_name: " << rhs._debt_name
       << " _cvv: " << rhs._cvv
       << " _expiry: " << rhs._expiry
       << " _debt_type: " << static_cast<int>(rhs._debt_type)
       <<'\n';
    return os;
}

DebitCard::DebitCard(int cvv, std::string name, std::string expiry, DebitCardType type)
:_cvv(cvv),
_debt_name(name),
_expiry(expiry),
_debt_type(type)
{
}
