// This part of the code shows the include guards of the Movie.h header file which is used to prevent a header file from being included more than once in a single file
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"

using namespace std;

class Movie {
private:
    string title;
    string synopsis;
    string mpaaRating;

    // This part of the code shows the vector of genres, directors, and actors
    vector<string> genres;
    vector<Person> directors;
    vector<Person> actors;

public:
    // Constructors
    Movie() : title(""), synopsis(""), mpaaRating("") {}

    // Setter methods
    void setTitle(const string& title) {
        this->title = title;
    }

    void setSynopsis(const string& synopsis) {
        this->synopsis = synopsis;
    }

    void setMPAARating(const string& mpaaRating) {
        this->mpaaRating = mpaaRating;
    }

    void addGenre(const string& genre) {
        genres.push_back(genre);
    }

    void addDirector(const Person& director) {
        directors.push_back(director);
    }

    void addActor(const Person& actor) {
        actors.push_back(actor);
    }

    // This part of the code shows the display method of the Movie class
    void display() const {
        cout << "Movie Title: " << title << endl;
        cout << "Synopsis: " << synopsis << endl;
        cout << "MPAA Rating: " << mpaaRating << endl;
        cout << "Genres:" << endl;

        // This part of the code shows the loop that displays the genres
        for (size_t i = 0; i < genres.size(); ++i) {
            cout << "  " << i + 1 << ". " << genres[i] << endl;
        }

        // This part of the code shows the loop that displays the directors and actors
        cout << "Directors:" << endl;
        for (size_t i = 0; i < directors.size(); ++i) {
            cout << "  " << i + 1 << ". ";
            directors[i].display();
        }

        // This part of the code shows the loop that displays the actors
        cout << "Actors:" << endl;
        for (size_t i = 0; i < actors.size(); ++i) {
            cout << "  " << i + 1 << ". ";
            actors[i].display();
        }
    }
};

#endif
