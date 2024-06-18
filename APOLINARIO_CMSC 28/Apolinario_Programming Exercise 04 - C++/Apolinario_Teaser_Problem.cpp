#include <iostream>
using namespace std;

// This function displays the program description which prints the program dexcription, programmer's name, the date, and the subject.
void Program_Description() {
    std::cout << "\n";
    cout << "This program finds the highest and lowest number among three input numbers and calculates their difference." << endl;
    cout << "Programmer: Johnric A. Apolinario" << endl;
    cout << "Date: April 27, 2024" << endl;
    cout << "Subject: CMSC 28" << endl;
}

// This function reads the three numbers from the user.
void Read_Data(int& x, int& y, int& z) {
    std::cout << "\n";
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;
    cout << "Enter Number 3: ";
    cin >> z;
}

// This function returns the largest number among the three numbers.
int get_Large_number(int x, int y, int z) {
    int largest = x;
    if (y > largest) {
        largest = y;
    }
    if (z > largest) {
        largest = z;
    }
    return largest;
}

// This function returns the smallest number among the three numbers.
int get_Small_number(int x, int y, int z) {
    int smallest = x;
    if (y < smallest) {
        smallest = y;
    }
    if (z < smallest) {
        smallest = z;
    }
    return smallest;
}

// This function displays the three numbers entered, the highest number, the lowest number, and the difference between the highest and lowest numbers.
void Show_Data(int x, int y, int z, int largest, int smallest) {
    std::cout << "\n";
    cout << "Numbers entered: " << x << ", " << y << ", " << z << endl;
    cout << "Highest number: " << largest << endl;
    cout << "Lowest number: " << smallest << endl;
   
}

int main() {
    int x, y, z;                                    // Declare variables
    char choice;                                    // Loop to continue the program

    do {
        Program_Description();                       // Display program description
        Read_Data(x, y, z);                          // Read the three numbers from the user
        int smallval = get_Small_number(x, y, z);    // Get the smallest number
        int largeval = get_Large_number(x, y, z);    // Get the largest number
        int difference = largeval - smallval;        // Calculate the difference between the largest and smallest numbers

        Show_Data(x, y, z, largeval, smallval);      // Display the three numbers entered, the highest number, and the lowest number.

        std::cout << "The difference between the largest and smallest numbers is: " << difference << "\n";  // Display the difference

        std::cout << "\n";
        cout << "Do you want to continue? (Y/N): ";  // Ask the user if they want to continue
        cin >> choice;                               // Read the user's choice
        std::cout << "\n";                           // Add a new line
    } while (choice == 'Y' || choice == 'y');        // Continue the program if the user enters 'Y' or 'y'
}