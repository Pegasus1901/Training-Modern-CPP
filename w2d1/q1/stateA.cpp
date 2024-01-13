#include "stateA.h"
#include <iostream>

StateA::StateA()
{
    functions.emplace_back(
        [](int number)
        { std::cout << number * number * number << "\n"; });

    functions.emplace_back(
        [](int number)
        { std::cout << number * number << "\n"; });

    functions.emplace_back(
        [](int number)
        { std::cout << number * 10 << "\n"; });
}

void StateA::operator()()
{
    for (auto fn : functions)
    {
        for (auto data : values)
        {
            fn(data);
        }
        
    }
    
}
