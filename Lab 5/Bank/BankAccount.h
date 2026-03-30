// BankAccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
    void display();
};

#endif
