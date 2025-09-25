#include "Operand.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

class Operand
{
    int Add(int a, int b)
    {
        return a + b;
    }

    int Subtract(int a, int b)
    {
        return a - b;
    }

    int Multiply(int a, int b)
    {
        return a * b;
    }

    double Divide(int a, int b)
    {
        if (b == 0)
        {
            std::cerr << "Error: Division by zero!" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        return static_cast<double>(a) / b;
    }

    double logarithm(double value, double base)
    {
        if (value <= 0 || base <= 1)
        {
            std::cerr << "Error: Invalid input for logarithm!" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        return std::log(value) / std::log(base);
    }

    double cosine(double angle)
    {
        return std::cos(angle);
    }

    double sine(double angle)
    {
        return std::sin(angle);
    }

    double tangent(double angle)
    {
        return std::tan(angle);
    }
};