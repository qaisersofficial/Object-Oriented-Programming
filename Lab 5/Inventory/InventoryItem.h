// InventoryItem.h
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

class InventoryItem {
private:
    int itemID;
    int quantity;
    double price;

public:
    InventoryItem(int id, int qty, double pr);
    void updateQuantity(int qty);
    void displayItem();
};

#endif
