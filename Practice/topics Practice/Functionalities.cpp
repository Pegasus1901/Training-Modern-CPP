#include "Functionalities.h"

void CreateArray(ArrayType &arrData)
{
    arrData[0] = std::make_shared<ClassA>(
        101,
        25,
        "Honda",
        80000.0f
    );

    arrData[1] = std::make_shared<ClassA>(
        102,
        25,
        "Tata",
        50000.0f
    );

    arrData[2] = std::make_shared<ClassA>(
        103,
        25,
        "Toyata",
        900.0f
    );

    arrData[3] = std::make_shared<ClassA>(
        104,
        25,
        "Maserati",
        25000.0f
    );

    arrData[4] = std::make_shared<ClassA>(
        105,
        25,
        "Lamborghini",
        11000.0f
    );
}

void DataDisplayInArray(ArrayType &arrData)
{
    for (std::shared_ptr<ClassA> ptr : arrData)
    {
        std::cout << "Address of Data in array = " << ptr << "\n";
        std::cout << "Data in Array = " << *ptr << "\n";
        // std::cout<<"& Address = "<<&ptr<<"\n";
    }
}

void CreateVector(Container &vectorData)
{
    vectorData.emplace_back(
        std::make_shared<ClassA>(
            105,
            25,
            "Lamborghini",
            11000.0f
        )
    );
    vectorData.emplace_back(
        std::make_shared<ClassA>(
            104,
            25,
            "Maserati",
            25000.0f
        )
    );
}

void DataDisplayInVector(Container &vectorData)
{
    std::cout<<"------------------------------------------------------------------------"<<"\n";
    
    for(std::shared_ptr<ClassA> ptr : vectorData){

        std::cout<<"Data Address in Vector = "<< ptr<<"\n";
        std::cout<<"Data in Vector = "<< *ptr<<"\n";
    }
}
