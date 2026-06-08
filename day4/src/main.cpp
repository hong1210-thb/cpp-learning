#include <iostream>
#include <string>
#include "math/add.h"
#include "string/reverse.h"

int main() {
    int a = 7, b = 5;
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;

    std::string original = "hello cmake";
    std::cout << "reverse(\"" << original << "\") = \""
              << reverse(original) << "\"" << std::endl;

    return 0;
}