#include"stateA.h"
#include"stateB.h"
#include<iostream>

int main(){
    std::cout<<"This is A"<<"\n";
    StateA a_State;
    a_State();

    std::cout<<"This is B"<<"\n";
    StateB b_State;
    b_State();
}