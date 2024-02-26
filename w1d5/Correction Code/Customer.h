#ifndef CUSTOMER_H
#define CUSTOMER_H

#include"_Customer_type.h"
#include"DebitCard.h"
#include<iostream>
#include<memory>

class Customer
{
private:
    int _id;
    std::string _customer_name;
    int _age;
    CustomerType _customer_type;
    std::shared_ptr <DebitCard> _card;
public:
    Customer()=delete;
    Customer(const Customer&)=delete;
    Customer(const Customer&&)=delete;
    Customer operator=(const Customer&)=delete;
    Customer operator=(const Customer&&)=delete;

    Customer(int id,std::string name,int age,CustomerType type,std::shared_ptr<DebitCard> card);
    
    ~Customer()=default;

    int id() const { return _id; }

    std::string customerName() const { return _customer_name; }

    int age() const { return _age; }

    CustomerType customerType() const { return _customer_type; }

    std::shared_ptr <DebitCard> card() const { return _card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

#endif // CUSTOMER_H
