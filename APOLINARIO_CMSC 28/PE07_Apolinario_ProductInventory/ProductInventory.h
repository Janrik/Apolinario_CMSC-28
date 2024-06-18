//JOHNRIC A. APOLINARIO | 1 BSCS | May 22, 2024
// HEADER FILE

#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H

#include <iostream>
#include <string>
using namespace std;

// Base class: Product
class Product {
private:
    string name;
    string brand;
    double price;
    int quantity;
    string description;
    string color;
    string category;

public:
    // Setter methods
    void setName(const string& n) { name = n; }
    void setBrand(const string& b) { brand = b; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }
    void setDescription(const string& d) { description = d; }
    void setColor(const string& c) { color = c; }
    void setCategory(const string& cat) { category = cat; }

    // Getter methods
    string getName() const { return name; }
    string getBrand() const { return brand; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    string getDescription() const { return description; }
    string getColor() const { return color; }
    string getCategory() const { return category; }

    // Display method
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Description: " << description << endl;
        cout << "Color: " << color << endl;
        cout << "Category: " << category << endl;
    }
};

// Derived class: Clothing
class Clothing : public Product {
private:
    string size;
    string material;

public:
    // Set methods
    void setSize(const string& s) { size = s; }
    void setMaterial(const string& m) { material = m; }

    // Get methods
    string getSize() const { return size; }
    string getMaterial() const { return material; }

    // Display method
    void display() const {
        Product::display();
        cout << "Size: " << size << endl;
        cout << "Material: " << material << endl;
    }
};

// Derived class: Electronics
class Electronics : public Product {
private:
    string model;
    string warranty;
    string technicalSpecifications;

public:
    // Setter methods
    void setModel(const string& m) { model = m; }
    void setWarranty(const string& w) { warranty = w; }
    void setTechnicalSpecifications(const string& ts) { technicalSpecifications = ts; }

    // Getter methods
    string getModel() const { return model; }
    string getWarranty() const { return warranty; }
    string getTechnicalSpecifications() const { return technicalSpecifications; }

    // Display method
    void display() const {
        Product::display();
        cout << "Model: " << model << endl;
        cout << "Warranty: " << warranty << endl;
        cout << "Technical Specifications: " << technicalSpecifications << endl;
    }
};

#endif // PRODUCTINVENTORY_H
