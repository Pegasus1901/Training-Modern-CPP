#include "Functionalities.h"

int main()
{
    try
    {
        Container data; // empty container (vector)

        CreateObject(data);

        std::cout << *(data[0]) << std::endl;
    }
    catch (std::runtime_error e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}
