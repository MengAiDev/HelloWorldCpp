#include <iostream>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    if (num2 == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 1;
    }
    return num1 / num2;
}