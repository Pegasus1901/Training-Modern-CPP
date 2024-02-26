#include "Functionalities.h"

int main()
{
    Container data; // empty container (vector)

    CreateObject(data);
    // std::cout<<*(data[0])<<std::endl;

    std::cout << *NthCustomer(data, 1);

    try
    {
        Container ans = AgeAbove50(data);

        for (const Pointer &ptr : ans)
        {
            std::cout << *ptr << '\n';
        }
    }
    catch (const std::runtime_error &e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}
