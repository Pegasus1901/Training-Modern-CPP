#include<array>
#include<iostream>
#include<thread>

int main(){
    std::array<int,5> result;
    std::array<int,5> data {10,20,30,40,50};

    /*
        create and instance
    */
   std::thread t1(
    [&result](std::array<int,5> &data){
        int k=0;
        for (int val : data)
        {
            result[k++]=val*val;
        }
        
    },
    std::ref(data)
   );

   //wait for t1
   t1.join();

   //display output
    // for (int val : result)
    // {
    //     std::cout<<val<<std::endl;
    // }
    //using iterator
    auto itr=data.begin();
    for (int val : result)
    {
        if (itr!=data.end())
        {  
            std::cout<<"Result "<<*itr<<" is "<<val<<std::endl;
            itr++;
        }
        
    }
    
}