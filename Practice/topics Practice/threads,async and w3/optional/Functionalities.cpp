#include "Functionalities.h"

void CreateObjects(Container& data)
{
    data.emplace_back(
        std::make_shared<Car>("c101",89000.0f, CarType::SEDAN)
    );
    data.emplace_back(
        std::make_shared<Car>("c102",89000.0f, CarType::SUV)
    );
    data.emplace_back(
        std::make_shared<Bike>("b201",89000.0f, BikeType::COMMUTE)
    );
}

float AveragePrice(const Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data Empty");
    }

    float totalPrice=0;

    for (const VType& v : data)
    {
        std::visit(
            [&](auto && val){
                totalPrice+=val->price();                    
            },
            v
        );
    }
    
    return totalPrice / data.size();
}

bool IfIdIsPresent(const Container &data, std::string id)
{
    if(data.empty()){
        throw std::runtime_error("Empty Data");
    }

    bool flag= false;

    for (VType v : data)
    {
        std::visit(
            [&](auto && val){
                if(val->id()==id){ flag=true;}
            },
            v
        );
    }
    return flag;
}



// doesnt work since we cannot compare type provided with a std:: visit since it does not return any value
//  std::optional<std::list<VType>> InstancesMatchingType(const Container &data, std::variant<BikeType, CarType> type)
//  {
//      if(data.empty()){
//          throw std::runtime_error("Empty Data");
//      }

//     Container result;

//     for (const VType& v : data)
//     {
//         std::visit(
//             [](auto&& val){
//                 if(val->type()== )
//             }
//         );
//     }
//     return std::optional<std::list<VType>>();
// }

// VType InstanceWithMinimumPrice(const Container &data)
// {
//     if(data.empty()){
//          throw std::runtime_error("Empty Data");
//     }

//     float MinPrice=std::visit([](auto&& val){return val->price();},data.front());

//     for(auto&v:data){
//         std::visit(
//             [&](auto && val){
//                 if(MinPrice>val->price()){
//                     MinPrice=val->price();
//                 }
//             },
//             v

//         );
//     }

//     return ;
    
// }
