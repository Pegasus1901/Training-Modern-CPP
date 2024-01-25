#ifndef DATAMODELLER_H
#define DATAMODELLER_H

#include<variant>
#include<memory>
#include"BuisnessOwner.h"
#include"Employee.h"
#include<vector>
#include <ostream>

using BuisnessOwnerPointer = std::unique_ptr<BuisnessOwner>;
using EmployeePointer = std::unique_ptr<Employee>;

using VariantType = std::variant<BuisnessOwnerPointer,EmployeePointer>;

class DataModeller
{
private:
    VariantType _instances;
    std::vector<float> _goodsPrices;
public:
//passing vector by refrence or by move 
DataModeller(VariantType vtype,const std::vector <float>& prices);
~DataModeller()=default;
DataModeller()=default;
DataModeller(const DataModeller&)=delete;
DataModeller(DataModeller&&)=delete;
DataModeller operator=(const DataModeller&)=delete;
DataModeller operator=(DataModeller&&)=delete;
void operator()();  

// VariantType instances() const { return _instances; } .... gives error since we cannot copy but we can return it by refrence
//we are returning refrence which is modifiable so we use const in front to indicate no modifications will be performed
const VariantType& instances() const { return _instances; }

std::vector<float> goodsPrices() const { return _goodsPrices; }

friend std::ostream &operator<<(std::ostream &os, const DataModeller &rhs);
};

#endif // DATAMODELLER_H
