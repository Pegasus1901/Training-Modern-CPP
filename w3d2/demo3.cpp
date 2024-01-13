/*
    100 widraw transactins of 10 units each
    100 deposit transactins of 10 units each
*/
#include<thread>
#include<iostream>
#include<mutex>


int amount=1000;
std::mutex mt;

void widraw(){
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        mt.lock();
        amount-=10;
        mt.unlock();
    }
    
}

void deposit(){
   for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        mt.lock();
        amount+=10;
        mt.unlock();
    }
}

int main(){
    std::thread t1(&widraw);
    std::thread t2(&deposit);

    t1.join();
    t2.join();

    std::cout<<amount<<std::endl;
}