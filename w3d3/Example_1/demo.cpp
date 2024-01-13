#include "Employee.h"
#include "Buisnessman.h"
#include <variant>
#include <memory>

int main()
{
    std::variant<Employee, Buisnessman> var1;

    var1 = Employee();
    /*
        visit needs at least two parameters

        1 :- Lambda function that explains what to do with item inside the variant
        2 (and subsequent parameters) :- objects of variant class. (objects on which visit lambda has to be applied)
    */

    std::visit(
        [](auto &&val)
        { val.PayTax(); },
        var1);

    // variant can store only one type of parameter at a time
    var1 = Buisnessman();

    std::visit(
        [](auto &&val)
        { val.PayTax(); },
        var1);

    std::shared_ptr<Employee> e1 = std::make_shared<Employee>();

    std::variant<std::shared_ptr<Employee>, std::shared_ptr<Buisnessman>> var2;

    var2 = e1; // storing e1 inside the variant. This should be stored in slot one.

    std::visit([](auto &&val)
               { val->PayTax(); },
               var2);
}