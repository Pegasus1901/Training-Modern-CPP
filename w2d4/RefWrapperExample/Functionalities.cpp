#include"Functionalities.h"

void CreateObjects(CarContainer &data,  EngineContainer& engineData)
{
    //after the scope of the function the engine pointer becomes null (commented auto pointer of engine)
    // thus we store the data of the engine to engine container.
    // so we dont lose data of the engine


    // auto engineData[0] = std::make_shared<Engine>(200,EngineType::PETROL);
    engineData[0] = std::make_shared<Engine>(200,EngineType::PETROL);
     engineData[1] = std::make_shared<Engine>(500,EngineType::DIESEL);

    data[0]=std::make_shared<Car>(
        101,
        "revoulto",
        450.0f,
    // std::make_shared<Engine>(200,EngineType::PETROL)
        engineData[0]
    );

   

    data[1]=std::make_shared<Car>(102,"huracan",500.0f,engineData[1]);
}

void PrintDetails(CarContainer &data, EngineContainer &enginedata)
{
    for(int i=0;i<2;i++){
        std::cout<<*data[i]<<'\n';
    }
}

int TotalHorsePower(CarContainer& data)
{
    int total=0;
    for (int i = 0; i < 2; i++)
    {
        total+=data[i]->engine().get()->horsepower();
    }
    
    return total;
}
