#include "Manager.h"

Manager::Manager(std::string ManagerMsg)
:_ManagerMsg(ManagerMsg)
{
}
std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os << "_ManagerMsg: " << rhs._ManagerMsg;
    return os;
}
