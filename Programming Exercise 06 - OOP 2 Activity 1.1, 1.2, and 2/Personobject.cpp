#include <iostream>  // For standard input and output
#include "Person.h"  // Include the header file for the Person class
#include "Name.h"    // Include the header file for the Name class
#include <string>    // For string manipulation

using namespace std;

int main() {
    int age;
    char gender;
    string firstName, lastName;

    // Display program information
    cout << "=========================================================================================================\n";
    cout << "                   THIS PROGRAM IS AN EXAMPLE OF OBJECT ORIENTED PROGRAMMING IN C++\n";
    cout << "=========================================================================================================\n";
    cout << "                               PROGRAMMED BY: ANGELA KIM RUCHINA MASONG\n";
    cout << "                                    CMSC 28 - COMPUTER PROGRAMMING 2\n";
    cout << "                                              MAY 17,2024\n\n";

    // Prompt user for input
    cout << "\nInput age: ";
    cin >> age;

    cout << "Input gender: ";
    cin >> gender;

    // Ignore any remaining characters in the input buffer
    cin.ignore();

    // Prompt user for first and last name
    cout << "Input first name: ";
    getline(cin, firstName);

    cout << "Input last name: ";
    getline(cin, lastName);

    // Create Person and Name objects with user-provided data
    Person p(age, gender);
    Name n(firstName, lastName);

    // Display information about the created objects
    cout << "\nAge = " << p.getAge() << endl;
    cout << "Gender = " << p.getGender() << endl;
    cout << "First Name = " << n.getFirstName() << endl;
    cout << "Last Name = " << n.getLastName() << endl;
    cout << "Full Name = " << n.getFullName() << endl;

    // Determine and display the generation based on the person's age
    cout << "Generation: " << p.getGeneration() << endl;

    return 0;
}
