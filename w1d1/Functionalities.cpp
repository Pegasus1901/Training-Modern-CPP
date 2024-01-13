#include "Functionalities.h"

void CreateObjects(Vehicle **arr, const int size)
{

    // new Vehicle(101, "Maruti Dzire", 850000.0f, vechicleType::PERSONAL);

    int id = 0;
    std::string name = "";
    float price = 0.0f;
    int choice = -1;

    for (int i = 0; i < size; i++)
    {
        std::cin >> id;
        std::cin >> name;
        std::cin >> price;
        vechicleType type= vechicleType::TRANSPORT;
        std::cin >> choice;

        if(choice==0){
            type= vechicleType::PERSONAL;
        }
        else if(choice ==1){
            type= vechicleType::SECURITY;
        }
        else{
            type= vechicleType::TRANSPORT;
        }
        arr[i] = new Vehicle(id, name, price, type);
    }
}

float AveragePrice(Vehicle **arr, const int size)

{
    float total = 0.0f;

    for (int i = 0; i < size; i++)
    {
        total += arr[i]->price();
    }

    return total/size;
}

int LowestPriceId(Vehicle **arr, const int size)
{
    // first location is minimum price
    int ans = arr[0]->price();

    float _min_price = arr[0]->price();

    for (int i = 1; i < size; i++)
    {
        float _current_price = arr[i]->price();

        if (_current_price < _min_price)
        {
            _min_price = _current_price;
            ans = arr[i]->id();
        }
    }

    return ans;
}
