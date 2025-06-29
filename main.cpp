#include <iostream>
#include "calculate.h"

int main() {
    int a {};
    int b {};
    char operation {};

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    if (operation == '+') std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    else if (operation == '-') std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
    else if (operation == '*') std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    else if (operation == '/') std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;
    else {
        std::cerr << "Error: Unknown operation!" << std::endl;
    }

    return 0;
}
