// main.cpp
#include "InventoryItem.h"
#include <iostream>
using namespace std;

int main() {
    InventoryItem item1(101, 50, 25.99);
    InventoryItem item2(102, 30, 15.49);

    cout << "Initial Inventory:" << endl;
    item1.displayItem();
    item2.displayItem();

    item1.updateQuantity(75);

    cout << "\nUpdated Inventory:" << endl;
    item1.displayItem();
    item2.displayItem();

    return 0;
}

/*  Create a class InventoryItem with private members for item ID, quantity, and price. 
Implement functions to update quantity and display item details. 
Organize the code into separate files for interface and implementation.
*/
