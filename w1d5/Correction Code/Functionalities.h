#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Customer.h"
#include"DebitCard.h"

#include<memory>
#include<vector>

using Pointer = std::shared_ptr<Customer>;
using Container = std::vector<Pointer>;

//std::vector<std::shared_ptr<Customer>> = ......
void CreateObject(Container& data)noexcept;

//to find avg age
float AverageAge(Container& data);

// return nth object from container
Pointer NthCustomer(Container& data, int n);

//find age of customer provided with id
int AgeOfGivenCustomer(Container& data, int id);

//return cvv number of given customer id
int CVVOfGivenID(const Container& data, int id);

//Return expiry date of given cvv number
std::string ExpiryDateOfCVV(const Container& data, int cv);

//return container of all pointers of age above 50
Container AgeAbove50(const Container& data);

//return debit card pointer for a given ID
std::shared_ptr<DebitCard> DebitCardPointerOfGivenId(const Container& data, int id);


#endif // FUNCTIONALITIES_H
