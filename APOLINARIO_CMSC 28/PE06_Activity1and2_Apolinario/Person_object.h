#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;

public:
    // Constructor
    Person(string n, int a, string g) : name(n), age(a), gender(g) {}

    void display_Person() {
        cout << "\n\nSTUDENT RECORD\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};


