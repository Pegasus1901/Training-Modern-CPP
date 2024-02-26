#include "Functionalities.h"

int main(){
    // Vehicle* arr= {nullptr};

   const int size =3;
   Vehicle* arr[size] ={nullptr};
//    Vehicle* arr1= new Vehicle[3];

   CreateObjects(arr,size);


   /*
        Average price should br calculated for
        all instances stored in the array by CreateObj
   */
   float ans = AveragePrice(arr,size);
   std::cout<<"Average Output= "<<ans<<std::endl;
}