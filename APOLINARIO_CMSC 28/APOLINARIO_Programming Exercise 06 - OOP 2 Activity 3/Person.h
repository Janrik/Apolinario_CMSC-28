// This part of the code shows the include guards of the Person.h header file which is used to prevent a header file from being included more than once in a single file

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string gender;

public:
    // This part of the code shows the constructor and setter and getter methods of the Person class
    // Constructors
    Person() : firstName(""), lastName(""), gender("") {}
    Person(const string& firstName, const string& lastName, const string& gender)
        : firstName(firstName), lastName(lastName), gender(gender) {}

    // Setter methods
    void setFirstName(const string& firstName) {
        this->firstName = firstName;
    }

    void setLastName(const string& lastName) {
        this->lastName = lastName;
    }

    void setGender(const string& gender) {
        this->gender = gender;
    }

    // Getter methods
    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    string getGender() const {
        return gender;
    }

    // This part of the code shows the display method of the Person class
    void display() const {
        cout << firstName << " " << lastName << ", Gender: " << gender << endl;
    }
};

#endif // This is the end of the Person.h header file
