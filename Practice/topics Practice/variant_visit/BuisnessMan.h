#ifndef BUISNESSMAN_H
#define BUISNESSMAN_H

#include<variant>
#include<iostream>
using idVariant = std::variant<std::string, int>;

class BuisnessMan{
private:
    idVariant _idB;
    std::string _nameB;
    float _salaryB;

public:
   BuisnessMan(idVariant idB, std::string nameB,float salaryB);
   BuisnessMan()=delete;
   ~BuisnessMan()=default;
   BuisnessMan(const BuisnessMan&)=delete;
   BuisnessMan(BuisnessMan&&)=delete;
   BuisnessMan operator=(const BuisnessMan&)=delete;
   BuisnessMan operator=(BuisnessMan&&)=delete;

   friend std::ostream &operator<<(std::ostream &os, const BuisnessMan &rhs);
};

#endif // BUISNESSMAN_H
