#include"HybridCar.h"

HybridCar::HybridCar(int id, std::string name, float price, VehicleType type, int fuel, int charging)
:Vehicle(id,name,price,type),_fuel(fuel),_battery(charging)
{
}

HybridCar::HybridCar(int id, std::string name, VehicleType type, int fuel, int charging)
:Vehicle(id,name,type),_fuel(fuel),_battery(charging)
{
}

void HybridCar::CalculateRegistrationCharge()
{
    std::cout<<"Registration for Hybrid is 25% "<<0.25f*price()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const HybridCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel: " << rhs._fuel
       << " _battery: " << rhs._battery;
    return os;
}
