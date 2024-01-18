#include "ClassC.h"

ClassC::ClassC(int number, float floatValues)
:_numbers(number),_floatValues(floatValues)
{
}

std::ostream &operator<<(std::ostream &os, const ClassC &rhs) {
    os << " _numbers: " << rhs._numbers
       << " _floatValues: " << rhs._floatValues;
    return os;
}

void ClassC::virTualFunction()
{
    std::cout<<"\tThis is Virtual Fn of C class"<<"\n";
}