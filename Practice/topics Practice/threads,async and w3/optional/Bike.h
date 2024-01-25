#ifndef BIKE_H
#define BIKE_H

#include<iostream>
#include"BikeType.h"

class Bike
{
private:
    std::string _id;
    float _price;
    BikeType _type;

public:
    Bike()=default;
    Bike(Bike&)=delete;
    Bike(Bike&&)=delete;
    Bike& operator=(Bike&)=delete;
    Bike& operator=(Bike&&)=delete;
    ~Bike()=default;

    std::string id() const { return _id; }

    float price() const { return _price; }

    BikeType type() const { return _type; }

    Bike(std::string id,float price,BikeType type);

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);

    // inline friend std::ostream operator<<(std::ostream& os, const Bike& rhs){
    //     os<<"Id : \n" << rhs._id <<"Price: \n"<<rhs._price;
    // }
};

#endif // BIKE_H
