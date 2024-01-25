#include "Functionalities.h"

void CreateObjects(EmpContainer& Edata, IdContainer& idData)
{
    idData.emplace_back(
        std::make_shared<IdCard>( 101,
        "abc")
    );

    Edata.emplace_back(
        std::make_shared<Employee>(
            101,
            "Prath",
            200.0f,
            idData[0]      
        )
    );
}

void DisplayContainerData(const EmpContainer &data)
{
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    for (auto &ptr : data)
    {
        std::cout<<"Data: \n"<< *ptr.get();
    }
    
}

void StartApp(EmpContainer &data, IdContainer& idData)
{
    std::thread createVector(&CreateObjects,std::ref(data),std::ref(idData));
    std::thread displayVector(&DisplayContainerData,std::ref(data));

    createVector.join();
    displayVector.join();
}
