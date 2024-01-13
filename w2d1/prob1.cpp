/*
    a container of 3 fns
    The  run a loop over the container to execute the functions

        DATA
    |   |   |
    f1  f2  f3
    |   |   |
    o1  o2  o3
*/

#include <iostream>
#include <functional>
#include <vector>

using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;

/*
    accept a blank container
    It will add 3 lambdas into the container
*/
void MakeLmbdaFunctions(FnContainer &functions)
{
    // auto f1 = [](int number){ std::cout << number * number << "\n"; };
    // auto f1 = [](int number){ std::cout << number * number * number << "\n"; };

    functions.emplace_back(
        [](int number)
        { std::cout << number * number * number << "\n"; });

    functions.emplace_back(
        [](int number)
        { std::cout << number * number << "\n"; });
}

/*
    run a for each loop on the function contaianer
    execute each function with given data
*/

void ApplyLogicOnData(FnContainer &functions, int data)
{
    //for every fn inside functions container run fn(data)

    for (FnType &fn : functions)
    {
        fn(data);
    }
}

int main(){
    FnContainer fns;
    MakeLmbdaFunctions(fns);
    ApplyLogicOnData(fns,5);
}