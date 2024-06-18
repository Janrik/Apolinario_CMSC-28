// #include <vector> is used to store a list of Movie and Person objects
#include <vector>
#include <iostream>
#include <string>

// This part of the code shows the header file for the Person and Movie class
#include "Person.h"
#include "Movie.h"

using namespace std;

int main() {
    // This part of the code shows the declaration of a variable named movies which is a vector of Movie objects
    vector<Movie> movies;

    cout << "\n\nThis program will allow you to enter details about movies and their directors and actors." << endl;
    cout << "Programmed by: Johnric Apolinario" << endl;
    
    // This part of the code shows the declaration of a variable named addAnotherMovie which is used to determine if the user wants to add another movie
    string addAnotherMovie = "y";

    // This part of the code shows the loop that allows the user to add multiple movies
    while (addAnotherMovie == "y" || addAnotherMovie == "Y") {
        Movie movie;
        string input;

        // Get movie title
        cout << "\nEnter Movie Title: ";
        getline(cin, input);
        movie.setTitle(input);

        // Get movie synopsis
        cout << "Enter Synopsis: ";
        getline(cin, input);
        movie.setSynopsis(input);

        // Get MPAA rating
        cout << "What is its MPAA Rating: ";
        getline(cin, input);
        movie.setMPAARating(input);

        // This part of the code shows the loop that allows the user to add multiple genres
        do {
            cout << "Enter Genre: ";
            getline(cin, input);
            movie.addGenre(input);

            cout << "\nDo you want to add another Genre? (y/n): ";
            cin >> input;
            cin.ignore(); // Ignore newline character
        } while (input == "y" || input == "Y");

        // This part of the code shows the loop that allows the user to add multiple directors
        do {
            string firstName, lastName, gender;
            cout << "\nEnter Director's First Name: ";
            getline(cin, firstName);
            cout << "Enter Director's Last Name: ";
            getline(cin, lastName);
            cout << "Enter Director's Gender: ";
            getline(cin, gender);

            // This part of the code creates a Person object named director with the attributes firstName, lastName
            Person director(firstName, lastName, gender);
            movie.addDirector(director);

            cout << "\nDo you want to add another Director? (y/n): ";
            cin >> input;
            cin.ignore(); 
        } while (input == "y" || input == "Y");

        // This part of the code shows the loop that allows the user to add multiple actors
        do {
            string firstName, lastName, gender;
            cout << "\nEnter Actor's First Name: ";
            getline(cin, firstName);
            cout << "Enter Actor's Last Name: ";
            getline(cin, lastName);
            cout << "Enter Actor's Gender: ";
            getline(cin, gender);

            // This part of the code creates a Person object named actor with the attributes firstName, lastName
            Person actor(firstName, lastName, gender);
            movie.addActor(actor);

            cout << "\nDo you want to add another Actor/Actress? (y/n): ";
            cin >> input;
            cin.ignore(); // Ignore newline character
        } while (input == "y" || input == "Y");

        // This part of the code adds the movie object to the movies vector
        movies.push_back(movie);

        cout << "\n\nDo you want to add another Movie? (y/n): ";
        cin >> addAnotherMovie;
        cin.ignore(); 
    }

    // This part of the code shows the display of the movie details
    cout << "\n\nMOVIE DETAILS\n" << endl;
    for (size_t i = 0; i < movies.size(); ++i) {
        cout << "Movie #" << i + 1 << endl;
        movies[i].display();
        cout << endl;
    }

    return 0;
}
