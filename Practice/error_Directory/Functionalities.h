

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<array>
#include<vector>
#include<memory>
#include<iostream>

#include"ClassD.h"
#include"ClassE.h"
using classDPointer = std::shared_ptr<ClassD>;
using classEPointer = std::shared_ptr<ClassE>;

using ClassEContainer = std::vector<classEPointer>;


//Verification function
void ClassECreation(ClassEContainer& vectorData);

#endif // FUNCTIONALITIES_H
