#include "Functionalities.h"

void CreateArray(ArrayType &arrData)
{
    arrData[0] = std::make_shared<ClassA>(
        101,
        25,
        "Honda",
        80000.0f
    );

    arrData[1] = std::make_shared<ClassA>(
        102,
        25,
        "Tata",
        50000.0f
    );

    arrData[2] = std::make_shared<ClassA>(
        103,
        25,
        "Toyata",
        900.0f
    );

    arrData[3] = std::make_shared<ClassA>(
        104,
        25,
        "Maserati",
        25000.0f
    );

    arrData[4] = std::make_shared<ClassA>(
        105,
        25,
        "Lamborghini",
        11000.0f
    );
}

void CreateVector(ClassAContainer &vectorData)
{
    vectorData.emplace_back(
        std::make_shared<ClassA>(
            101,
            10,
            "Volvo",
            200.0f
        )
    );
}



void DataDisplayInArray(ArrayType &arrData)
{
    for (std::shared_ptr<ClassA> ptr : arrData)
    {
        std::cout << "Address of Data in array = " << ptr << "\n";
        std::cout << "Data in Array = " << *ptr << "\n";
        // std::cout<<"& Address = "<<&ptr<<"\n";
    }
}


void DataDisplayInVector(ClassAContainer &vectorData)
{
    std::cout<<"------------------------------------------------------------------------"<<"\n";
    
    for(std::shared_ptr<ClassA> ptr : vectorData){

        std::cout<<"Data Address in Vector = "<< ptr<<"\n";
        std::cout<<"Data in Vector = "<< *ptr<<"\n";
    }

    std::cout<<"------------------------------------------------------------------------"<<"\n";

}

void CreateList(ClassAList &listData)
{
    listData.emplace_back(
        std::make_shared<ClassA>(
            104,
            25,
            "Maserati",
            25000.0f
        )
    );
}

void ClassECreation(ClassEContainer &vectorData)
{
    vectorData.emplace_back(
        std::make_shared<ClassE>(
            std::make_shared<ClassD>(10)
        )
    );

    std::cout<<"Emplace worked!!!!";
}

void DataDisplayInList(ClassAList &listData)
{
    for (std::shared_ptr<ClassA> ptr : listData)
    {
        std::cout << "Address of list in array = " << ptr << "\n";
        std::cout << "Data in list = " << *ptr << "\n";
    }
}

void LambdaInsideAFunction(ClassAContainer &vectorData)
{
    auto lambdaFunction = [&](){
        auto p = vectorData.begin();
        std::cout<<"Lambda Function Works"<<std::endl;
        std::cout << "Value of first vector in lambda: " << **p;
    };
    lambdaFunction();
}

int FunctionForBinding(int a, int b)
{
    std::cout<<"\n \tFunction for binding = "<<a<<"\t"<<b <<"\n \tReturn value = ";
    return a;
}

void DynamicCastFunction()
{
    classBPointer bPtr = std::make_shared<ClassC>(1,1.0f);
    std::cout<<"This is ClassB call : "<<"\n";
    bPtr->virTualFunction();

    classCPointer cPtr = std::dynamic_pointer_cast<ClassC>(bPtr);
    std::cout<<"This is ClassC call : "<<"\n";
    cPtr->PrintValue();
}

void CreateClassBContainer(ClassBContainer &vectorData)
{
    vectorData.emplace_back(
        std::make_shared<ClassC>(
            10,
            20.0f
        )
    );
    vectorData.emplace_back(
        std::make_shared<ClassC>(
            104,
            25.0f
        )
    );
}

ClassCContainer ReturnClassCContainerFunction(ClassBContainer &vectorData)
{
    ClassCContainer result;
    for (auto &ptr : vectorData)
    {
        result.emplace_back(std::dynamic_pointer_cast<ClassC>(ptr));
    }
    return result;
}

void PrintClassCContainerByIterator(ClassCContainer &vectorData)
{
    auto itr=vectorData.begin();

    while(itr!=vectorData.end()){

        std::cout<<*itr->get()<<"\n";
        //can also call or print specific values
        // std::cout<<*itr->get()->PrintValue()<<"\n"; 
        itr++;

    }
}

std::function<void(ClassAContainer& vectorData)> TotalSalaryInClassAContainer= [](ClassAContainer& vectorData){
    float total = 0.0f;
    for (classAPointer &ptr : vectorData)
    {
        total += ptr->salary();
        
    }
    std::cout<<"Total salary: "<< total << "\n";
    
};

std::function<float(ClassAContainer& vectorData)> LambdaInsideLambda = [](ClassAContainer& vectorData){
    float total = 0.0f;
    
    auto lambdaFunction = [&](){
        for (auto &ptr : vectorData)
        {
            total+=ptr->salary();
        }
        
    };
    return total;
};

std::function<void(int a, int c)> LambdaForBinding= [](int a, int c){
    std::cout<<"Inside Lambda Function for binding = "<<a<<"\t"<<c<<std::endl;
};