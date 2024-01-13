#include <iostream>

void sqre(int n){
    std::cout<<n*n<<"\n";
}

void cube(int n){
    std::cout<<n*n*n<<"\n";
}

void times100(int n){
    std::cout<<n*100<<"\n";
}

void operation(void(*logic)(int),int data){
    logic(data);
}
void per_10(int n){ 
    std::cout<<n*0.1<<"\n";
}

int main(){
    
    // void *p;
    void (*p)(int)=&sqre;//........basic function pointer

    // void (*p)(int)=&cube; ...........works fine

    // void (*p)(int)=&fact;............signature mismatch

    // operation(cube,5);
    // operation(per_10,100);

    operation([](int n){std::cout<<n*n*n<<"\n";},5); //lambda function
    operation([](int n){std::cout<<n*n<<"\n";},7); //lambda function
    operation([](int n){std::cout<<n*100;},7);

    return 0;
}