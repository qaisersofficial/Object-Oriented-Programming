// main.cpp
#include "Calculator.h"
#include <iostream>
using namespace std;

int main()
{
    Calculator calc; // Creating an object of the Calculator class
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform and display calculations
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}

/*
Lab Task 2: Implementing a Basic Calculator
Objective:
A.	Learn to create a simple calculator class with basic operations.
B.	Practice separating class declaration and implementation.
Theory:
A calculator class can perform basic arithmetic operations
 (addition, subtraction, multiplication, division). By separating the interface (header) and implementation,
  the code becomes easier to manage and extend.

*/