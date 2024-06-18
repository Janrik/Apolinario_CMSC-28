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
