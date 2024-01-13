#include<iostream>
#include<vector>
#include<array>

int main(){
    int n1=10;
    int& ref1=n1;

    // int& arr[1] {ref1};//array of refrences is not allowed since the refrence does not exist it is only an alias
    std::vector<int&>v1{ref1};
}