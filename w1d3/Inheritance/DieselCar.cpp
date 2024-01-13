#include"DieselCar.h"

DieselCar::DieselCar(int id, std::string name, float price, VehicleType type, int charging)
:Vehicle(id,name,price,type),_fuel(charging)
{
}

DieselCar::DieselCar(int id, std::string name, VehicleType type, int charging)
:Vehicle(id,name,VehicleType::PERSONAL),_fuel(charging)
{
}

void DieselCar::CalculateRegistrationCharge()
{
    std::cout<<"Registration charges for Diesel are 12%"<<0.12f*price()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const DieselCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel: " << rhs._fuel;
    return os;
}
