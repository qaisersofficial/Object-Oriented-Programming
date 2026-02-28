// Design an Inventory class that can hold information and calculate data for items in a retail store’s inventory. 
#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;       // Item's item number
    int quantity;         // Quantity of items on hand
    double cost;          // Wholesale per-unit cost of the item
    double totalCost;     // Total inventory cost (quantity * cost)

    // Private function to calculate total cost
    void setTotalCost() {
        totalCost = quantity * cost;
    }

public:
    // Default constructor that sets all member variables to 0
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    // Constructor that accepts itemNumber, cost, and quantity as arguments
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        itemNumber = itemNum;
        cost = itemCost;
        quantity = itemQuantity;
        setTotalCost();  // Calculate total cost based on provided values
    }

    // Setter for itemNumber
    void setItemNumber(int itemNum) {
        itemNumber = itemNum;
    }

    // Setter for quantity
    void setQuantity(int itemQuantity) {
        quantity = itemQuantity;
        setTotalCost();  // Update total cost when quantity changes
    }

    // Setter for cost
    void setCost(double itemCost) {
        cost = itemCost;
        setTotalCost();  // Update total cost when cost changes
    }

    // Getter for itemNumber
    int getItemNumber() const {
        return itemNumber;
    }

    // Getter for quantity
    int getQuantity() const {
        return quantity;
    }

    // Getter for cost
    double getCost() const {
        return cost;
    }

    // Getter for totalCost
    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    // Creating an Inventory object using the default constructor
    Inventory item1;

    // Display initial values (all 0)
    cout << "Item 1 - Item Number: " << item1.getItemNumber() << ", Quantity: " << item1.getQuantity()
         << ", Cost: " << item1.getCost() << ", Total Cost: " << item1.getTotalCost() << endl;

    // Setting values for item1
    item1.setItemNumber(123);
    item1.setQuantity(10);
    item1.setCost(5.50);

    // Display updated values
    cout << "Item 1 - Item Number: " << item1.getItemNumber() << ", Quantity: " << item1.getQuantity()
         << ", Cost: " << item1.getCost() << ", Total Cost: " << item1.getTotalCost() << endl;

    // Creating another Inventory object using the parameterized constructor
    Inventory item2(456, 12.75, 20);

    // Display values for item2
    cout << "Item 2 - Item Number: " << item2.getItemNumber() << ", Quantity: " << item2.getQuantity()
         << ", Cost: " << item2.getCost() << ", Total Cost: " << item2.getTotalCost() << endl;

    return 0;
}
