#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructor
    Employee(string n = "", int num = 0, string date = "")
        : name(n), employeeNumber(num), hireDate(date) {}

    // Accessor functions
    string getName() { return name; }
    int getEmployeeNumber() { return employeeNumber; }
    string getHireDate() { return hireDate; }

    // Mutator functions
    void setName(string n) { name = n; }
    void setEmployeeNumber(int num) { employeeNumber = num; }
    void setHireDate(string date) { hireDate = date; }
};

// Derived class: ShiftSupervisor
class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Constructor
    ShiftSupervisor(string n = "", int num = 0, string date = "", double salary = 0.0, double bonus = 0.0)
        : Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {}

    // Accessor functions
    double getAnnualSalary() { return annualSalary; }
    double getAnnualBonus() { return annualBonus; }

    // Mutator functions
    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualBonus(double bonus) { annualBonus = bonus; }

    // Display function
    void display() {
        cout << "Employee Name: " << getName() << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Hire Date: " << getHireDate() << endl;
        cout << "Annual Salary: $" << annualSalary << endl;
        cout << "Annual Bonus: $" << annualBonus << endl;
    }
};

// Main function
int main() {
    // Create a ShiftSupervisor object
    ShiftSupervisor supervisor("Ali", 1234, "01/01/2020", 75000.00, 5000.00);

    // Display supervisor's details
    cout << "Shift Supervisor Details:" << endl;
    supervisor.display();

    // Modify supervisor's details
    supervisor.setName("Ahmed");
    supervisor.setEmployeeNumber(5678);
    supervisor.setHireDate("02/02/2021");
    supervisor.setAnnualSalary(80000.00);
    supervisor.setAnnualBonus(6000.00);

    // Display updated details
    cout << "\nUpdated Shift Supervisor Details:" << endl;
    supervisor.display();

    return 0;
}
