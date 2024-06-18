#include <iostream>
#include <string>

// Function to display program description
void progdescription() {
    std::cout << "\n";
    std::cout << "This program converts a decimal number to its binary equivalent.\n"
              << "Programmer: Johnric A. Apolinario\n"
              << "Date: April 27, 2024\n"
              << "Subject: CMSC 28\n";
}

// Function to read user input
int readdata() {
    int num;
    std::cout << "\n";
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

// Function to convert decimal to binary
std::string decToBinary(int num) {
    std::string binary;
    while (num > 0) {
        binary = std::to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

// Function to display converted binary number
void showdata(int num, const std::string& binary) {
    std::cout << "Decimal: " << num << std::endl;
    std::cout << "Binary: " << binary << std::endl;
}

int main() {
    int num;                                                                // Declare variables
    std::string binary;                                                     // Declare string variable for binary number
    char choice;                                                            // Loop to continue the program

    progdescription();

    do {
        num = readdata();                                                   // Read user input
        binary = decToBinary(num);                                          // Convert decimal to binary
        showdata(num, binary);                                              // Display converted binary number

        std::cout << "\n";
        std::cout << "Do you want to convert another number? (Y/N): ";      // Ask user if they want to convert another number
        std::cin >> choice;                                                 // Read user input
    } while (choice == 'Y' || choice == 'y');                               // Continue the program if user input is 'Y' or 'y'

    return 0;
}