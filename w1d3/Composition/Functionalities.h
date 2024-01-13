#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Customer.h"
#include"DebitCard.h"

#include<memory>
#include<vector>
#include<list>

using Pointer = std::shared_ptr<Customer>;
using Container = std::vector<Pointer>;
// using lists= std::list<Pointer>;

//std::vector<std::shared_ptr<Customer>> = ......
void CreateObject(Container &data);


#endif // FUNCTIONALITIES_H
