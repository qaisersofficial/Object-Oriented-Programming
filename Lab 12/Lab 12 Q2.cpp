#include <iostream>
using namespace std;

// Battery Class
class Battery {
public:
    int capacity; // in mAh
    string type;

    Battery(int c, string t) : capacity(c), type(t) {}
};

// MobilePhone Class
class MobilePhone {
private:
    Battery battery; // Composition: Battery is part of MobilePhone

public:
    string brand;
    string model;

    MobilePhone(string b, string m, int capacity, string type)
        : brand(b), model(m), battery(capacity, type) {}

    void display() {
        cout << "Mobile Phone: " << brand << " " << model << endl;
        cout << "Battery: " << battery.capacity << "mAh, " << battery.type << endl;
    }
};

int main() {
    MobilePhone phone("Samsung", "Galaxy S21", 4000, "Li-ion");

    phone.display();
    return 0;
}
