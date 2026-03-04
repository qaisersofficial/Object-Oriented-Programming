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
Lab Task 3: Bank Account Management
Objective:
A.	Implement a simple bank account class with basic functionalities.
B.	Understand how to structure real-world applications with proper file organisation.
Theory:
A bank account class can have private members for the account balance and
 account number. Functions can be implemented to deposit, withdraw, and check the balance.

 */