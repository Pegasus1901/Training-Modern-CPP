#include<iostream>

class MyClass
{
private:
    int _id;
public:
    MyClass() { }
    ~MyClass() {}
    MyClass(const MyClass&){std::cout<<"Copy Constructor \n";}
    MyClass(int id):_id(id){};

};

MyClass Magic(MyClass& obj){
    MyClass temp(obj);
    return temp;
}

int main(int argc, char const *argv[])
{
    //notes here
    MyClass obj(100);


    //note here returnobj **
    MyClass return_obj = Magic(obj);

    std::cout<< &return_obj<<"\n";
    
    return 0;
}
