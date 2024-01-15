#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#define PI 3.1417

#include<array>
#include<vector>
#include<memory>

#include"ClassA.h"


using classAPointer = std::shared_ptr<ClassA>;
using ArrayType = std::array<classAPointer,5>;
using Container = std::vector<classAPointer>;

//Insert data in array
void CreateArray(ArrayType& arrData);

//Display data in array
void DataDisplayInArray(ArrayType& arrData);

//Insert Data in Vector
void CreateVector(Container& vectorData);

//Display data in Vector
void DataDisplayInVector(Container& vectorData);



#endif // FUNCTIONALITIES_H
