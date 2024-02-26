#include <iostream>
#include "Functionalities.h"

int main()
{
    Container ptr;
    CreateObjects(ptr);
    // AcceptData(ptr);
    ShowDetails(ptr);

    std::cout<<'\n';
    ptr[0]->CalculateRegistrationCharge();

    std::cout << "Average = " << CalculateAverage(ptr) << std::endl;
    std::cout<< "Total No of Cars = "<<ptr.size()<<std::endl;
    
    return 0;
}
