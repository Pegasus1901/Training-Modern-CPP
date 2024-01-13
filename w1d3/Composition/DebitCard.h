#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "DebitCardType.h"
#include <iostream>

class DebitCard
{
private:
    std::string _debt_name;
    int _cvv;
    std::string _expiry;
    DebitCardType _debt_type;
public:
    DebitCard() = delete;
    DebitCard(const DebitCard&)=delete;
    DebitCard(const DebitCard&&)=delete;
    DebitCard operator=(const DebitCard&)=delete;
    DebitCard operator=(const DebitCard&&)=delete;
    ~DebitCard() = default;

    DebitCard(int cvv, std::string name, std::string expiry, DebitCardType type);

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
};

#endif // DEBITCARD_H
