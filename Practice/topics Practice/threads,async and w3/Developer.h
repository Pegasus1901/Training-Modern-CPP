#ifndef DEVELOPER_H
#define DEVELOPER_H
#include<iostream>

class Developer
{
private:
    std::string _developerMsg;
public:
    Developer()=default;
    Developer(std::string developerMsg);
    ~Developer()=default;

    std::string developerMsg() const { return _developerMsg; }

    friend std::ostream &operator<<(std::ostream &os, const Developer &rhs);
};

#endif // DEVELOPER_H
