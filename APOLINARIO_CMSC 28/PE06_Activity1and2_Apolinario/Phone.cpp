#include <iostream>
#include <string>


using namespace std;

// This part of the code shows the implementation of the Phone class
class Phone {

// This part of the code shows the private members of the Phone class
private:
    string brand;
    string model;
    double price;

// This part of the code shows the public members of the Phone class
public:
    Phone(string b, string m, double p) : brand(b), model(m), price(p) {}

    // This part of the code shows the display function of the Phone class
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};


int main() {
    // This part of the code shows the creation of a Phone object
    Phone myPhone("Apple", "iPhone 12", 999.99);

    myPhone.display();

    return 0;
}