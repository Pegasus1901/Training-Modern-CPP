#include"Functionalities.h"

int main()
{
    
    Container data;
    CreateObjects(data);
    AveragePrice(data);
    IfIdIsPresent(data,"");
    auto ss = InstancesMatchingType(data,BikeType::COMMUTE);
     
    if(ss.has_value()){
        for (auto && ptr : ss.value())
        {
            std::visit(
                [](auto&& val){
                    std::cout<<"\n"<<*val;
                }
                ,ptr
            );
            
        }
        
    }
    
    return 0;
}
