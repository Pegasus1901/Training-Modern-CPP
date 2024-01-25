#include "BuisnessOwner.h"

BuisnessOwner::BuisnessOwner(float expense, float revenue, std::string buisnessName, BuisnessType buisnessType)
:_expense_amount(expense),_revenue(revenue),_registered_buisness_name(buisnessName),_buisness_type(buisnessType)
{}

std::ostream &operator<<(std::ostream &os, const BuisnessOwner &rhs) {
    os << "\n_expense_amount: " << rhs._expense_amount
       << " _revenue: " << rhs._revenue
       << " _registered_buisness_name: " << rhs._registered_buisness_name
       << " _buisness_type: " << static_cast<int> (rhs._buisness_type);
    return os;
}
