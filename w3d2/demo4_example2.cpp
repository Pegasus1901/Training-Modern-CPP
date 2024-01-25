/*
    create an array of 5 threads thaat caalculate the square
    of ONE NUMBER FROM AN ARRAY OF 5 integers. store answers in a result container
*/

#include<iostream>
#include<thread>
#include<array>


int main(){
    std::array<int,5> result;
    std::array<int,5> data {10,20,30,40,50};

    int k=0;
    // auto f1=[&](int number){result[k++]=number*number;};
    auto f1=[&](int number,int idx){result[idx]=number*number;};

    std::array<std::thread,5> threadArr;
 
    auto itr =data.begin();

    // for (std::thread& t: threadArr)
    // {
    //     t=std::thread(f1,*itr++);
    // }

    for (int i = 0; i < 5; i++)
    {
        threadArr[i]=std::thread(f1,*itr++,i);
    }
    

    //join thread to block main
    for (std::thread& t: threadArr)
    {
        if(t.joinable()){
            t.join();
        }
    }

    //display
    itr = data.begin();
    for (int val : result)
    {
        if (itr!=data.end())
        {  
            std::cout<<"Result "<<*itr<<" is "<<val<<std::endl;
            itr++;
        }
    }

    
}


