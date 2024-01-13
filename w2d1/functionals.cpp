#include<iostream>
#include<functional>

void operation(std::function<void(int)>logic,int data){
    logic(data);
}


int main(){

    operation([](int n){std::cout<<n*n*n<<"\n";},5); //Wrapper function

    return 0;
}