/*
    create an array of 5 threads thaat caalculate the square
    of ONE NUMBER FROM AN ARRAY OF 5 integers. store answers in a result container
*/

#include<iostream>
#include<thread>
#include<array>
#include<functional>

void InstantiateThread(
    std::array<std::thread,5>&threadArr,
    std::function<void(int,int)>f1,
    std::array<int,5>& data
){
    auto itr =data.begin();

    for (int i = 0; i < 5; i++)
    {
        threadArr[i]=std::thread(f1,*itr++,i);
    }
}

void joinThreads(std::array<std::thread,5>&threadArr){
    for (std::thread& t: threadArr)
    {
        if(t.joinable()){
            t.join();
        }
    }
}

void displayResult(
    std::array<int,5>& data,
    std::array<int,5>&result
    ){
    //display
    auto itr = data.begin();
    for (int val : result)
    {
        if (itr!=data.end())
        {  
            std::cout<<"Result "<<*itr<<" is "<<val<<std::endl;
            itr++;
        }
    }
}
void startApp(){
    std::array<int,5> result;
    std::array<int,5> data {10,20,30,40,50};

    auto f1=[&](int number,int idx){result[idx]=number*number;};

    std::array<std::thread,5> threadArr;

    InstantiateThread(threadArr,f1,data);
    joinThreads(threadArr);
    displayResult(data,result);

}

int main(){
    startApp();
}


