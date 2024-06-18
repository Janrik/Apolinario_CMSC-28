#include <iostream>
#include "Employees.h"

using namespace std;

int main() {
    cout << "\n\nEMPLOYEE RECORD\n";
    cout << "This program will record and display employee information.\n";
    cout << "Programmed by: Johnric A. Apolinario\n\n";

    // This part of the code is where the object employee is created
    Employees employee;

    cout << "Employee #1\n";

    // This part of the code is where the user is asked to input the employee information
    string firstName, lastName, email, cpNumber, empNum, position, office;
    double salary;;
    char gender;


    cout << "Employee First Name: ";
    getline(cin, firstName);
    employee.setFirstName(firstName);

    cout << "Employee Last Name: ";
    getline(cin, lastName);
    employee.setLastName(lastName);

    cout << "Employee Gender (M/F): ";
    cin >> gender;
    cin.ignore();
    employee.setGender(gender);

    cout << "Email: ";
    getline(cin, email);
    employee.setEmailAdd(email);

    cout << "Contact Number: ";
    getline(cin, cpNumber);
    employee.setCpNumber(cpNumber);

    cout << "Employee Number: ";
    getline(cin, empNum);
    employee.setEmpNum(empNum);

    cout << "Position: ";
    getline(cin, position);
    employee.Position = position;

    cout << "Office/Unit: ";
    getline(cin, office);
    employee.Office = office;

    cout << "Salary: Php ";
    cin >> salary;
    employee.Salary = salary;

    cout << "\nYour Data has been successfully recorded in the Employee Record System!\n";
    cout << "\nGreetings!\n\n";

    cout << "Hi, " << employee.getFirstName() << " " << employee.getLastName() << "! Welcome to CMSC28 INCORPORATION and congratulations!\n";
    cout << "We are pleased to inform you that you have been appointed as " << employee.Position 
         << " in " << employee.Office << ". Below is the summary of your data:\n\n";

    // This part of the code is where the employee information is displayed
    cout << "Employee Information:\n";
    cout << "- Name: " << employee.getFirstName() << " " << employee.getLastName() << "\n";
    cout << "- Gender: " << employee.getGender() << "\n";
    cout << "- Email: " << employee.getEmailAdd() << "\n";
    cout << "- Contact Number: " << employee.getCpNumber() << "\n";
    cout << "- Employee Number: " << employee.getEmpNum() << "\n";
    cout << "- Position: " << employee.Position << "\n";
    cout << "- Office/Unit: " << employee.Office << "\n";
    cout << "- Salary: Php " << employee.Salary << "\n";

    return 0;
}
