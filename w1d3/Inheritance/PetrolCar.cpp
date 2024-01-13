#include"PetrolCar.h"

PetrolCar::PetrolCar(int id, std::string name, float price, VehicleType type, int capacity)
:Vehicle(id,name,price,type),fuelTankCapacity(capacity)
{
}

PetrolCar::PetrolCar(int id, std::string name, VehicleType type, int capacity)
:Vehicle(id,name,type),fuelTankCapacity(capacity)
{
}

void PetrolCar::CalculateRegistrationCharge()
{
    std::cout<<"Tax on petrol car is 13% = "<<0.13f*price()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " fuelTankCapacity: " << rhs.fuelTankCapacity;
    return os;
}

