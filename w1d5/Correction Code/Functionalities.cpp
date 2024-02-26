#include "Functionalities.h"

void CreateObject(Container &data) noexcept
{
    data.emplace_back(
        std::make_shared<Customer>(101,
                                   "Prathmesh",
                                   21,
                                   CustomerType::ELITES,
                                   std::make_shared<DebitCard>(123, "Prathmesh", "11/22", DebitCardType::INTERNATIONAL)));
    data.emplace_back(
        std::make_shared<Customer>(102,
                                   "Aniket",
                                   51,
                                   CustomerType::REGULAR,
                                   std::make_shared<DebitCard>(13, "Aniket", "11/24", DebitCardType::INTERNATIONAL)));
}

float AverageAge(Container &data)
{
    if (data.empty())
    {
        std::cout << "Empty Data" << std::endl;
    }

    float total = 0.0f;

    // for every pointer called ptr present in data, do the following
    // for each loop (range based for loop)
    for (Pointer &ptr : data)
    {
        // smart pointer used as regular pointer
        total = total + ptr->age();
    }

    return total / data.size();
}

Pointer NthCustomer(Container &data, int n)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    if (n > data.size() || n < 1)
    {
        throw std::runtime_error("N is out of bonds");
    }

    auto itr = data.begin();

    while (n > 1)
    {
        itr++;
        n--;
    }

    return *itr;
}

int AgeOfGivenCustomer(Container &data, int id)
{
    // data empty exception here
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    for (auto &ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->age();
        }
    }

    throw std::runtime_error("ID NOT FOUND");
}

int CVVOfGivenID(const Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    for (auto &ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->card()->cvv();
        }
    }
    throw "NO DEBIT CARD WITH GIVEN CVV FOUND";
}

std::string ExpiryDateOfCVV(const Container &data, int cv)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    for (auto &ptr : data)
    {
        if (ptr->card()->cvv() == cv)
        {
            return ptr->card()->expiry();
        }
    }
    throw "NO MATCH FOUND FOR GIVEN CVV";
}

Container AgeAbove50(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }
    
    Container result;

    for (auto &ptr : data)
    {
        if (ptr->age() > 50)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error( "NO CUSTOMER AGE GREATER THAN 50 FOUND");
    }

    return result;
}

std::shared_ptr<DebitCard> DebitCardPointerOfGivenId(const Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty Data");
    }

    for (auto &ptr : data)
    {
        if (ptr->id() == id)
        {
            return ptr->card();
        }
    }
    throw std::runtime_error("NO DEBIT CARD FOUND");
}

//
// float AveragePrice(Container &data) noexcept(false){

// }
