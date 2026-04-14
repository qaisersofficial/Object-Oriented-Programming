#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    // complex number is a number in the form z = (a + bi)
    // now what is z,a and bi bachy? z is a complex number      a = real number bi = imaginary number where b is the coefficient of imaginary part and i is the imaginary unit which is equal to sqrt(-1)
    double realPart;      // a is the real part of the complex number
    double imaginaryPart; // bi is the imaginary part of the complex number now you can understand it by thinking of it as a + bi where a is the real part and bi is the imaginary part of the complex number

public:
    // default constructor, you already knew it very deeply, it initializes the complex number to 0 + 0i
    ComplexNumber()
    {
        realPart = 0;
        imaginaryPart = 0;
    }

    // parameterized constructor, you also knew it, it initializes the complex number to the given real and imaginary parts e.g if you want to create a complex number 3 + 4i then you can use this constructor like ComplexNumber c(3, 4) where 3 is the real part and 4 is the coefficient of imaginary part and i is the imaginary unit which is equal to sqrt(-1)
    ComplexNumber(double real, double imaginary)
    {
        realPart = real;
        imaginaryPart = imaginary;
    }

    // now phase of friend function, friend function is a function that is not a member of the class but has access to the private members of the class, it is declared inside the class but defined outside the class, it is used to perform operations on the objects of the class without being a member of the class.
    friend ComplexNumber add(const ComplexNumber &c1, const ComplexNumber &c2); // it takes two complex number objects as parameters and returns a complex number object which is the result of addition of the two complex numbers
    friend ComplexNumber sub(const ComplexNumber &c1, const ComplexNumber &c2); // same but for subtraction
    friend ComplexNumber mul(const ComplexNumber &c1, const ComplexNumber &c2); // simpliar but for multiplication
    friend void print(const ComplexNumber &c);                                  // it takes a complex number object as parameter and prints the complex number in the form a + bi a is real and bi is imaginary part of the complex number, it is used to display the complex number in a readable format.
};

// friend function to add two complex numbers
ComplexNumber add(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return ComplexNumber(c1.realPart + c2.realPart, c1.imaginaryPart + c2.imaginaryPart);
}

// same for -
ComplexNumber sub(const ComplexNumber &c1, const ComplexNumber &c2)
{
    return ComplexNumber(c1.realPart - c2.realPart, c1.imaginaryPart - c2.imaginaryPart);
}

// same for *
ComplexNumber mul(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double real = c1.realPart * c2.realPart - c1.imaginaryPart * c2.imaginaryPart;
    double imaginary = c1.realPart * c2.imaginaryPart + c1.imaginaryPart * c2.realPart;
    return ComplexNumber(real, imaginary);
}

// friend function to print complex number
void print(const ComplexNumber &c)
{
    cout << c.realPart << " + " << c.imaginaryPart << "j" << endl;
}

int main()
{
    // here create two complex number objects
    ComplexNumber c1(10, 40); // 10 + 40j
    ComplexNumber c2(36, 21); // 36 + 21j

    // perform addition, subtraction, and multiplication on the complex numbers using the friend functions, it will call as add(c1, c2) for addition, sub(c1, c2) for subtraction and mul(c1, c2) for multiplication and it will return the result as a complex number object which we will store in resultAdd, resultSub and resultMul respectively
    ComplexNumber resultAdd = add(c1, c2);
    ComplexNumber resultSub = sub(c1, c2);
    ComplexNumber resultMul = mul(c1, c2);

    // calling print function as we call normal function to pring the results of +,-,*
    cout << "Addition result: ";
    print(resultAdd); // 46 + 61j

    cout << "Subtraction result: ";
    print(resultSub); // -26 + 19j

    cout << "Multiplication result: ";
    print(resultMul); // -1020 + 1410j

    // i hope you understand the code and the concept of complex numbers and friend functions, if you have any questions feel free to ask me, i will be happy to help you

    return 0;
}