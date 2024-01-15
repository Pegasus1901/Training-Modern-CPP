#include<unordered_map>
#include<iostream>

int main(){
    std::unordered_map<int,std::string> umap{
        {101,"Prathmesh"},
        {102,"Aniket"}
    };



    

    std::cout<<"Employee with ID"<<umap[101]<<"\n";
}