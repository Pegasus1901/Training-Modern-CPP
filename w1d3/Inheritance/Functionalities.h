// void CreateObjects(std::vector<std::shared_ptr<Vehicle>>);

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Vehicle.h"
#include<vector>
#include<memory>

//create alias pionter which is an alternate name for std::shared_ptr<Vehicle>
using Pointer= std::shared_ptr<Vehicle>;

//now specify altername Container which indicates a standard vector of"Pointer" where pointer is explained above
using Container= std::vector<Pointer>;


void CreateObjects(Container &data);

float CalculateAverage(Container &data);

void ShowDetails(Container &data);

void AcceptData(Container &data);

// Pointer HighestHorsepower(Container& data);

// void popFn(Container&data);

#endif // FUNCTIONALITIES_H
