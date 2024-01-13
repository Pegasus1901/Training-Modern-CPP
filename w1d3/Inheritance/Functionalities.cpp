#include "Functionalities.h"
#include "PetrolCar.h"
#include "DieselCar.h"
#include "EvCar.h"
#include "HybridCar.h"

void CreateObjects(Container &data)
{
    // // make a constructor call to petrol car
    // PetrolCar(101,"City",100f,VehicleType::PERSONAL,43);

    // // create a pointer
    // Vehicle* ptr= PetrolCar(101,"City",300f,VehicleType::PERSONAL,43);

    data.emplace_back(
        std::make_shared<PetrolCar>(101, "Petrol", 3000.0f, VehicleType::PERSONAL, 43));
    data.emplace_back(
        std::make_shared<DieselCar>(102, "Diesel", 3500.0f, VehicleType::PERSONAL, 100));
    data.emplace_back(
        std::make_shared<EvCar>(102, "EV", 1500.0f, VehicleType::PERSONAL, 100));
    data.emplace_back(
        std::make_shared<HybridCar>(102, "Hybrid", 4000.0f, VehicleType::PERSONAL, 50, 100));
}

float CalculateAverage(Container &data)
{
    float total = 0.0f;

    for (int i = 0; i < data.size(); i++)
    {
        total = total + data[i]->price();
    }
    float avg = total / data.size();

    return avg;
}

void ShowDetails(Container &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << *(data[i]);
    }
}

void AcceptData(Container &data)
{
    int choice = 0;
    int id;
    float price;
    std::string carname;
    VehicleType type;
    int typeSelect;
    int fuel;
    int battery;

    std::cout << "Enter type of Vehicle"<<std::endl;
    std::cout << "1. Petrol Car\n2.Diesel Car\n3.Hybrid Car\n4.EV Car" <<std::endl;
    std::cin >> choice;

    std::cout << "Enter Id Of Car = " << std::endl;
    std::cin >> id;

    std::cout << "Enter Name Of Car = " << std::endl;
    std::cin >> carname;

    std::cout << "Enter Price Of Car = " << std::endl;
    std::cin >> price;

    std::cout << "Enter Fuel Tank Capacity Of Car = " << std::endl;
    std::cin >> fuel;
    
    std::cout << "Enter Battery Capacity Of Car = " << std::endl;
    std::cin >> battery;


    std::cout<< "Enter Type Of Car = "<<std::endl;
    std::cout<<"1.Personal Vehicle\n2.Security Vehicle\n3.Transport Vehicle"<<std::endl;
    std::cin>>typeSelect;

    switch (typeSelect)
    {
    case 1:
        type = VehicleType::PERSONAL;
        break;
    case 2:
        type = VehicleType::SECURITY;
        break;
    case 3:
        type = VehicleType::TRANSPORT;
        break;
    
    default:
        break;
    }

    switch (choice)
    {
    case 1:
        data.emplace_back(
            std::make_shared<PetrolCar>(id, carname,price,type, fuel));
        break;
    case 2:
        data.emplace_back(
            std::make_shared<DieselCar>(id, carname,price,type, fuel));
        break;
    case 3:
        data.emplace_back(
            std::make_shared<HybridCar>(id, carname,price,type, fuel,battery));
        break;
    case 4:
        data.emplace_back(
            std::make_shared<EvCar>(id, carname,price,type, fuel));
        break;

    default:
        break;
    }
}

// void popFn(Container &data)
// {
//     for (int i = 0; i < data.size; i++)
//     {
//         data.erase(data);
//     }
//     iterat
    
// }
