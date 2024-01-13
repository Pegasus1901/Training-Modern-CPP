#ifndef BUISNESSOWNER_H
#define BUISNESSOWNER_H

#include<iostream>
#include"BuisnessType.h"

class BuisnessOwner
{
private:
    float _expense_amount;
    float _revenue;
    std::string _registered_buisness_name;
    BuisnessType _buisness_type;
public:
BuisnessOwner(float expense, float revenue, std::string buisnessName,BuisnessType buisnessType);//PC
~BuisnessOwner()=default;
BuisnessOwner()=default;
BuisnessOwner(const BuisnessOwner&)=delete;
BuisnessOwner(BuisnessOwner&&)=delete;
BuisnessOwner operator=(const BuisnessOwner&)=delete;
BuisnessOwner operator=(BuisnessOwner&&)=delete;

float expenseAmount() const { return _expense_amount; }

float revenue() const { return _revenue; }

std::string registeredBuisnessName() const { return _registered_buisness_name; }

BuisnessType buisnessType() const { return _buisness_type; }
};

#endif // BUISNESSOWNER_H
