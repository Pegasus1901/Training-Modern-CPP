//tuple
//array
/*
    //consider encoding here
    //to break down the data into multiple structures we use structured binding
    arr= {101,7000, 0};
*/
#include<array>

int main(){
    std::array<int,3> arr {101,7000,0};

    // normal people
    int id = arr[0];
    int salary=arr[1];
    int gender=arr[2];

    //developer 

    auto [_id,_salary,_gender] = arr;
}