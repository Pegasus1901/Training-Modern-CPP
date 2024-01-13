#include "Functionalities.h"

void CreateProductList(ProductContainer &data)
{
    data.emplace_back(
        std::make_shared<Product>(
            "101",
            ProductType::APPLIANCE,
            100.0f,
            "Hp",
            ProductOrigin::DOMETIC));
    data.emplace_back(
        std::make_shared<Product>(
            "101",
            ProductType::APPLIANCE,
            100.0f,
            "Dell",
            ProductOrigin::DOMETIC));
    data.emplace_back(
        std::make_shared<Product>(
            "101",
            ProductType::APPLIANCE,
            100.0f,
            "Acer",
            ProductOrigin::DOMETIC));
    data.emplace_back(
        std::make_shared<Product>(
            "101",
            ProductType::APPLIANCE,
            100.0f,
            "Dell",
            ProductOrigin::DOMETIC));
}

void PrintDetails(ProductContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("data is empty");
    }

    for (auto &ptr : data)
    {
        std::cout << *ptr;
    }
}

std::function<float(ProductContainer &data)> AverageProductPrice = [](ProductContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("data is empty");
    }

    float total = 0;

    for (auto &ptr : data)
    {
        total += ptr->productPrice();
    }

    return total / data.size();
};

std::function<float(ProductContainer &data)> TaxOnExpensiveProduct = [](ProductContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("data is empty");
    }
    ProductPointer rs;
    float maxPrice = 0;
    for (auto &ptr : data)
    {
        if (maxPrice < ptr->productPrice())
        {
            maxPrice = ptr->productPrice();
            rs = ptr;
        }
    }
    return rs->productTaxAmount();
    // for (auto &ptr : data)
    // {
    //     if(maxPrice == ptr->productPrice()){
    //         return ptr->productTaxAmount();
    //     }
    // }

    throw std::runtime_error("Something went wrong in Max Product Price Function");
};

std::function<ProductContainer(ProductContainer &data)> LastNInstancesOfProduct = [](ProductContainer &data)
{
    int choice = 0;
    std::cout << "Enter number of products from last = " << std::endl;
    std::cout << "Select from 0 - " << data.size() << std::endl;
    std::cin >> choice;

    ProductContainer result;

    int goalIndex = data.size() - choice;
    auto itr = data.end();
    --itr;

    while (choice > 0)
    {
        result.emplace_back(*itr);
        itr--;
        choice--;
    }

    if (result.empty())
    {
        throw std::runtime_error("Result Container is Empty");
    }
    return result;
};

std::function<ProductContainer(ProductContainer &data)> UniqueProductBrands = [](ProductContainer &data)
{
    ProductContainer result;

    std::shared_ptr<Product> p = data.front();

    result.emplace_back(p);

    for (auto &ptr : data)
    {
        for (auto &newptr : result)
        {
            if (ptr->productBrand() != newptr->productBrand())
            {
                result.emplace_back(ptr);
            }
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("Result Container is Empty");
    }

    return result;
};

std::function<ArrayType(ProductContainer &data)> ProductTypeAndOriginInValues = [](ProductContainer &data)
{
    int foodType = 0, domesticOrigin = 0;
    ArrayType result;

    for (auto &ptr : data)
    {
        if (ptr->type() == ProductType::FOOD)
        {
            foodType++;
        }
        if (ptr->origin() == ProductOrigin::DOMETIC)
        {
            domesticOrigin++;
        }
    }

    result[0] = foodType;
    result[1] = domesticOrigin;

    if (result.empty())
    {
        throw std::runtime_error("Result Container is Empty");
    }

    return result;
};

std::function<ProductContainer(ProductContainer &data, std::string name)> AddressOfGivenProductBrandName = [](ProductContainer &data, std::string name)
{
    ProductContainer result{};

    for (auto &ptr : data)
    {
        if (ptr->productBrand() == name)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("No data found same as provided brand name");
    }

    return result;
};
