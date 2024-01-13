#include "DataModeller.h"   


DataModeller::DataModeller(VariantType vtype,const std::vector<float>& prices)
:_goodsPrices(prices), _instances(std::move(vtype))
{

}

void DataModeller::operator()()
{

    if(_goodsPrices.empty()){
        throw std::runtime_error("Not Found");
    }
    float total=0;
    for (float price : _goodsPrices)
    {
        total+=price;
    }
    
    std::cout << "Average price is = " << total/_goodsPrices.size()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const DataModeller &rhs) {
    os << "_instances: ";
    
    std::visit([&](auto&& val){
        os<<*val;
    }, rhs._instances);

    os << " _goodsPrices: ";

    for(float val:rhs._goodsPrices){
        os<< val<< "\t";
    }
    
    return os;
}
