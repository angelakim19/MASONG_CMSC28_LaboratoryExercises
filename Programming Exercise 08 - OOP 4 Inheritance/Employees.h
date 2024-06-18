#ifndef EMPLOYEES_H  // Header guard to prevent multiple inclusions
#define EMPLOYEES_H

#include "Person.h"  // Include the base class Person

class Employees : public Person {
private:
    std::string empNum;  // Employee number (private)

public:
    std::string position;  // Position (public)
    std::string officeUnit;  // Office/Unit (public)
    double salary;  // Salary (public)

    // Constructor to initialize all attributes
    Employees(const std::string& newFirstName, const std::string& newLastName, char newGender,
              const std::string& newEmailAdd, const std::string& newCpNumber, const std::string& newEmpNum,
              const std::string& newPosition, const std::string& newOfficeUnit, double newSalary)
        : Person(newFirstName, newLastName, newGender, newEmailAdd, newCpNumber),
          empNum(newEmpNum), position(newPosition), officeUnit(newOfficeUnit), salary(newSalary) {}

    // Setter and Getter functions for employee number
    void setEmpNum(const std::string& newEmpNum) {
        empNum = newEmpNum;  // Set new employee number
    }
    std::string getEmpNum() const {
        return empNum;  // Return employee number
    }

    // Setter and Getter functions for position
    void setPosition(const std::string& newPosition) {
        position = newPosition;  // Set new position
    }
    std::string getPosition() const {
        return position;  // Return position
    }

    // Setter and Getter functions for office/unit
    void setOfficeUnit(const std::string& newOfficeUnit) {
        officeUnit = newOfficeUnit;  // Set new office/unit
    }
    std::string getOfficeUnit() const {
        return officeUnit;  // Return office/unit
    }

    // Setter and Getter functions for salary
    void setSalary(double newSalary) {
        salary = newSalary;  // Set new salary
    }
    double getSalary() const {
        return salary;  // Return salary
    }
};

#endif  // End of header guard
