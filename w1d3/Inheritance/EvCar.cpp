#include"EvCar.h"

EvCar::EvCar(int id, std::string name, float price, VehicleType type, int fuel)
:Vehicle(id,name,price,type),_charging(fuel)
{
}


EvCar::EvCar(int id, std::string name, VehicleType type, int fuel)
:Vehicle(id,name,type),_charging(fuel)
{
}

void EvCar::CalculateRegistrationCharge()
{
    std::cout<<"Registration charges for EV is 1% "<<0.01*price()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel: " << rhs._charging;
    return os;
}
