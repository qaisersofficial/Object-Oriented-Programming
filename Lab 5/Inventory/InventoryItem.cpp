// InventoryItem.cpp
#include "InventoryItem.h"
#include <iostream>
using namespace std;

// Constructor
InventoryItem::InventoryItem(int id, int qty, double pr) {
    itemID = id;
    quantity = qty;
    price = pr;
}

// Update the quantity
void InventoryItem::updateQuantity(int qty) {
    quantity = qty;
}

// Display item details
void InventoryItem::displayItem() {
    cout << "Item ID: " << itemID << ", Quantity: " << quantity << ", Price: $" << price << endl;
}
