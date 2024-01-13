#ifndef EVCAR_H
#define EVCAR_H

#include "Vehicle.h"
#include <ostream>

class EvCar : public Vehicle
{
private:
    int _charging{0};
    float horsePower{1400.0f};
    // int _fuel_tank_capacity;

public:
    EvCar() = default;
    
    EvCar(int id, std::string name, float price, VehicleType type, int capacity);

    EvCar(int id, std::string name, VehicleType type, int capacity);

    EvCar(const EvCar &) = delete;

    EvCar &operator=(const EvCar  &) = delete;

    EvCar(EvCar &&) = delete;

    EvCar &operator=(EvCar &&) = delete;

    ~EvCar() = default;

    int charging() const { return _charging; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

    void CalculateRegistrationCharge() override;
};

#endif // EVCAR_H
