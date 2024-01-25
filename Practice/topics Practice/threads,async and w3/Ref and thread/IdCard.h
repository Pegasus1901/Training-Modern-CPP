#ifndef IDCARD_H
#define IDCARD_H
#include <iostream>

class IdCard
{
private:
    int _empId;
    std::string _department;
public:
    IdCard()=delete;
    IdCard(int empId, std::string department);
    ~IdCard()=default;

    friend std::ostream &operator<<(std::ostream &os, const IdCard &rhs);
};

#endif // IDCARD_H
