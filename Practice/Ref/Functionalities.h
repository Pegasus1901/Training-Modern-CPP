#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include"Car.h"
#include<functional>

using CarPointer= std::shared_ptr<Car>;
using EnginePointer= std::shared_ptr<Engine>;


using CarContainer= std::vector<CarPointer>;
using EngineContainer= std::vector<EnginePointer>;


void CreateObjects(CarContainer& carData, EngineContainer& engineData);

void PD(CarContainer& carData, EngineContainer& engineData);

extern std::function<void(CarContainer& carData)> Speed;

#endif // FUNCTIONALITIES_H
