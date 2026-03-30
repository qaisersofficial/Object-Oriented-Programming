#include <iostream>
using namespace std;

class Payroll {
private:
    double hourlyPayRate;
    int hoursWorked;
    double totalPay;

public:
    Payroll() : hourlyPayRate(0), hoursWorked(0), totalPay(0) {}

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(int hours) {
        if (hours > 60) {
            cout << "Error: Hours worked cannot exceed 60. Setting to 60." << endl;
            hoursWorked = 60;
        } else {
            hoursWorked = hours;
        }
    }

    // Friend function declaration
    friend void calculateTotalPay(Payroll &p);
    friend void displayTotalPay(const Payroll &p);
};

// Friend function to calculate total pay
void calculateTotalPay(Payroll &p) {
    p.totalPay = p.hourlyPayRate * p.hoursWorked;
}

// Friend function to display total pay
void displayTotalPay(const Payroll &p) {
    cout << "$" << p.totalPay << endl;
}

int main() {
    const int numEmployees = 7;
    Payroll employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        double rate;
        int hours;

        cout << "Enter hourly pay rate for employee " << (i + 1) << ": ";
        cin >> rate;
        employees[i].setHourlyPayRate(rate);

        cout << "Enter hours worked for employee " << (i + 1) << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);

        calculateTotalPay(employees[i]);
    }

    cout << "\nEmployee Gross Pay:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << (i + 1) << ": ";
        displayTotalPay(employees[i]);
    }

    return 0;
}