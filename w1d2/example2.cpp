#include<iostream>
#include<memory>
//focus what u want to do in rhs then go for lhs

int main(int argc, char const *argv[])
{
    int* p=(int*)malloc(16);

    std::shared_ptr<int[4]>ptr(new int[4]{10,20,30,40});

    
    
    return 0;
}
