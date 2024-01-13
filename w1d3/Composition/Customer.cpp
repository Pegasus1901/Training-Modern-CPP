#include "Customer.h"

std::ostream &operator<<(std::ostream &os, const Customer &rhs)
{
    os << "_id: " << rhs._id
       << " _customer_name: " << rhs._customer_name
       << " _age: " << rhs._age
       << " _customer_type: " << static_cast<int>(rhs._customer_type)
       << "_card: " << *rhs._card;
    return os;
}

Customer::Customer(int id, std::string name, int age, CustomerType type, std::shared_ptr<DebitCard> card)
    : _id(id),
      _customer_name(name),
      _age(age),
      _customer_type(type),
      _card(card)
{}
