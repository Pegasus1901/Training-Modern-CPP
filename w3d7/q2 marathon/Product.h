#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include"ProductType.h"
#include"ProductOrigin.h"

class Product
{
private:
    std::string _productId;
    ProductType _type;
    float _productPrice;
    std::string _productBrand;
    ProductOrigin _origin;
    float _productTaxAmount{_productPrice*0.05f};

public:

    Product()=default;
    Product(std::string productId , ProductType type,float productPrice,std::string product_Brand,ProductOrigin origin);

    Product(const Product&) = delete;
    Product& operator=(const Product&) = delete;

    Product(Product&&) = delete;
    Product& operator=(Product&&) = delete;
    ~Product()=default;

    std::string productId() const { return _productId; }

    ProductType type() const { return _type; }

    float productPrice() const { return _productPrice; }

   ///  std::string productBrand() const { return _productBrand; }

    ProductOrigin origin() const { return _origin; }

    float productTaxAmount() const { return _productTaxAmount; }

    std::string productBrand() const { return _productBrand; }


    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
};

#endif // PRODUCT_H
