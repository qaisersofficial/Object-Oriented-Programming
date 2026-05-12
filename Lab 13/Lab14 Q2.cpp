#include <iostream>
#include <string>
using namespace std;

// Base Class: Ship
class Ship {
protected:
    string name;
    string yearBuilt;

public:
    // Constructor
    Ship(string n, string y) : name(n), yearBuilt(y) {}

    // Accessors and Mutators
    void setName(string n) { name = n; }
    string getName() const { return name; }

    void setYearBuilt(string y) { yearBuilt = y; }
    string getYearBuilt() const { return yearBuilt; }

    // Virtual Print Function
    virtual void print() const {
        cout << "Ship Name: " << name << ", Year Built: " << yearBuilt << endl;
    }

    // Virtual Destructor
    virtual ~Ship() {}
};

// Derived Class: CruiseShip
class CruiseShip : public Ship {
private:
    int maxPassengers;

public:
    // Constructor
    CruiseShip(string n, string y, int passengers) : Ship(n, y), maxPassengers(passengers) {}

    // Accessors and Mutators
    void setMaxPassengers(int passengers) { maxPassengers = passengers; }
    int getMaxPassengers() const { return maxPassengers; }

    // Overridden Print Function
    void print() const override {
        cout << "Cruise Ship Name: " << name << ", Maximum Passengers: " << maxPassengers << endl;
    }
};

// Derived Class: CargoShip
class CargoShip : public Ship {
private:
    int cargoCapacity; // in tonnage

public:
    // Constructor
    CargoShip(string n, string y, int capacity) : Ship(n, y), cargoCapacity(capacity) {}

    // Accessors and Mutators
    void setCargoCapacity(int capacity) { cargoCapacity = capacity; }
    int getCargoCapacity() const { return cargoCapacity; }

    // Overridden Print Function
    void print() const override {
        cout << "Cargo Ship Name: " << name << ", Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }
};

// Main Function
int main() {
    const int SIZE = 3; // Number of ships
    Ship* ships[SIZE]; // Array of Ship pointers

    // Dynamically allocate objects
    ships[0] = new Ship("Basic Ship", "1990");
    ships[1] = new CruiseShip("Ocean Explorer", "2005", 3000);
    ships[2] = new CargoShip("Heavy Lifter", "2010", 50000);

    // Print details of each ship
    cout << "Ship Details:\n";
    for (int i = 0; i < SIZE; ++i) {
        ships[i]->print();
    }

    // Free allocated memory
    for (int i = 0; i < SIZE; ++i) {
        delete ships[i];
    }

    return 0;
}
