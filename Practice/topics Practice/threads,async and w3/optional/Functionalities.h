#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<list>
#include<memory>
#include<variant>
#include<optional>

#include "Car.h"
#include "Bike.h"

using BikePointer= std::shared_ptr<Bike>;
using CarPointer= std::shared_ptr<Car>;

using VType= std::variant<BikePointer,CarPointer>;
using Container = std::list<VType>;

//taking an empty container by lvalue ref and fill with objects
//returns void
void CreateObjects(Container& data);

//Average price can be found using visit and total
float AveragePrice(const Container& data);

//First instance with minimum price(all vechiles have prices which are unique)
//what return type? -raw object? X | -shared?  X | -variant? v
VType InstanceWithMinimumPrice(const Container& data);

//check if given ID is present in any of the instance
bool IfIdIsPresent(const Container& data, std::string id);

//return all instances whose type matches with type passed
// std::optional< std::list<VType> >InstancesMatchingType(const Container& data, std::variant<BikeType,CarType> type);
template <typename T>
std::optional< std::list<VType> >InstancesMatchingType(const Container& data, T type){
     if(data.empty()){
         throw std::runtime_error("Empty Data");
     }

    Container result;

    for (const VType& v : data)
    {
        //variant cannot save another variant
        //variant always takes any one parameter which is set
        std::visit(
            [&](auto&& val){
                if(val->type()== type){result.emplace_back();}
            },
            v
        );
    }
    // if result empty even after for loop,it means no instance has matching type.
    // Compiler should be notified that result has no valid value.this is why we send null

    if(result.empty()){
        return std::nullopt;
    }

    return result;
}

#endif