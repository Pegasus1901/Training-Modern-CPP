#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>

class Manager
{
private:
    std::string _ManagerMsg;
public:
    Manager()=default;
    Manager(std::string ManagerMsg);
    ~Manager()= default;

    std::string managerMsg() const { return _ManagerMsg; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
};

#endif // MANAGER_H
