#include<iostream>
using namespace std;

class Travel {
private:
    int kilometer, hour;

public:
    // Default constructor
    Travel() {
        kilometer = 0;
        hour = 0;
    }

    // Member function to input data
    void input() {
        cout << "Enter kilometers: ";
        cin >> kilometer;
        cout << "Enter hours: ";
        cin >> hour;
    }

    // Member function to display the values
    void show() {
        cout << "Kilometers: " << kilometer << ", Hours: " << hour << endl;
    }

    // Friend function to add the data of two objects
    friend void add(Travel &t1, Travel &t2);
};

// Friend function definition
void add(Travel &t1, Travel &t2) {
    t1.kilometer += t2.kilometer;  // Add t2's kilometer to t1's kilometer
    t1.hour += t2.hour;            // Add t2's hour to t1's hour
}

int main() {
    Travel t1, t2;

    // Input data for both objects
    cout << "Input data for Travel t1:" << endl;
    t1.input();
    cout << "Input data for Travel t2:" << endl;
    t2.input();

    // Display the values before adding
    cout << "\nBefore adding:" << endl;
    cout << "t1: ";
    t1.show();
    cout << "t2: ";
    t2.show();

    // Call the friend function to add t2 data to t1
    add(t1, t2);

    // Display the values after adding
    cout << "\nAfter adding t2 to t1:" << endl;
    t1.show();

    return 0;
}