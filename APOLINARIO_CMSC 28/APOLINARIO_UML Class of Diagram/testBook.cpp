// JOHNRIC A. APOLINARIO | May 11, 2024 
// A simple C++ program that demonstrates how to create a UML class diagram using a C++ class.

#include <iostream>
#include <string>

using namespace std;

// This part of the code defines the Book class
class Book {

// This part of the code defines the private attributes of the Book class
private:
    string title;
    string author;
    string isbn;
    string publisher;

// This part of the code defines the public methods of the Book class
public:

    // This part of the code defines the constructor of the Book class
    Book(string title, string author, string isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }

    // This part of the code defines the getter methods of the Book class
    string getTitle() {return title;}
    string getAuthor() {return author;}
    string getISBN() {return isbn;}
    string getPublisher() {return publisher;}

    // This part of the code defines the setter methods of the Book class
    void setTitle(string bktitle) {title = bktitle;}
    void setAuthor(string bkauthor) {author = bkauthor;}
    void setISBN(string bkisbn) {isbn = bkisbn;}
    void setPublisher(string bkpublisher) {publisher = bkpublisher;}
};

int main() {
    char continueInput;

    do {
        cout << "\n";

        // This part of the code declares variables to store the book details
        string title, author, isbn, publisher;

        // This part of the code asks the user to input the book details
        cout << "Enter the title: ";
        getline(cin, title);

        cout << "Enter the author: ";
        getline(cin, author);

        cout << "Enter the ISBN: ";
        getline(cin, isbn);


        // This part of the code creates a Book object with the user's input
        Book book(title, author, isbn);

        // This part of the code prints the book records
        cout << "\nBOOK RECORDS:\n";
        cout << "Title: " << book.getTitle() << endl;
        cout << "Author: " << book.getAuthor() << endl;
        cout << "ISBN: " << book.getISBN() << endl;

        // This part of the code asks the user if they want to input another book record
        cout << "\n";
        cout << "Do you want to input another book record? (Y/N): ";
        cin >> continueInput;
        cin.ignore(); 

    } while (continueInput == 'Y' || continueInput == 'y');

    return 0;
}
