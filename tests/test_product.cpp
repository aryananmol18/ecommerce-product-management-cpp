# Unit Tests for Product

#include <iostream>
#include <cassert>
#include "product.h"  // Assuming there's a product header file to work with

void testProductCreation() {
    Product p("Test Product", 19.99);
    assert(p.getName() == "Test Product");
    assert(p.getPrice() == 19.99);
}

void testProductPriceUpdate() {
    Product p("Test Product", 19.99);
    p.setPrice(24.99);
    assert(p.getPrice() == 24.99);
}

int main() {
    testProductCreation();
    testProductPriceUpdate();
    std::cout << "All tests passed!\n";
    return 0;
}