#include<iostream>
#include<functional>


 void operation(std::function<int(int,int)>logic,int data1, int data2){
    logic( data1, data2);
   }

int main()
{
  
  operation([](int n1, int n2) {return n1+n2;},10,20);

    return 0;
}
