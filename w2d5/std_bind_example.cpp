// Here are some examples and use cases of std::bind() in C++:

//     Function Binding: std::bind() can be used to bind arguments to a function and create a new function object.

#include <iostream>
#include <functional>

void printSum(int a, int b) {
  std::cout << "Sum: " << a + b << std::endl;
}

int main() {
  auto boundPrintSum = std::bind(printSum, 10, std::placeholders::_1);
  boundPrintSum(5); // Output: Sum: 15
  return 0;
}

// In this example, std::bind() is used to bind the first argument of the printSum function to 10 and the second argument is left as a placeholder (std::placeholders::_1). The resulting function object boundPrintSum can be called with a single argument, which will be used as the second argument of printSum.

// Member Function Binding: std::bind() can also be used to bind member functions to objects.

#include <iostream>
#include <functional>

class MyClass {
public:
  void printMessage(const std::string& message) {
    std::cout << "Message: " << message << std::endl;
  }
};

int main() {
  MyClass obj;
  auto boundPrintMessage = std::bind(&MyClass::printMessage, &obj, std::placeholders::_1);
  boundPrintMessage("Hello"); // Output: Message: Hello
  return 0;
}

// In this example, std::bind() is used to bind the member function printMessage of the MyClass object obj. The &obj is passed as the first argument to std::bind() to specify the object on which the member function should be called.

// Partial Function Application: std::bind() can be used to create a new function object with some arguments pre-set.

#include <iostream>
#include <functional>

int add(int a, int b, int c) {
  return a + b + c;
}

int main() {
  auto add5 = std::bind(add, 5, std::placeholders::_1, std::placeholders::_2);
  std::cout << "Result: " << add5(10, 20) << std::endl; // Output: Result: 35
  return 0;
}

// In this example, std::bind() is used to create a new function object add5 based on the add function, with the first argument pre-set to 5. The remaining two arguments are left as placeholders (std::placeholders::_1 and std::placeholders::_2), which can be filled in when add5 is called.