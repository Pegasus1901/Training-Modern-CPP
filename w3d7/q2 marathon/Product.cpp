#include "Product.h"

Product::Product(std::string productId, ProductType type, float productPrice, std::string product_Brand, ProductOrigin origin)

:_productId(productId),_type(type),_productPrice(productPrice),_productBrand(product_Brand),_origin(origin) {
    _productTaxAmount = productPrice*0.05f;
}

std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _type: " << static_cast<int>(rhs._type)
       << " _productPrice: " << rhs._productPrice
       << " _productBrand: " << rhs._productBrand
       << " _origin: " << static_cast<int>(rhs._origin)
       << " _productTaxAmount: " << rhs._productTaxAmount
       << std::endl ;
    return os;
}
