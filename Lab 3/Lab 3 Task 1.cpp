// Design a class called Date. The class should store a date in three integers: month, day, and year. There should be member functions to print the date in the following forms:
// 12/25/2014
// December 25, 2014
// 25 December 2014
// Demonstrate the class by writing a complete program implementing it.
// Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month greater than 12 or less than 1.

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
public:
    // Set date with validation
    void setDate(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
        validate();
    }

    // Validation function
    void validate() {
        if (day < 1 || day > 31) {
            cout << "Invalid value for day." << endl;
            exit(0);
        }
        if (month < 1 || month > 12) {
            cout << "Invalid value for month." << endl;
            exit(0);
        }
    }

    // Print date in numeric format
    void printNumeric() const {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Print date with month name first
    void printMonthFirst() const {
        string months[] = {"January", "February", "March", "April", "May", 
                           "June", "July", "August", "September",
                           "October", "November", "December"};
        cout << months[month - 1] << ' ' << day << ", " << year << endl;
    }

    // Print date with day first
    void printDayFirst() const {
        string months[] = {"January", "February", "March", "April", "May",
                           "June", "July", "August", "September",
                           "October", "November", "December"};
        cout << day << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    // Create a Date object
    Date date;
    date.setDate(12, 25, 2014);

    // Print the date in different formats
    date.printNumeric();
    date.printMonthFirst();
    date.printDayFirst();

    return 0;
}
