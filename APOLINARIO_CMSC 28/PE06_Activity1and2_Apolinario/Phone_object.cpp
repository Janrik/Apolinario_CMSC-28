#include <iostream>
#include <string>

// This part of the code shows the header file for the Phone class
#include "Phone_object.h"


using namespace std;

int main() {
    Phone myPhone("Apple", "iPhone 12", 999.99);

    myPhone.display();

    return 0;
}
