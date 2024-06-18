#ifndef PERSON_H  // Header guard to prevent multiple inclusions
#define PERSON_H

#include <string>  // Include necessary header for string manipulation

class Person {
private:
    std::string firstName;  // First name of the person
    std::string lastName;   // Last name of the person
    char gender;            // Gender of the person ('M' for male, 'F' for female, etc.)
    std::string emailAdd;   // Email address of the person
    std::string cpNumber;   // Contact phone number of the person

public:
    // Constructor to initialize first name, last name, gender, email address, and contact phone number
    Person(const std::string& newFirstName, const std::string& newLastName, char newGender, 
           const std::string& newEmailAdd, const std::string& newCpNumber) 
        : firstName(newFirstName), lastName(newLastName), gender(newGender),
          emailAdd(newEmailAdd), cpNumber(newCpNumber) {}

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

    // Setter and Getter functions for gender
    void setGender(char newGender) {
        gender = newGender;  // Set new gender
    }
    char getGender() const {
        return gender;  // Return gender
    }

    // Setter and Getter functions for email address
    void setEmailAdd(const std::string& newEmailAdd) {
        emailAdd = newEmailAdd;  // Set new email address
    }
    std::string getEmailAdd() const {
        return emailAdd;  // Return email address
    }

    // Setter and Getter functions for contact phone number
    void setCpNumber(const std::string& newCpNumber) {
        cpNumber = newCpNumber;  // Set new contact phone number
    }
    std::string getCpNumber() const {
        return cpNumber;  // Return contact phone number
    }

    // Function to get full name by concatenating first and last names
    std::string getFullName() const {
        return firstName + " " + lastName;  // Return full name
    }
};

#endif  // End of header guard
