#include<array>
#include<iostream>
int main(){
    //normal array
    //int arr1[3];


    std::array<int,3>arr1;
    arr1[0]=1;
    arr1[1]=2;
    arr1[2]=3;

    for (int i = 0; i < 3; i++)
    {
        std::cout<<arr1[i];
    }

    std::cout<<arr1.front();
    std::cout<<arr1.size();
    std::cout<<arr1.back();
    
    //normal 2d array
    int arr2[3][2]{
        {10,20},
        {30,40},
        {50,60}
    };

    //modern array of std
    std::array<std::array<int,2>,3> arr3{
        std::array<int,2>{10,20},
        std::array<int,2>{40,50},
        std::array<int,2>{70,90},
    };

    //printing 2d array
    for (auto &row : arr3)
    {
        //columns
        for (auto element : row)
        {
            std::cout<<element<<std::endl;
        }
        
    }
    
    
    return 0;
}