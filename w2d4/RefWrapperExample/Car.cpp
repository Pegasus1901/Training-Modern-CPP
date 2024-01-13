#include"Car.h"

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_id: " << rhs._id
       << " _model: " << rhs._model
       << " _price: " << rhs._price
       << " _engine: " << *(rhs._engine.get()); //use * to get the data at the location
    //    << " _engine: " << rhs._engine.get(); gives address of pointer
    //    << " _engine: " << rhs._engine; gives error since it is type of reftype
    return os;
}

Car::Car(int id, std::string model, float price, RefType engine)
    :_id(id),_model(model),_price(price),_engine(engine)
{}
