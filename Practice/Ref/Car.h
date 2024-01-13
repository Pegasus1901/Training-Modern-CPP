#ifndef CAR_H
#define CAR_H
#include<iostream>
#include"Engine.h"
#include<memory>

using Pointer= std::shared_ptr<Engine>;
using RefWrap= std::reference_wrapper<Pointer>;

class Car
{
private:
    int _id;
    std::string _model;
    float _price;
    int _weight;
    
    RefWrap _engine;
public:
    Car()=delete;
    Car(int id, std::string model,float price,int weight,RefWrap engine):_id(id),_model(model),_price(price),_weight(weight),_engine(engine){}
    ~Car()=default;

    int id() const { return _id; }

    std::string model() const { return _model; }

    float price() const { return _price; }

    int weight() const { return _weight; }

    RefWrap engine() const { return _engine; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
};

#endif // CAR_H
