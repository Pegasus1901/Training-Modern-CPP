#include<iostream>
#include<functional>
#include<vector>

// void Magic(int& n1){
void Magic(std::reference_wrapper<int> n1){

    // std::cout<<"\nAddress of Magic Variable = "<<&n1<<"\n";
    std::cout<<"\nAddress of Magic Variable = "<<&(n1.get())<<"\n";

    std::vector<std::reference_wrapper<int>> v1{n1};

    for (auto &ptr : v1)
    {
      std::cout<<"\nValue of Variable in vector = "<<ptr<<"\n";
    }

    auto ptr1= v1[0];
    std::cout<<"\nAddress of Variable ptr1 = "<<ptr1<<"\n";

    
}

int main(int argc, char const *argv[])
{
    int n1=10;
    std::cout<<"\nAddress of Variable = "<<&n1<<"\n";

    Magic(n1);
    std::cout<<"\nvalue of Variable = "<<n1<<"\n";

    return 0;
}
