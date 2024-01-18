#include <memory>

//variatic templates(templates that can accept variable number of arguments)
//e.g- make_share fun template


template<typename T>
T add(T n1){
    return n1;
}

template<typename T, typename... Args>
auto add(T n1,Args... args){
    return n1+add(args...);
}

int main()
{
    add(10,20);
    add(10,20,30);
    return 0;
}
