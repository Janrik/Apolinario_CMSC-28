#include <iostream>
#include <string>

using namespace std;

class Grades {
private:
    int score;
    string subject;

public:
    // Constructor
    Grades(int s, string sub) : score(s), subject(sub) {}

    void display_Grade() {
        cout << "Subject: " << subject << endl;
        cout << "Score: " << score << endl;
        
    }

     void check_Grade() {
        if (score > 75) {
            cout << "\nCONGRATULATIONS! You passed this course!" << endl;
        } else {
            cout << "SORRY! You failed this course. See you again next semester!" << endl;
        }
    }
};


