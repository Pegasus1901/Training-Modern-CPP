#include"Functionalities.h"
#include<iostream>
#include<vector>

int main(){
    CarContainer cVector;
    EngineContainer eVector;
    CreateObjects(cVector,eVector);
    PrintDetails(cVector,eVector);

    std::cout<<"Result: "<<TotalHorsePower(cVector);
    return 0;
}