#ifndef CLASSA_H
#define CLASSA_H

#include<iostream>

class ClassA
{
private:
    int _id;
    int _age;
    std::string _name;
    float _salary;

public:
    ClassA(int id,int age,std::string name,float salary);
    ~ClassA() = default;
    ClassA() = default;
    ClassA(const ClassA &) = delete;
    ClassA(ClassA &&) = delete;
    ClassA operator=(const ClassA &) = delete;
    ClassA operator=(ClassA &&) = delete;
    
    friend std::ostream &operator<<(std::ostream &os, const ClassA &rhs);
};

#endif // CLASSA_H
