
#include"CommonHead.h"

class StateA
{
private:
    FnContainer functions;
    Data values{1,2,3};

public:
    StateA();
    void operator()();
    ~StateA()=default;
};