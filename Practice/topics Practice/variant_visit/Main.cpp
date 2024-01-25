#include "Functionalities.h"
int main()
{
    Container data;
    CreateObjects(data);
    DisplayData(data);
    
    auto employeeChaContainerAheHa = OnlyEmployeeContainer(data);

    if(employeeChaContainerAheHa.has_value()){
        DisplayData(employeeChaContainerAheHa.value());
    }

    return 0;
}
