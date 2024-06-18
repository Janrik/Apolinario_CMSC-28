// JOHNRIC A. APOLINARIO | BSCS 1 | CMSC 28 | MAY 29, 2024
// Header file for the Child Class (Employee) of the Person class

#ifndef EMPLOYEES_H
#define EMPLOYEES_H

// This part of the code is where the header of the parent class is included
#include "Person.h"


// This part of the code is where the class Employees is defined and inherited from the class Person
class Employees : public Person {
private:
    string empNum;

public:
    string Position;
    string Office;
    double Salary;

    // This oart of the code is where the constructor is defined
    Employees(const string& firstName, const string& lastName, char gender, 
              const string& empNum, const string& Position, const string& Office, 
              double Salary) : Person(firstName, lastName, gender, emailAdd, cpNumber), empNum(empNum), 
                                      Position(Position), Office(Office), Salary(Salary) {}

    // This part of the code is where the default constructor is defined
    Employees() : empNum(""), Position(""), Office(""), Salary(0.0) {}

    // This part of the code is where the getter and setter methods are defined
    void setEmpNum(const string& empNum) {
        this->empNum = empNum;
    }

    string getEmpNum() const {
        return empNum;
    }
};

#endif
