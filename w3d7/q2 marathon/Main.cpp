#include "Functionalities.h"

int main()
{
    ProductContainer data;
    std::thread t1 (&CreateProductList,std::ref(data));

    std::future<float> result = std::async(std::launch::async,AverageProductPrice,std::ref(data));
    

}














/*
{
    ProductContainer Products;

    CreateProductList(Products);
    PrintDetails(Products);



    // auto AveragePrice_Function = std::bind(AverageProductPrice, std::ref(Products));

    // try
    // {
        std::cout << "\n \n \n";
        // std::cout << "Average Product Price is = " << AveragePrice_Function() << std::endl;
        std::future < float > Avg_result = std::async(std::launch::async,AverageProductPrice,std::ref(newFuture));
    // }

    // catch (const std::exception &e)
    // {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }
    // auto TaxBind = std::bind(TaxOnExpensiveProduct, std::ref(Products));
    // try
    // {
    //     std::cout<<"\nMaxmium Tax Amount : "<<TaxBind()<<"\n";
    //     // std::cout<<PrintDetails(Products);
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }

    // // auto UniqueBrand_function = std::bind(UniqueProductBrands,std::ref(Products));

    // // try
    // // {
    // //    ProductContainer res =  UniqueBrand_function();

    // // }
    // // catch (const std::exception &e)
    // // {
    // //     std::cerr << "Error: " << e.what() << std::endl;
    // // }

    // auto TypeAndOrigin_function = std::bind(ProductTypeAndOriginInValues, std::ref(Products));

    // try
    // {
    //    auto Arr= TypeAndOrigin_function();
    //    for (int i = 0; i < Arr.size(); i++)
    //    {
    //             std::cout<<"\nInstance: "<<Arr[i];
    //    }
       
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }

    // auto AddressofProduct_function = std::bind(AddressOfGivenProductBrandName, std::ref(Products), "Hp");

    // try
    // {

    //    ProductContainer ans= AddressofProduct_function();
    //    std::cout<<"\n";
    //    PrintDetails(ans);

    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }

    // auto LastInstances_Function = std::bind(LastNInstancesOfProduct, std::ref(Products));

    // try
    // {
    //     ProductContainer ans1 =  LastInstances_Function();
    //     std::cout<<"\n"; PrintDetails(ans1);
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }

    return 0;
}
*/