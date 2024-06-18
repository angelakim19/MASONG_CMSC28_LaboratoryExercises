#ifndef MOVIE_H
#define MOVIE_H

#include "Person_Masong.h"  // Include the header for the Person class definition
#include <string>
using namespace std;

// Declaration of the Movie class
class Movie {
private:
    string title;       // Variable to store the movie title
    string synopsis;    // Variable to store the movie synopsis
    string mpaaRating;  // Variable to store the movie's MPAA rating
    string genre;       // Variable to store the movie's genre
    Person director;    // Person object to store the director of the movie
    Person mainActor;   // Person object to store the main actor of the movie

public: 
    // Constructor with default parameters for easy instantiation
    Movie(string t = "", string s = "", string r = "", string g = "", const Person& d = Person(), const Person& m = Person())
        : title(t), synopsis(s), mpaaRating(r), genre(g), director(d), mainActor(m) {}

    // Setters which set values of class members
    void setMovieTitle(const string& t) {  // Set the movie's title
        title = t;  // Assign the input string to the title variable
    }

    void setMovieSynopsis(const string& s) {  // Set the movie's synopsis
        synopsis = s;  // Assign the input string to the synopsis variable
    }

    void setMovieMpaaRating(const string& r) {  // Set the movie's MPAA rating
        mpaaRating = r;  // Assign the input string to the mpaaRating variable
    }

    void setMovieGenre(const string& g) {  // Set the movie's genre
        genre = g;  // Assign the input string to the genre variable
    }

    void setMovieDirector(const Person& d) {  // Set the movie's director
        director = d;  // Assign the Person object to the director variable
    }

    void setMovieMainActor(const Person& m) {  // Set the movie's main actor
        mainActor = m;  // Assign the Person object to the mainActor variable
    }

    // Getters which retrieve values of class members
    string getMovieTitle() const {  // Returns the movie's title
        return title;  // Return the value of the title variable
    }

    string getMovieSynopsis() const {  // Returns the movie's synopsis
        return synopsis;  // Return the value of the synopsis variable
    }

    string getMovieMpaaRating() const {  // Returns the movie's MPAA rating
        return mpaaRating;  // Return the value of the mpaaRating variable
    }

    string getMovieGenre() const {  // Returns the movie's genre
        return genre;  // Return the value of the genre variable
    }

    string getMovieDirectorName() const {  // Returns the full name of the movie's director
        return director.getFullName();  // Return the full name of the director
    }

    string getMovieMainActorName() const {  // Returns the full name of the movie's main actor
        return mainActor.getFullName();  // Return the full name of the main actor
    }

};

#endif 