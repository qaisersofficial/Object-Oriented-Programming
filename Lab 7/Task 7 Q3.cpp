#include<iostream>
using namespace std;

class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    // Default constructor
    ComplexNumber() {
        realPart = 0;
        imaginaryPart = 0;
    }

    // Parameterized constructor
    ComplexNumber(double real, double imaginary) {
        realPart = real;
        imaginaryPart = imaginary;
    }

    // Friend functions to perform operations
    friend ComplexNumber add(const ComplexNumber &c1, const ComplexNumber &c2);
    friend ComplexNumber sub(const ComplexNumber &c1, const ComplexNumber &c2);
    friend ComplexNumber mul(const ComplexNumber &c1, const ComplexNumber &c2);
    friend void print(const ComplexNumber &c);
};

// Friend function to add two complex numbers
ComplexNumber add(const ComplexNumber &c1, const ComplexNumber &c2) {
    return ComplexNumber(c1.realPart + c2.realPart, c1.imaginaryPart + c2.imaginaryPart);
}

// Friend function to subtract two complex numbers
ComplexNumber sub(const ComplexNumber &c1, const ComplexNumber &c2) {
    return ComplexNumber(c1.realPart - c2.realPart, c1.imaginaryPart - c2.imaginaryPart);
}

// Friend function to multiply two complex numbers
ComplexNumber mul(const ComplexNumber &c1, const ComplexNumber &c2) {
    double real = c1.realPart * c2.realPart - c1.imaginaryPart * c2.imaginaryPart;
    double imaginary = c1.realPart * c2.imaginaryPart + c1.imaginaryPart * c2.realPart;
    return ComplexNumber(real, imaginary);
}

// Friend function to print complex number
void print(const ComplexNumber &c) {
    cout << c.realPart << " + " << c.imaginaryPart << "j" << endl;
}

int main() {
    // Creating two complex number objects
    ComplexNumber c1(3, 4);  // 3 + 4j
    ComplexNumber c2(1, 2);  // 1 + 2j

    // Perform addition, subtraction, and multiplication
    ComplexNumber resultAdd = add(c1, c2);
    ComplexNumber resultSub = sub(c1, c2);
    ComplexNumber resultMul = mul(c1, c2);

    // Print the results
    cout << "Addition result: ";
    print(resultAdd);  // 4 + 6j

    cout << "Subtraction result: ";
    print(resultSub);  // 2 + 2j

    cout << "Multiplication result: ";
    print(resultMul);  // -5 + 10j

    return 0;
}