#include <set>
#include<memory>
#include<iostream>


// using Pointer = std::shared_ptr<Employee>;
// using pointer_container = std::set<Pointer>;

template<typename T>
void Display(const T& container){
    for (auto &val : container)
    {
        std::cout<< val<< "\n";
    }
    
}

// template<typename T>
// void DisplayPointers(const pointer_container& data){
//     for(const Pointer& val: data)
//     {
//         std::cout<< *ptr << "\n";
//     }
// }

int main(){
    std::set<int> s1 {10,20,30,40,10};

    Display<std::set<int>>(s1);

}