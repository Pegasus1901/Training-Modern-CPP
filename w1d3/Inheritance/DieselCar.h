#ifndef DIESELCAR_H
#define DIESELCAR_H


#include "Vehicle.h"
#include <ostream>

class DieselCar : public Vehicle
{
private:
    int _fuel{0};
    float horsePower{800.0f};
    // int _fuel_tank_capacity;

public:
    DieselCar() = default;
    
    DieselCar(int id, std::string name, float price, VehicleType type, int capacity);

    DieselCar(int id, std::string name, VehicleType type, int capacity);

    DieselCar(const DieselCar &) = delete;

    DieselCar &operator=(const DieselCar &) = delete;

    DieselCar(DieselCar &&) = delete;

    DieselCar &operator=(DieselCar &&) = delete;

    ~DieselCar() = default;

    int fuel() const { return _fuel; }

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs);

    void CalculateRegistrationCharge() override;
};

#endif // DIESELCAR_H
