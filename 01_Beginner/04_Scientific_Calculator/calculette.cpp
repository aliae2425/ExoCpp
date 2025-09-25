#include <iostream>
#include "src/Operand.hpp"

int main()
{
    int a = 10;
    int b = 5;

    std::cout << "Addition: " << Add(a, b) << std::endl;
    std::cout << "Subtraction: " << Subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << Multiply(a, b) << std::endl;
    std::cout << "Division: " << Divide(a, b) << std::endl;

    double value = 100.0;
    double base = 10.0;
    std::cout << "Logarithm of " << value << " with base " << base << ": " 
              << logarithm(value, base) << std::endl;

    double angle = 45.0; // in degrees
    std::cout << "Cosine of " << angle << ": " << cosine(angle) << std::endl;
    std::cout << "Sine of " << angle << ": " << sine(angle) << std::endl;
    std::cout << "Tangent of " << angle << ": " << tangent(angle) << std::endl;

    return 0;

}