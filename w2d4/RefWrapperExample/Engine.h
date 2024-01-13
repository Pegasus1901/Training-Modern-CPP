#ifndef ENGINE_H
#define ENGINE_H

#include"EngineType.h"
#include <ostream>

class Engine
{
private:
    int _horsepower;
    EngineType _type;

public:
    Engine(int horsepower,EngineType type);
    Engine() = default;
    Engine(Engine&)=delete;
    Engine(Engine&&)=delete;
    Engine& operator=(Engine&)=delete;
    Engine& operator=(Engine&&)=delete;
    ~Engine()=default;

    EngineType engineType() const { return _type; }

    int horsepower() const { return _horsepower; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif // ENGINE_H
