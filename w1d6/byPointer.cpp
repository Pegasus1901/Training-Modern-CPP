#include<iostream>

#include"Employee.h"
#include<memory>

using pointer=std::shared_ptr<Employee>;

void Magic(pointer& emp){
    emp->setId(10);
}


int main(){
    pointer e1 = std::make_shared<Employee>(101);
    Magic(e1);
}