#include "Functionalities.h"

void ClassECreation(ClassEContainer &vectorData)
{
    vectorData.emplace_back(
        std::make_shared<ClassE>(
            std::make_shared<ClassD>(10)
        )
    );

    std::cout<<"Emplace worked!!!!";
}
