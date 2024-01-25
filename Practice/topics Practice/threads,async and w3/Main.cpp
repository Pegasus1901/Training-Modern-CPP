#include"Functionalities.h"

int main(){
    VariantContainer data;
    CreateObjects(data);
    DisplayContainerData(data);


    
    auto s = MatchingMessages(data,"Manager");

    if(s.has_value()){
        for (auto &ptr : s.value())
        {
            std::visit(
                [](auto && val){
                    std::cout<<*val<<" Is the value !!!";
                }
                ,ptr
            );
        }
    }

    
}