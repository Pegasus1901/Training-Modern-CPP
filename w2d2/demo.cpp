#include<iostream>
#include<functional>
#include<array>

auto n1=10;
auto lfn1 = [](int number){return number*number; };

void operation(std::function<void()> fn){
    fn();
}

int main(int argc, char const *argv[])
{

    // std::array<std::function<int(int)>,1>arr{lfn1};

    // int n1=100;
    // std::cout<<lfn1(n1);

    int n1=10;

    // auto lf1 =[&n1](){std::cout<<n1;}; //basic pass by refrence
    // lf1();

    auto lf2 =[n1]{int data=10; std::cout<<n1*data;};
    operation(lf2);
    lf2();



    return 0;
}
