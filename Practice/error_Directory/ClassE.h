#ifndef CLASSE_H
#define CLASSE_H
#include<memory>
#include"ClassD.h"

class ClassE
{
private:
    std::shared_ptr<ClassD> _dClass;
public:
    ClassE()=delete;
    ClassE(std::shared_ptr<ClassD> dClass):_dClass(dClass){}
    ~ClassE()=default;
};

#endif // CLASSE_H
