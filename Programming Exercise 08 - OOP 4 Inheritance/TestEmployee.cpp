#include <iostream>
#include <string>
#include "Employees.h"

using namespace std;

int main() {
    // Display program information
    cout << "=========================================================================================================\n";
    cout << "    THIS PROGRAM WILL PROMPT THE USER TO ENTER EMPLOYEE DETAILS, CREATE AN EMPLOYEES OBJECT BASED ON\n"; 
    cout << "THE PROVIDED INFORMATION, AND DEMONSTRATE THE USAGE OF METHODS FROM BOTH THE EMPLOYEES AND PERSON CLASSES\n";
    cout << "                    IT WILL DISPLAY THE EMPLOYEE'S DETAILS AND PROVIDE A CONFIRMATION MESSAGE\n";
    cout << "=========================================================================================================\n";
    cout << "                               PROGRAMMED BY: ANGELA KIM RUCHINA MASONG\n";
    cout << "                                    CMSC 28 - COMPUTER PROGRAMMING II\n";
    cout << "                                              MAY 31, 2024\n";
    cout << "=========================================================================================================\n";

    // Variables to hold user input
    string fname;
    string lname;
    char gender;
    string email;
    string cpNumber;
    string empNum;
    string position;
    string officeUnit;
    double salary;

    // Getting user input
    cout << "Enter Employee Details: \n";
    cout << "\nFirst Name: ";
    getline(cin, fname);
    cout << "Last Name: ";
    getline(cin, lname);
    cout << "Gender (M/F): ";
    cin >> gender;
    cin.ignore();  // Ignore the newline character left in the buffer

    cout << "Email: ";
    getline(cin, email);
    cout << "Contact Number: ";
    getline(cin, cpNumber);
    cout << "Employee Number: ";
    getline(cin, empNum);
    cout << "Position: ";
    getline(cin, position);
    cout << "Office/Unit: ";
    getline(cin, officeUnit);
    cout << "Salary: ";
    cin >> salary;
    cin.ignore();  // Ignore the newline character left in the buffer

    // Creating an Employees object with the provided input
    Employees employee(fname, lname, gender, email, cpNumber, empNum, position, officeUnit, salary);

    // Outputting the employee information
    cout << "=========================================================================================================\n";
    cout << "Employee First Name: " << employee.getFirstName() << endl;
    cout << "Employee Last Name: " << employee.getLastName() << endl;
    cout << "Employee Gender: " << employee.getGender() << endl;
    cout << "Employee Email: " << employee.getEmailAdd() << endl;
    cout << "Employee Contact Number: " << employee.getCpNumber() << endl;
    cout << "Employee Number: " << employee.getEmpNum() << endl;
    cout << "Position: " << employee.getPosition() << endl;
    cout << "Office/Unit: " << employee.getOfficeUnit() << endl;
    cout << "Salary: " << employee.getSalary() << endl;

    // Displaying the sample output
    cout << "=========================================================================================================\n";
    cout << "Hi, " << employee.getFirstName() << " " << employee.getLastName() 
         << "! Welcome to the company! We are pleased to inform you that you are appointed as "
         << employee.getPosition() << " under the Office/Unit of " << employee.getOfficeUnit() 
         << ". Your employee number is " << employee.getEmpNum() << " and your salary is " 
         << employee.getSalary() << "." << endl;
    cout << "=========================================================================================================\n";

    return 0;
}
