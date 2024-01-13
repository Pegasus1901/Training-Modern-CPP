#include <iostream>
#include<thread>
#include<array>

int result[5];

void square(std::array<int,5>& data){
    int k=0;
    for (int val : data)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++]= val*val;
    }
    
}

void cube(std::array<int,5>& data){
    int k=0;
    for (int val : data)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++]= val*val*val;
    }
}

int main(){
    std::array<int,5>data{1,2,3,4,5};
    square(data);
    cube(data);

    for (auto val : result)
    {
        std::cout<<val<<std::endl;
    }
    

}