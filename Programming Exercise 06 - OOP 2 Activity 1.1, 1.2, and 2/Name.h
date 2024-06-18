#ifndef NAME_H  // Header guard to prevent multiple inclusions
#define NAME_H

#include <string>  // Include necessary header for string manipulation

class Name {
private:
    std::string firstName;  // First name of the person
    std::string lastName;   // Last name of the person

public:
    // Constructor to initialize first name and last name
    Name(const std::string& newFirstName, const std::string& newLastName) 
        : firstName(newFirstName), lastName(newLastName) {}

    // Setter and Getter functions for first name
    void setFirstName(const std::string& newFirstName) {
        firstName = newFirstName;  // Set new first name
    }
    std::string getFirstName() const {
        return firstName;  // Return first name
    }

    // Setter and Getter functions for last name
    void setLastName(const std::string& newLastName) {
        lastName = newLastName;  // Set new last name
    }
    std::string getLastName() const {
        return lastName;  // Return last name
    }

    // Function to get full name by concatenating first and last names
    std::string getFullName() const {
        return firstName + " " + lastName;  // Return full name
    }
};

#endif  // End of header guard
