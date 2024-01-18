#ifndef CLASSB_H
#define CLASSB_H

class ClassB
{
private:
    int balance;
    int cash;
public:
    ClassB()=default;
    virtual void virTualFunction()=0;
    virtual ~ClassB()=default;
};

#endif // CLASSB_H
