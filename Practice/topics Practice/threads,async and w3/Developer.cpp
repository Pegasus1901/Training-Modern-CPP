#include "Developer.h"

Developer::Developer(std::string developerMsg)
:_developerMsg(developerMsg)
{
}
std::ostream &operator<<(std::ostream &os, const Developer &rhs) {
    os << "_developerMsg: " << rhs._developerMsg;
    return os;
}
