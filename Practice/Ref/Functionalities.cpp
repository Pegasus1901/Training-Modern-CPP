#include "Functionalities.h"

void CreateObjects(CarContainer &carData, EngineContainer &engineData)
{
    engineData.emplace_back(
        std::make_shared<Engine>(
            201,
            EngineType::DIESEL));
    carData.emplace_back(
        std::make_shared<Car>(
            101,
            "Nexon",
            300.0f,
            100,
            engineData[0]));
}

void PD(CarContainer &carData, EngineContainer &engineData)
{
    for (auto &ptr : carData)
    {
        std::cout << *ptr;
    }
}

std::function<void(CarContainer &carData)> Speed = [](CarContainer &carData)
{
    for (auto p : carData)
    {
        int ans = p->weight() * p->engine().get()->horsepower();
        std::cout <<"Speed = "<< ans << "\n";
    }
};

