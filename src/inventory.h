#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {
public:
    Inventory(); // Constructor
    void addProduct(int productId, int quantity);
    void removeProduct(int productId, int quantity);
    int getQuantity(int productId);
};

#endif // INVENTORY_H
