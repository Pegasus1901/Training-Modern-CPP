#include"Functionalities.h"
using namespace std::placeholders;

int main(){

    // ArrayType arrData;
    ClassAContainer vectorData;
    ClassEContainer vectorE;
    // ClassBContainer vectorDataClassB;

    // CreateArray(arrData);
    CreateVector(vectorData);
    ClassECreation(vectorE);
    // DataDisplayInArray(arrData);
    // DataDisplayInVector(vectorData);

    // TotalSalaryInClassAContainer(vectorData);
    // LambdaInsideAFunction(vectorData);
    // std::cout <<"Output of Lambda Inside a Lambda total = "<<LambdaInsideLambda(vectorData)<<std::endl;

    // auto bindingLambdaFunction = std::bind(LambdaForBinding,_2,_1);
    // bindingLambdaFunction(2,3,1);

    // auto bindingFunction = std::bind(&FunctionForBinding,_1,_2);
    // std::cout<<"Function Binding Result : "<< bindingFunction(2,3)<<std::endl;

    // DynamicCastFunction();

    // CreateClassBContainer(vectorDataClassB);
 
    // ClassCContainer c = ReturnClassCContainerFunction(vectorDataClassB);
    
    // // for (auto &ptr : c)
    // // {
    // //     std::cout<<*ptr<<std::endl;
    // // }

    // PrintClassCContainerByIterator(c);

    // return 0;
}