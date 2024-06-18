#include <iostream>
#include <string>


using namespace std;

class Phone {
private:
    string brand;
    string model;
    double price;

public:
    // Constructor
    Phone(string b, string m, double p) : brand(b), model(m), price(p) {}

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};


