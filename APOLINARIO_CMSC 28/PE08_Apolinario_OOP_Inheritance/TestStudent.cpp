#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    cout << "\n\nSTUDENT RECORD\n";
    cout << "This program will record and display student information.\n";
    cout << "Programmed by: Johnric A. Apolinario\n\n";

    // This part of the code is where the object student is created
    Student student;

    cout << "Student #1\n";

    // This part of the code is where the user is asked to input the student information
    string firstName, lastName, email, studentNum, cpNumber, course, department, college;
    char gender;

    cout << "Student First Name: ";
    getline(cin, firstName);
    student.setFirstName(firstName);

    cout << "Student Last Name: ";
    getline(cin, lastName);
    student.setLastName(lastName);

    cout << "Student Gender (M/F): ";
    cin >> gender;
    cin.ignore();
    student.setGender(gender);

    cout << "Email: ";
    getline(cin, email);
    student.setEmailAdd(email);

    cout << "Contact Number: ";
    getline(cin, cpNumber);
    student.setCpNumber(cpNumber);

    cout << "Student Number: ";
    getline(cin, studentNum);
    student.setStudentNum(studentNum);

    cout << "Course: ";
    getline(cin, course);
    student.Course = course;

    cout << "Department: ";
    getline(cin, department);
    student.Department = department;

    cout << "College: ";
    getline(cin, college);
    student.College = college;



    cout << "\nYour Data has been successfully recorded in the Student Record System!\n\n";
    cout << "Greetings!\n\n";

    cout << "Hi, " << student.getFirstName() << " " << student.getLastName() << "! Welcome to UP Mindanao and congratulations!\n";
    cout << "We are pleased to inform you that you are admitted in the " << student.Course 
         << " program under the Department of " << student.Department << ", College of " << student.College << ".\n";
    cout << "Your Student number is " << student.getStudentNum() << ".\n\n";


    // This part of the code is where the student information is displayed
    cout << "Student Information:\n";
    cout << "- Name: " << student.getFirstName() << " " << student.getLastName() << "\n";
    cout << "- Gender: " << student.getGender() << "\n";
    cout << "- Email: " << student.getEmailAdd() << "\n";
    cout << "- Contact Number: " << student.getCpNumber() << "\n";
    cout << "- Student Number: " << student.getStudentNum() << "\n";
    cout << "- Course: " << student.Course << "\n";
    cout << "- Department: " << student.Department << "\n";
    cout << "- College: " << student.College << "\n";

    return 0;
}
