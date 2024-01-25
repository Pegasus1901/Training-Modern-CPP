#ifndef CAR_H
#define CAR_H

#include<iostream>
#include"CarType.h"

class Car
{
private:
    std::string _id;
    float _price;
    CarType _type;

public:
    Car()=default;
    Car(Car&)=delete;
    Car(Car&&)=delete;
    Car& operator=(Car&)=delete;
    Car& operator=(Car&&)=delete;
    ~Car()=default;

    std::string id() const { return _id; }

    float price() const { return _price; }

    CarType type() const { return _type; }

    Car(std::string id,float price,CarType type);

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    // inline friend std::ostream operator<<(std::ostream& os, const Car& rhs){
    //     os<<"Id : \n" << rhs._id <<"Price: \n"<<rhs._price;
    // }
};

#endif // CAR_H
