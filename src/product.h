#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
private:
    int id;
    std::string name;
    double price;

public:
    Product(int id, const std::string &name, double price);
    int getId() const;
    std::string getName() const;
    double getPrice() const;
};

#endif // PRODUCT_H
