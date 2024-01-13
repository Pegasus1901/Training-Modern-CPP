#include"Engine.h"

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_horsepower: " << rhs._horsepower
       << " _engineType: " << static_cast<int>(rhs._type);
    return os;
}

Engine::Engine(int horsepower, EngineType type)
    :_horsepower(horsepower),_type(type)
{}
