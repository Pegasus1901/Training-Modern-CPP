#ifndef PETROLCAR_H
#define PETROLCAR_H

#include "Vehicle.h"
#include <ostream>

class PetrolCar : public Vehicle
{
private:
    int fuelTankCapacity;
    float horsePower{1000.0f};
    // int _fuel_tank_capacity;

public:
    PetrolCar() = default;
    
    PetrolCar(int id, std::string name, float price, VehicleType type, int capacity);

    PetrolCar(int id, std::string name, VehicleType type, int capacity);

    PetrolCar(const PetrolCar &) = delete;

    PetrolCar &operator=(const PetrolCar &) = delete;

    PetrolCar(PetrolCar &&) = delete;

    PetrolCar &operator=(PetrolCar &&) = delete;

    ~PetrolCar() = default;

    int getFuelTankCapacity() const { return fuelTankCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs);

    void CalculateRegistrationCharge() override;
    
};

#endif // PETROLCAR_H
