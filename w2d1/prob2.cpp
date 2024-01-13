/*
    d1  d2  d3
    |   |   |
    f0  f1  f2
    |   |   |
    00  01  02

*/


#include <iostream>
#include <functional>
#include <vector>

using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;
using DataContainer = std::vector<int>;


void MakeLmbdaFunctions(FnContainer &functions)
{
    
    functions.emplace_back(
        [](int number)
        { std::cout << number * number * number << "\n"; });

    functions.emplace_back(
        [](int number)
        { std::cout << number * number << "\n"; });
    
    functions.emplace_back(
        [](int number)
        { std::cout << number * 100 << "\n"; });
}

void ApplyLogicOnData(const FnContainer &functions, const DataContainer data)
{
    // // each data to seperate functions
    // auto itr=data.begin();
    // for(const FnType& fn:functions){
    //     int value= *itr++;
    //     fn(value);
    // }

    //all data to every function
    for(const FnType& fn:functions){
        for(const int x:data){
            fn(x);
        }
    }
}

int main(){
    FnContainer fnCont;
    MakeLmbdaFunctions(fnCont);
    DataContainer data{10,20,30};
    ApplyLogicOnData(fnCont,data);
}