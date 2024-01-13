#include<iostream>

enum class Rank{
    FIRST,SECOND,THIRD
};

enum class Gear{
    FIRST,SECOND,THIRD
};

int main(){
    enum Rank r1=Rank::FIRST;
    enum Rank rr1=Rank::FIRST;

    enum Gear g1= Gear::SECOND;

    if(r1==rr1){
        
    }
}
