#include<iostream>
#include<set>

template<typename T>
void Display(std::set<T>&data){
// void Display(std::set<T,std::less<float>>& data){
    for(const T val: data){
        std::cout << val << "\n";
    }
}

struct Employee
{
    int _id;
    float _salary;

    Employee(int id,float salary):_id(id),_salary(salary){}

    bool operator<(const Employee& rhs) const {
        // return (_salary<rhs._salary) || (rhs._salary > _salary) || (_salary!=rhs._salary);
        // return (_salary<rhs._salary);//change the condition since it is not checking all test cases
        return (_salary<rhs._salary) || (_salary>rhs._salary);
    }

    friend std::ostream& operator<<(std::ostream& os, const Employee& obj){
        os<<"Employee Id: "<< obj._id <<" Employee Salary: "<<obj._salary<<std::endl;
        return os;
    }
};



int main(){
    Employee e1{10,100.0f},e2 {20,200.0f}, e3{11,0.0f};
    // std::set<Employee, [] (const Employee& rhs){return _salary<rhs._salary;}>s1 {e1,e2, e3};
    std::set<Employee>s1 {e1,e2, e3}; //less than comparison
    // std::set<Employee,std::less<float> >s1 {e1,e2, e3};


    // Display<Employee,std::less<float>>(s1);
    Display<Employee>(s1);
    
}


// comparator with how many conditions?
//sol- comparator must be designed for strict weak ordering which require equivanence check

//I have smart pointers and i want to store them in set?
//Write a comparison function for smart_pointer<T> as a global function 9can use functorsin any case)

//what about marathon?
//final marathon may include questions on set of primitive types of user defined custom classes but NOT USING SMART POINTERS
