#include"Vehicle.h"

/*
    accept a pointer to an array of pointers,
    Initlize objects on heap, 
    store their addresses in the array
*/

void CreateObjects(Vehicle** arr, const int size);


/*
    Loop over instances,
    Calculate totl price and divide it by number of instances
*/

float AveragePrice(Vehicle** arr,const int size);

/*
    Return _id of Vehicle with lowest price
*/

int LowestPriceId(Vehicle**arr, const int size);