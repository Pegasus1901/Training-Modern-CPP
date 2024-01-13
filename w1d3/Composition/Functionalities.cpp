#include"Functionalities.h"


void CreateObject(Container &data)
{   
    data.emplace_back(
    std::make_shared<Customer>(101,
    "Prathmesh",
    21,
    CustomerType::ELITES,
    std::make_shared<DebitCard>(123,"Prathmesh","11/22",DebitCardType::INTERNATIONAL))
    );
    // auto itr= l1.begin();

}
