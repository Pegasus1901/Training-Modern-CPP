#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<memory>
#include<array>
#include<iostream>
#include "Car.h"

using CarPointer =std::shared_ptr<Car>;
using EnginePointer =std::shared_ptr<Engine>;

using CarContainer =std::array<CarPointer, 3>;
using EngineContainer =std::array<EnginePointer, 3>;


void CreateObjects(CarContainer& data, EngineContainer& engineData);
void PrintDetails(CarContainer& data,EngineContainer& enginedata);

int TotalHorsePower(CarContainer& data);

#endif // FUNCTIONALITIES_H
