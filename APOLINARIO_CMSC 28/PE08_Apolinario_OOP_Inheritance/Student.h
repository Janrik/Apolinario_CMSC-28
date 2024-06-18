// JOHNRIC A. APOLINARIO | BSCS 1 | CMSC 28 | MAY 29, 2024
// Header file for the Child Class (Student) of the Person class

#ifndef STUDENT_H
#define STUDENT_H

// This part of the code is where the header of the parent class is included
#include "Person.h"


// This part of the code is where the class Student is defined and inherited from the class Person
class Student : public Person {
private:
    string studentNum;

public:
    string Course;
    string Department;
    string College;

    // This part of the code is where the constructor is defined
    Student(const string& firstName, const string& lastName, char gender, 
            const string& studentNum, const string& Course, const string& Department, 
            const string& College) : Person(firstName, lastName, gender, emailAdd, cpNumber), studentNum(studentNum), 
                                     Course(Course), Department(Department), College(College) {}

    // This part of the code is where the default constructor is defined
    Student() : studentNum(""), Course(""), Department(""), College("") {}

    // This part of the code is where the getter and setter methods are defined
    void setStudentNum(const string& studentNum) {
        this->studentNum = studentNum;
    }

    string getStudentNum() const {
        return studentNum;
    }
};

#endif
