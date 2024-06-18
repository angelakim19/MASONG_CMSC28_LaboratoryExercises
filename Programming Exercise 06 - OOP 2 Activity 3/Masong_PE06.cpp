#include <iostream>
#include "Movie_Masong.h"
#include"Person_Masong.h"

using namespace std;

int main() {
    Movie myMovie;
    Person director, mainActor;
    string tempStr, firstName, lastName;

    cout << "=========================================================================================================\n";
    cout << "                      PROGRAMMING EXERCISE 6 || CMSC 28 - COMPUTER PROGRAMMING II\n";
    cout << "                                 Programmed by: Angela Kim Ruchina Masong\n";
    cout << "=========================================================================================================\n";
    cout << "       THIS PROGRAM WILL DISPLAY COMPREHENSIVE INFORMATION ABOUT MOVIES, HIGHLIGHTING KEY ASPECTS \n"; 
    cout << "        OF THEIR PRODUCTION AND CAST, ENABLING A DEEPER APPRECIATION AND UNDERSTANDING OF CINEMA\n\n";

    // Input for the movie details
    cout << "Enter Movie Title: ";
    getline(cin, tempStr);
    myMovie.setMovieTitle(tempStr); // Setting the movie title

    cout << "Enter Synopsis: ";
    getline(cin, tempStr);
    myMovie.setMovieSynopsis(tempStr); // Setting the synopsis

    cout << "What is its MPAA Rating: ";
    getline(cin, tempStr);
    myMovie.setMovieMpaaRating(tempStr); // Setting the MPAA rating

    cout << "What is the Genre: ";
    getline(cin, tempStr);
    myMovie.setMovieGenre(tempStr); // Setting the genre

    // Input for the director's details
    cout << "Who is the Director (first and last name): ";
    cin >> firstName >> lastName;
    cin.ignore();  
    director.setFirstName(firstName);
    director.setLastName(lastName);
    myMovie.setMovieDirector(director); 

    // Input for the main actor's details
    cout << "Who is the main Actor/actress (first and last name): ";
    cin >> firstName >> lastName;
    cin.ignore();  
    mainActor.setFirstName(firstName);
    mainActor.setLastName(lastName);
    myMovie.setMovieMainActor(mainActor); 

    // Displaying the details of the movie
    cout << "\n=========================================================================================================\n";
    cout << "\nMOVIE DETAILS:\n";
    cout << "Movie Title: " << myMovie.getMovieTitle() << "\n";
    cout << "Synopsis: " << myMovie.getMovieSynopsis() << "\n";
    cout << "MPAA Rating: " << myMovie.getMovieMpaaRating() << "\n";
    cout << "Genre: " << myMovie.getMovieGenre() << "\n";
    cout << "Director: " << myMovie.getMovieDirectorName() << "\n";
    cout << "Actor: " << myMovie.getMovieMainActorName() << "\n";

    return 0;
}
