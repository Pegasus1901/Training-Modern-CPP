#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

// #define PI 3.1417 ....

#include<array>
#include<vector>
#include<memory>
#include<list>
#include<functional>

#include"ClassA.h"
#include"ClassC.h"
#include"ClassD.h"
#include"ClassE.h"

using classAPointer = std::shared_ptr<ClassA>;
using classBPointer = std::shared_ptr<ClassB>;
using classCPointer = std::shared_ptr<ClassC>;
using classDPointer = std::shared_ptr<ClassD>;
using classEPointer = std::shared_ptr<ClassE>;


using ArrayType = std::array<classAPointer,5>;


using ClassAContainer = std::vector<classAPointer>;
using ClassBContainer = std::vector<classBPointer>;
using ClassCContainer = std::vector<classCPointer>;
using ClassEContainer = std::vector<classEPointer>;

using ClassAList = std::list<classAPointer>;

//Insert data in array
// void CreateArray(ArrayType& arrData);

//Display data in array
// void DataDisplayInArray(ArrayType& arrData);

//Insert Data in Vector
void CreateVector(ClassAContainer& vectorData);

//Display data in Vector
void DataDisplayInVector(ClassAContainer& vectorData);

//Insert Data in list
void CreateList(ClassAList& listData);

//Verification function
void ClassECreation(ClassEContainer& vectorData);

//Display data in list
void DataDisplayInList(ClassAList& listData);

//Lambda function to calculate total salary
extern std::function<void(ClassAContainer& vectorData)> TotalSalaryInClassAContainer;

//A lambda function is inside this function
void LambdaInsideAFunction(ClassAContainer& vectorData);

//This is a lambda function containing function
extern std::function<float(ClassAContainer& vectorData)> LambdaInsideLambda;

//Simple lambda function for printing passed values
extern std::function<void(int a, int c)> LambdaForBinding;

//Basic Function For binding
int FunctionForBinding(int a, int b);

//Dynamic casting from B class to C class
void DynamicCastFunction();

void CreateClassBContainer(ClassBContainer& vectorData);

ClassCContainer ReturnClassCContainerFunction(ClassBContainer& vectorData);

void PrintClassCContainerByIterator(ClassCContainer& vectorData);


#endif // FUNCTIONALITIES_H
