// BankAccount.cpp
#include "BankAccount.h"
#include <iostream>
using namespace std;

// Constructor
BankAccount::BankAccount(int accNum, double initialBalance) {
    accountNumber = accNum;
    balance = initialBalance;
}

// Deposit money
void BankAccount::deposit(double amount) {
    balance += amount;
}

// Withdraw money
void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

// Get balance
double BankAccount::getBalance() {
    return balance;
}

// Display account details
void BankAccount::display() {
    cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
}
