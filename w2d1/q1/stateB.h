#include"CommonHead.h"

class StateB
{
private:
    FnContainer functionCont;
    Data valuesCont{10,20,30};

public:
    StateB();
    void operator()();
    ~StateB()=default;
};