// JOHNRIC A. APOLINARIO | BSCS 1 | CMSC 28 | MAY 29, 2024
// Header file for the Parent Class (Person)

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;           // These are the private attributes of the class
    string lastName;
    char gender;
  
public:
    string emailAdd;            
    string cpNumber;

    // This part of the code is where the constructor is defined
    Person(const string& firstName, const string& lastName, char gender, const string& emailAdd, const string& cpNumber)
        : firstName(firstName), lastName(lastName), gender(gender), emailAdd(emailAdd), cpNumber(cpNumber) {}

    // This part of the code is where the default constructor is defined
    Person() : firstName(""), lastName(""), gender('\0'), emailAdd(""), cpNumber("") {}

    // This part of the code is where the getter methods are defined
    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    char getGender() const {
        return gender;
    }

    string getEmailAdd() const {
        return emailAdd;
    }

    string getCpNumber() const {
        return cpNumber;
    }

    // This part of the code is where the setter methods are defined
    void setFirstName(const string& firstName) {
        this->firstName = firstName;
    }

    void setLastName(const string& lastName) {
        this->lastName = lastName;
    }

    void setGender(char gender) {
        this->gender = gender;
    }

    void setEmailAdd(const string& emailAdd) {
        this->emailAdd = emailAdd;
    }

    void setCpNumber(const string& cpNumber) {
        this->cpNumber = cpNumber;
    }
};

#endif
