#include"Functionalities.h"

int main(){

    Container data;
    CreateObjectS(data);
    for(auto& ptr: data){
        std::cout<<"\n"<<ptr.first<<"\t"<<*(ptr.second);
    }
}