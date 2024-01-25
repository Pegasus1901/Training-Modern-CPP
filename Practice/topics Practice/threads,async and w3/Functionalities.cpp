#include "Functionalities.h"

void CreateObjects(VariantContainer& Edata)
{
    Edata.emplace_back(
        std::make_shared<Developer>(
            "Developer"
        )
    );
    Edata.emplace_back(
        std::make_shared<Manager>(
            "Manager"
        )
    );
}

std::mutex mutexVariablename;

void DisplayContainerData(const VariantContainer &data)
{
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    for (auto &ptr : data)
    {
        std::lock_guard<std::mutex> lockingdocking(mutexVariablename);
        std::visit(
            [](auto && val){
                std::cout<<*val<<"\n";
            }
            ,ptr
        );
    }
    
}

void StartApp(VariantContainer &data)
{
    std::thread createVector(&CreateObjects,std::ref(data));
    std::thread displayVector(&DisplayContainerData,std::ref(data));
    
    
    std::future<std::string> result = std::async(std::launch::async,&ReturnMessageFromObj,std::ref(data));
    std::string value = result.get();
    std::cout << "Value = " << value << std::endl;
    

    createVector.join();
    displayVector.join();
    
}

std::optional<VariantContainer> MatchingMessages(const VariantContainer &data, std::string msg)
{
    VariantContainer result;
    for (auto &ptr : data)
    {
              if(  std::holds_alternative<ManagerPointer>(ptr)){
                const ManagerPointer& p=std::get<ManagerPointer>(ptr);
                if(p->managerMsg()==msg){
                    result.emplace_back(ptr);
                }
              }
          
    }
    if(result.empty()){
        return std::nullopt;
    }

    return result;
}

std::string ReturnMessageFromObj(const VariantContainer &data)
{
    for (const EmpVariant& ptr : data)
    {
        if(std::holds_alternative<DeveloperPointer>(ptr)){
            const DeveloperPointer &dev = std::get<DeveloperPointer>(ptr);
             return dev->developerMsg();
        }
    }
    
    throw std::runtime_error("No Message found");
}