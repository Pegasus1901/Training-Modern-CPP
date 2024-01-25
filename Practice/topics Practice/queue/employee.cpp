
#include<iostream>
#include<queue>
#include<memory>

class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;
public:
    Employee(int id, std::string name, float salary)
    : _id(id),_name(name),_salary(salary)
    {}

    Employee(Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(Employee&)=delete;
    Employee& operator=(Employee&&)=delete;

    ~Employee()=default;

    int id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary;
    return os;
}
};

using Pointer = std::shared_ptr<Employee>;
using Container = std::queue<Pointer>;

void CreateObjects(Container &data)
{
    data.push(std::make_shared<Employee>(101,"Aniket", 35000.0f));
    data.emplace(std::make_shared<Employee>(102,"Prathmesh", 26000.0f));
    data.emplace(std::make_shared<Employee>(103,"Jatin", 27000.0f));
    data.emplace(std::make_shared<Employee>(104,"Atharva", 28000.0f));
}
int main(){
    Container data;
    CreateObjects(data);
    std::cout<<*(data.front())<<"\n";
    std::cout<<*(data.back());
}
 






