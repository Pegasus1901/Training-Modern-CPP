#include"Functionalities.h"
#include <thread>

#include<array>

int main(){
    Container data;
    std::array<std::thread, 3> arr;

    std::thread t1(CreateObjects, std::ref(data));
    // arr[0] =std:: thread(CreateObjects, std::ref(data));

    // arr[0].join();
    t1.join();

    arr[0]=std::thread(CalculateTaxPayable, std::ref(data));

    arr[1]=std::thread(CallParenOperator, std::ref(data));

    for (std::thread& th : arr)
    {
        if(th.joinable()){
            th.join();
        }
    }
    

}