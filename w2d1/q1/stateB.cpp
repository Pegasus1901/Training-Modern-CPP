#include "stateB.h"
#include <iostream>

StateB::StateB()
{
    functionCont.emplace_back(
        [](int number)
        { std::cout << number * number * number << "\n"; });

    functionCont.emplace_back(
        [](int number)
        { std::cout << number * number << "\n"; });

    functionCont.emplace_back(
        [](int number)
        { std::cout << number * 10 << "\n"; });
}

void StateB::operator()()
{
    for (auto fn : functionCont)
    {
        for (auto data : valuesCont)
        {
            fn(data);
        }
        
    }
    
}
