#ifndef CLASSC_H
#define CLASSC_H

#include"ClassB.h"
#include <iostream>

class ClassC : public ClassB
{
private:
    int _numbers;
    float _floatValues;

public:
    ClassC() = delete;
    ClassC(int number, float floatValues);
    void virTualFunction() override;
    ~ClassC()= default;
    void PrintValue(){
        std::cout<<"\tDynamic Cast Call\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const ClassC &rhs);
};

#endif // CLASSC_H
