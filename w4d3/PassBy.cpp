#include<iostream>

//pass by value: accepts both lvalue and rvalue. rvalue is assigned
//lvalue is copied. n1 is also modifiable in the scope of f1

void f1(int n1){

    std::cout<<"Address of n1 in f1 function: "<<&n1<< "\n";
    std::cout<<"Value of n1 in f1 function: "<<n1<< "\n";

}