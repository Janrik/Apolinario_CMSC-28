//JOHNRIC A. APOLINARIO | 1 BSCS | May 22, 2024
// MAIN FILE

#include "ProductInventory.h"
#include <iostream>
#include <string>

int main() {
    // variable declarations
    string inputStr;    // This variable is named like this so that it can be used for other attributes that are of type string
    double inputDouble; // This variable is named like this so that it can be used for other attributes that are of type double
    int inputInt;       // This variable is named like this so that it can be used for other attributes that are of type int

    cout << "\n\nThis program will manage store inventory, focusing on clothing and electronics products.\n";
    cout << "Programmed by: Johnric A. Apolinario\n";
    cout << "Date: May 22, 2024\n";
    cout << "========================================================\n";
    cout << "STORE INVENTORY\n\n";

    // CLOTHING INVENTORY
    cout << "CLOTHING INVENTORY\nEnter the details for your product\n";
    
    // This part of the code shows the creation of instance of the Clothing class
    Clothing polo;


    cout << "Name: ";
    getline(cin, inputStr);  // This part of the code shows the use of the getline function to get the input from the user
    polo.setName(inputStr);  // This part of the code shows the use of the setName method of the Clothing class

    cout << "Brand: ";
    getline(cin, inputStr);
    polo.setBrand(inputStr);

    cout << "Price: ";
    cin >> inputDouble;
    polo.setPrice(inputDouble);

    cout << "Quantity: ";
    cin >> inputInt;
    polo.setQuantity(inputInt);
    cin.ignore();

    cout << "Description: ";
    getline(cin, inputStr);
    polo.setDescription(inputStr);

    cout << "Color: ";
    getline(cin, inputStr);
    polo.setColor(inputStr);

    cout << "Category: ";
    getline(cin, inputStr);
    polo.setCategory(inputStr);

    cout << "Size: ";
    getline(cin, inputStr);
    polo.setSize(inputStr);

    cout << "Material: ";
    getline(cin, inputStr);
    polo.setMaterial(inputStr);

    // ELECTRONICS INVENTORY
    cout << "\nELECTRONICS INVENTORY\nEnter the details for your product\n";

    // This part of the code shows the creation of instance of the Electronics class
    Electronics laptop;

    cout << "Name: ";
    getline(cin, inputStr);    // This part of the code shows the use of the getline function to get the input from the user
    laptop.setName(inputStr); // This part of the code shows the use of the setName method of the Electronics class

    cout << "Brand: ";
    getline(cin, inputStr);
    laptop.setBrand(inputStr);

    cout << "Price: ";
    cin >> inputDouble;
    laptop.setPrice(inputDouble);

    cout << "Quantity: ";
    cin >> inputInt;
    laptop.setQuantity(inputInt);
    cin.ignore();

    cout << "Description: ";
    getline(cin, inputStr);
    laptop.setDescription(inputStr);

    cout << "Color: ";
    getline(cin, inputStr);
    laptop.setColor(inputStr);

    cout << "Category: ";
    getline(cin, inputStr);
    laptop.setCategory(inputStr);

    cout << "Model: ";
    getline(cin, inputStr);
    laptop.setModel(inputStr);

    cout << "Warranty: ";
    getline(cin, inputStr);
    laptop.setWarranty(inputStr);

    cout << "Technical Specifications: ";
    getline(cin, inputStr);
    laptop.setTechnicalSpecifications(inputStr);

    // Displaying inventory details
    cout << "===================================================================\n";
    cout << "INVENTORY DETAILS\n\n";

    cout << "CLOTHING INVENTORY\n";
    polo.display();

    cout << "\nELECTRONICS INVENTORY\n";
    laptop.display();

    return 0;
}
