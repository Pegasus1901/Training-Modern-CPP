#include"Engine.h"

Engine::Engine(int horsepower, EngineType type)
    :_horsepower(horsepower),_type(type)
{}

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_horsepower: " << rhs._horsepower
       << " _type: " << static_cast<int> (rhs._type);
    return os;
}
