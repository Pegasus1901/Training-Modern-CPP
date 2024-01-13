#include <iostream>
int main(int argc, char const *argv[])
{
    int n1=10;
    int* ptr =&n1;
    int** sptr=&ptr;

    std::cout<<"Address n1 = "<<&n1<<std::endl;

    // int arr[3]= {1,2,3.0,'a'};
    
    /*
        in an array to go to i location

        get base address, , add(size)*i
    
    */
    return 0;
}
