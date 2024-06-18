#ifndef PERSON_H  // Header guard to prevent multiple inclusions
#define PERSON_H

#include <string>  // Include necessary header for string manipulation

class Person {
private:
    int age;               // Age of the person
    char gender;           // Gender of the person ('M' for male, 'F' for female, etc.)
    std::string generation;// Generation of the person based on their birth year

public:
    // Constructor to initialize age, gender, and determine generation
    Person(int newAge, char newGender) : age(newAge), gender(newGender) {
        determineGeneration(); // Call private function to determine generation
    }

    // Setter and Getter functions for age
    void setAge(int newAge) {
        age = newAge;             // Set new age
        determineGeneration();    // Determine new generation based on updated age
    }
    int getAge() const {
        return age;               // Return age
    }

    // Setter and Getter functions for gender
    void setGender(char newGender) {
        gender = newGender;    // Set new gender
    }
    char getGender() const {
        return gender;         // Return gender
    }

    // Getter function for generation
    std::string getGeneration() const {
        return generation;    // Return generation
    }

private:
    // Private function to determine the generation based on birth year
    void determineGeneration() {
        int currentYear = 2024;          // Current year (you can make this dynamic if needed)
        int birthYear = currentYear - age;  // Calculate birth year from age

        // Determine generation based on birth year
        if (birthYear >= 1901 && birthYear <= 1927) {
            generation = "Greatest Generation";
        } else if (birthYear >= 1928 && birthYear <= 1945) {
            generation = "Silent Generation";
        } else if (birthYear >= 1946 && birthYear <= 1964) {
            generation = "Baby Boomers";
        } else if (birthYear >= 1965 && birthYear <= 1980) {
            generation = "Generation X";
        } else if (birthYear >= 1981 && birthYear <= 1996) {
            generation = "Millennials";
        } else if (birthYear >= 1997 && birthYear <= 2010) {
            generation = "Generation Z";
        } else if (birthYear >= 2011 && birthYear <= 2024) {
            generation = "Generation Alpha";
        } else {
            generation = "Unknown Generation";  // Default for unknown birth years
        }
    }
};

#endif  // End of header guard
