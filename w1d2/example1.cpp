#include <iostream>
#include "Vehicle.h"
#include "VehicleType.h"
#include <memory>
int main(int argc, char const *argv[])
{
    std::shared_ptr<Vehicle> ptr = std::make_shared<Vehicle>(
        101,
        "LAmborghini",
        3500000.0f,
        vechicleType::PERSONAL);
    // if destructor is called does it garuntee my object is deleted??
    // destructor runs before memory release



    return 0;
}
