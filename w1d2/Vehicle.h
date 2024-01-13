#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

#include "VehicleType.h"

class Vehicle
{
private:
    int _id;
    std::string _model_name;
    float _price;
    vechicleType _type;

public:
    //default constructor
    Vehicle()= delete;

    Vehicle(int id, std::string model,float price,vechicleType type);

    //copy constructor 
    Vehicle( const Vehicle&)=delete;

    //copy assignment
    Vehicle& operator=(const Vehicle&)= delete;

    //move constructor
    Vehicle(Vehicle&&)=delete;

    //move assignment
    Vehicle operator=(Vehicle&&)= delete;

    //destructor
    ~Vehicle() = default;

    float price() const { return _price; }

    int id() const { return _id; }
};

#endif // VEHICLE_H
