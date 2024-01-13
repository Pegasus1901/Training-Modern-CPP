#include"Functionalities.h"

int main(int argc, char const *argv[])
{
    CarContainer carData;
    EngineContainer engineData;
    CreateObjects(carData,engineData);
    PD(carData,engineData);
    Speed(carData);
   // int abs = Speed(carData);
   // std::cout<<abs;
    return 0;
}
