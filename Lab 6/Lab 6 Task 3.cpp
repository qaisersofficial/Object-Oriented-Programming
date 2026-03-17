// Create a class BankAccount with a static data member totalBalance
//  that keeps track of the balance of all accounts. 
// Each object should have a balance data member and functions to 
// deposit and withdraw. 
// Update the totalBalance whenever there’s a transaction
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    static double totalBalance;

public:
    BankAccount(double b) : balance(b) {
        totalBalance += b;
    }

    void deposit(double amount) {
        balance += amount;
        totalBalance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            totalBalance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    static double getTotalBalance() {
        return totalBalance;
    }
};

double BankAccount::totalBalance = 0;

int main() {
    BankAccount acc1(100);
    BankAccount acc2(200);

    acc1.deposit(50);
    acc2.withdraw(30);

    cout << "Total balance in all accounts: $" << BankAccount::getTotalBalance() << endl;
    return 0;
}
