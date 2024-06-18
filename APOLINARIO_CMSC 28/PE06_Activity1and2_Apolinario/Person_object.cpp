#include <iostream>
#include <string>

// This part of the code shows the header file for the Person and Grades class
#include "Person_object.h"
#include "Grades_object.h"

using namespace std;

int main() {

    // This part of the code shows the declaration of the variables
    string name, gender, subject;
    int age, score;

    cout << "\nSTUDENT RECORD\n\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter your gender: ";
    cin >> gender;
    cin.ignore(); 
    
    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your score: ";
    cin >> score;
    cin.ignore(); 
     
    // This part of the code createes the person object and grades object with specific attributes
    Person person(name, age, gender);
    Grades grades(score, subject);
    
    // This part of the code shows the display and check functions of the Person and Grades class
    person.display_Person();
    grades.display_Grade();
    grades.check_Grade();

    return 0;
}