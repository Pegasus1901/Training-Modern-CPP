#include"Vehicle.h"


std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _price: " << rhs._price
    //    << " _type: " << rhs._type;  cannot work for enum class
       << " _type: " <<static_cast<int>(rhs._type);
    return os;
}

Vehicle::Vehicle(int id, std::string name, float price, VehicleType type)
// :Vehicle(id,name,type),_price(price).....both cannot be used on same line
:Vehicle(id,name,type) 
{
    _price=price;
}

Vehicle::Vehicle(int id, std::string name, VehicleType type)
:_id(id),_name(name),_type(type)
{
}
