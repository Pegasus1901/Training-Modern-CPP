#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "Vehicle.h"
#include <ostream>

class HybridCar : public Vehicle
{
private:
    int _fuel{0};
    int _battery{0};
    float horsePower{2500.0f};
    // int _fuel_tank_capacity;

public:
    HybridCar() = default;

    HybridCar(int id, std::string name, float price, VehicleType type, int capacity, int charging);

    HybridCar(int id, std::string name, VehicleType type, int fuel, int charging);

    HybridCar(const HybridCar &) = delete;

    HybridCar &operator=(const HybridCar  &) = delete;

    HybridCar(HybridCar &&) = delete;

    HybridCar &operator=(HybridCar &&) = delete;

    ~HybridCar() = default;

    int fuel() const { return _fuel; }

    int battery() const { return _battery; }

    friend std::ostream &operator<<(std::ostream &os, const HybridCar &rhs);

    void CalculateRegistrationCharge() override;
};

#endif // HYBRIDCAR_H
