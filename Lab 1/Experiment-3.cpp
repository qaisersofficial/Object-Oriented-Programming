// Create a structure called Employee that contains two members: an employee number (type int) and the employee’s compensation (in dollars; type float). 
// Ask the user to fill in this data for three employees, store it in three variables of type struct Employee, and then display the information for each employee. Use a separate display function for the information display.

#include <iostream>
using namespace std;
struct Employee {
    int empNumber;
    float compensation;
};

// This tells the compiler we have a function to display data.
void displayEmployee(Employee e);

int main() {
    // Declaring three separate variables of type 'Employee'
    Employee emp1, emp2, emp3;

    // initialize the member variables (via User Input)
    cout << "--- Enter Data for Employee 1 ---" << endl;
    cout << "Enter Employee Number: ";
    cin >> emp1.empNumber;
    cout << "Enter Compensation ($): ";
    cin >> emp1.compensation;

    cout << "\n--- Enter Data for Employee 2 ---" << endl;
    cout << "Enter Employee Number: ";
    cin >> emp2.empNumber;
    cout << "Enter Compensation ($): ";
    cin >> emp2.compensation;

    cout << "\n--- Enter Data for Employee 3 ---" << endl;
    cout << "Enter Employee Number: ";
    cin >> emp3.empNumber;
    cout << "Enter Compensation ($): ";
    cin >> emp3.compensation;

    // Displaying the results using a separate function
    cout << "\nDisplaying Employee Information:" << endl;
    cout << "---------------------------------" << endl;
    
    displayEmployee(emp1);
    displayEmployee(emp2);
    displayEmployee(emp3);

    return 0;
}

void displayEmployee(Employee e) {
    cout << "Employee #" << e.empNumber << " earns $" << e.compensation << " per month." << endl;
}


//-----
//with loop
//
//
//#include <iostream>
//
//using namespace std;
//
//// a) What is a structure?
//// A blueprint to group different data types (int and float) under one name.
//struct Employee {
//    int empNumber;
//    float compensation;
//};
//
///* b) How is memory allocated to a structure?
//   Each instance of 'Employee' gets its own unique block of memory 
//   to store its specific values.
//*/
//
//// Separate function for displaying data
//void displayEmployee(Employee e) {
//    // c) How to access member variables
//    cout << "Employee #" << e.empNumber << " | Compensation: $" << e.compensation << endl;
//}
//
//int main() {
//    Employee tempEmp;
//    char choice;
//
//    // We use a loop to allow multiple entries without crashing
//    do {
//        // d) How to initialize member variables via input
//        cout << "\nEnter Employee Number (Integer): ";
//        cin >> tempEmp.empNumber;
//
//        cout << "Enter Compensation (Float): ";
//        cin >> tempEmp.compensation;
//
//        cout << "\n--- Current Record ---" << endl;
//        displayEmployee(tempEmp);
//
//        // Asking the user if they wish to continue
//        cout << "\nDo you want to enter another record? (y/n): ";
//        cin >> choice;
//
//    } while (choice == 'y' || choice == 'Y'); 
//
//    cout << "Program exited gracefully." << endl;
//
//    return 0;
//}