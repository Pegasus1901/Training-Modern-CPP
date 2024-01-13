
#include <iostream>
#include"Functionalities.h"
#include<functional>
using namespace std::placeholders;


int main(){
    Container data;

    auto fun1 = std::bind(SalaryOfGivenId, _1,101);
    fun1(data);
}