// Calculator.cpp
#include "Calculator.h"

// Function to add two numbers
double Calculator::add(double a, double b) {
    return a + b;
}

// Function to subtract one number from another
double Calculator::subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double Calculator::multiply(double a, double b) {
    return a * b;
}

// Function to divide one number by another
double Calculator::divide(double a, double b) {
    if (b != 0)
        return a / b;
    else
        return 0;  // Return 0 if dividing by zero
}
