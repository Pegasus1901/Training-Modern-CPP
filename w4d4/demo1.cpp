#include <algorithm>
#include <iostream>
#include <numeric>
#include <memory>
#include <unordered_map>

class Employee
{
private:
    std::string _name;
    float _salary;

public:
    Employee(std::string name, float salary)
        : _name(name),
          _salary(salary)
    {
    }
    Employee() {}
    Employee(Employee &&) = default;
    Employee(const Employee &) = default;
    Employee &operator=(Employee &&) = default;
    Employee &operator=(const Employee &) = default;
    ~Employee() {}

    std::string name() const { return _name; }

    float salary() const { return _salary; }
};

using Pointer = std::shared_ptr<Employee>;
using Container = std::unordered_map<int, Pointer>;

void CreateObjects(Container &data)
{
    data.emplace(
        std::make_pair(101, std::make_shared<Employee>("Aniket", 35000.0f)));
    data.emplace(
        std::make_pair(102, std::make_shared<Employee>("Prathmesh", 26000.0f)));
    data.emplace(
        std::make_pair(103, std::make_shared<Employee>("Jatin", 27000.0f)));
    data.emplace(
        make_pair(104, std::make_shared<Employee>("Atharva", 28000.0f)));
}

void TotalSalary(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty data");
    }
    float total = 0.0f;

    for (auto &[k, v] : data)
    {
        total += v->salary();
    }
    std::cout << "Total salary: " << total << std::endl;

    //////alternatively
    // for(auto itr=data.begin();itr!=data.end();++itr){
    //     total+=itr->second->salary();
    // }

    //////alternatively
    // for(const std::pair<int,Pointer>& ptr : data){
    //     total+=ptr.second->salary();
    // }

    //////alternatively
    //     float total_val=std::accumulate(data.begin(), data.end(),0.0f,[](float sum_till_current_val,const std::pair<int,Pointer>& row){
    //         return sum_till_current_val + row.second->salary();});

    //
}

void FindMinSalaryEmployeeName(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }
    /*
        min_element() will return an iterator to the min element found

    */
    auto itr = std::min_element(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer> &pair1, const std::pair<int, Pointer> &pair2)
        {
            return pair1.second->salary() < pair2.second->salary();
        });
    std::cout << "Name of min salary Employee is: " << itr->second->name() << std::endl;
}

void FindMaxSalaryEmployeeName(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    auto itr = std::max_element(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer> &pair1, const std::pair<int, Pointer> &pair2)
        {
            return pair1.second->salary() < pair2.second->salary();
        });
    std::cout << "Name of max salary Employee is: " << itr->second->name() << std::endl;
}

void CheckConditionAtLeastOne(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    bool flag = std::any_of(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer> &ptr)
        {
            return ptr.second->salary() > 80000.0f;
        });
}

// count the number of map pairs slary above 50000
void CountAbove50000Employee(const Container &data)
{

    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    int count = std::count_if(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer> &ptr)
        {
            return ptr.second->salary() > 50000.0f;
        });
}

// return the count of employees whose name length is less than 7 employees
int CountOfEmployeeNamesLessThan7(const Container &data)
{
    int count = std::count_if(
        data.begin(),
        data.end(),
        [](const std::pair<int, Pointer> &ptr)
        {
            return ptr.second->name().size() < 7;
        });

    return count;
}

// find the salary for the employee whose id is recieved as parameter(find_if)
void SalaryOfGivenID(const Container &data, int id)
{
    auto itr = std::find_if(
        data.begin(),
        data.end(),
        [&](const std::pair<int, Pointer> &ptr)
        {
            return ptr.first == id;
        });
    // find if only returns when something is found oterwise it rests on end position

    if (itr == data.end())
    {
        std::cout << "Id not Found\n";
    }
    else
    {
        std::cout << itr->second->salary();
    }
}

// find the avg salary for only those employee whose id is passed as a vector of integers to the function
void SalaryOfGivenVectorData(const Container &data, std::vector<int> &idData)
{
    float total = 0;
    int count = 0;

    for (auto id : idData)
    {
        auto itr = std::find_if(
            data.begin(),
            data.end(),
            [&](const std::pair<int, Pointer> &ptr)
            {
                return id == ptr.first;
            });
        if (itr != data.end())
        {
            count++;
            total = total + itr->second->salary();
        }
    }
    std::cout << "Avg = " << total / count << "\n";
}

void FindAverageOfGivenEmployees(const Container &data, std::vector<int> &idData)
{
    float total = 0;
    int count = 0;
    for (auto id : idData)
    {

        auto itr = data.find(id);

        if (itr != data.end())
        {
            count++;
            total = total + itr->second->salary();
        }
    }
    std::cout << "Avg = " << total / count << "\n";

}

int main()
{
    Container data;
    std::vector<int> iData{101,102};
    CreateObjects(data);
    TotalSalary(data);
    FindMinSalaryEmployeeName(data);
    FindMaxSalaryEmployeeName(data);
    std::cout << "NAME LESS THAN 7 = " << CountOfEmployeeNamesLessThan7(data) << "\n";

    SalaryOfGivenVectorData(data, iData);
}

/// where to use week 3 concepts:
/*
Scenario A : a function . I have input before creating thread, I dont want return value
ANSWER: std::thread should be enough

Scenario B: A function, I have input before creating thread I WANT RETURN VALUE
ANSWER: use std::async without future input but with a futute for return

Scenario C: A function, I dont have input before creating thread I dont want return
ANSWER: std::async with future input and future return type (could be void)

Scenario D: A function, I dont have input before creating thread I WANT RETURN VALUE
ANSWER: use std::async with future INPUT and future return type

Scenario E: A function, I have input ,I want to start thread using input I want my function to some work but stop or block before completion and wait for some event to happen
ANSWER: condition_variable based code using unique lock
*/
