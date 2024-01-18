#ifndef CLASSA_H
#define CLASSA_H

#include<iostream>
#include<memory>
#include"ClassD.h"


class ClassA
{
private:
    int _id{};
    int _age{};
    std::string _name{""};
    float _salary{};

public:
    ClassA(int id,int age,std::string name,float salary);
    ~ClassA() = default;
    ClassA() = delete;
    ClassA(const ClassA &) = delete;
    ClassA(ClassA &&) = delete;
    ClassA operator=(const ClassA &) = delete;
    ClassA operator=(ClassA &&) = delete;

    float salary() const { return _salary; }

    friend std::ostream &operator<<(std::ostream &os, const ClassA &rhs);

   

    
};

#endif // CLASSA_H
