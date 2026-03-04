// main.cpp
#include "BankAccount.h"
#include <iostream>
using namespace std;

int main() {
    BankAccount account1(12345, 1000.0);

    account1.deposit(200.0);
    account1.withdraw(500.0);
    account1.display();

    cout << "Balance: $" << account1.getBalance() << endl;

    return 0;
}
/*
Lab Task 1: Create a class Circle that has private members for radius. 
Implement methods to set the radius, calculate the area, 
and display the radius and area. Split the program into Circle.h, Circle.cpp, and main.cpp.*/