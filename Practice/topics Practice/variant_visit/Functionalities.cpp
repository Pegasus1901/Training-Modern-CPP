#include "Functionalities.h"

void CreateObjects(Container &data)
{

    data.emplace_back(
        std::make_shared<BuisnessMan>(
            "101",
            "Prathmesh",
            100.0f));

    data.emplace_back(
        std::make_shared<Employee>(
            102,
            "Aniket",
            200.0f));
}

// void StartApp(Container &data)
// {
//     std::thread startThread(&CreateObjects,std::ref(data));
//     startThread.join();
// }

void DisplayData(const Container &data)
{
    for (auto &ptr : data)
    {
        if (std::holds_alternative<EmpPointer>(ptr))
        {
            const EmpPointer &p = std::get<EmpPointer>(ptr);
            std::cout << "\n" << *p;
        }
        else if (std::holds_alternative<BuisnessmanPtr>(ptr))
        {
            const BuisnessmanPtr &b = std::get<BuisnessmanPtr>(ptr);
            std::cout << "\n" << *b;
        }
    }
}

std::optional<Container> OnlyEmployeeContainer(const Container &data)
{
    
    Container result;

    for (const VType &ptr : data)
    {
        if (std::holds_alternative<EmpPointer>(ptr))
        {
            result.emplace_back(std::get<EmpPointer>(ptr));
        }
    }

    if(result.empty()){
        throw std::runtime_error("Result Data is Empty!!!");
    }

    return result;
}
