#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

    // Display program information
    cout << "=========================================================================================================\n";
    cout << "                   THIS PROGRAM WILL COLLECT USER INPUT TO CREATE A STUDENT OBJECT, DEMONSTRATE\n"; 
    cout << "    THE USE OF METHODS FROM THE STUDENT AND PERSON CLASSES, AND DISPLAY THE STUDENT'S DETAILS ALONG \n";
    cout << "                                           WITH THE PERSON'S DETAILS\n";
    cout << "=========================================================================================================\n";
    cout << "                               PROGRAMMED BY: ANGELA KIM RUCHINA MASONG\n";
    cout << "                                    CMSC 28 - COMPUTER PROGRAMMING II\n";
    cout << "                                              MAY 31,2024\n";
    cout << "=========================================================================================================\n";

    // Variables to hold user input
    string fname;
    string lname;
    char gender;
    string email;
    string cpNumber;
    string studentNum;
    string course;
    string department;
    string college;

    // Getting user input
    cout << "Enter Student Details: \n";
    cout << "\nFirst Name: ";
    getline(cin, fname);
    cout << "Last Name: ";
    getline(cin, lname);
    cout << "Student Gender (M/F): ";
    cin >> gender;
    cin.ignore();  // Ignore the newline character left in the buffer

    cout << "Student Email: ";
    getline(cin, email);
    cout << "Student Contact Number: ";
    getline(cin, cpNumber);
    cout << "Student Number: ";
    getline(cin, studentNum);
    cout << "Course: ";
    getline(cin, course);
    cout << "Department: ";
    getline(cin, department);
    cout << "College: ";
    getline(cin, college);
    cout << "=========================================================================================================\n";

    // Creating a Student object with the provided input
    Student student(fname, lname, gender, email, cpNumber, studentNum, course, department, college);

    // Outputting the student information
    cout << "Student First Name: " << student.getFirstName() << endl;
    cout << "Student Last Name: " << student.getLastName() << endl;
    cout << "Student Gender: " << student.getGender() << endl;
    cout << "Student Email: " << student.getEmailAdd() << endl;
    cout << "Student Contact Number: " << student.getCpNumber() << endl;
    cout << "Student Number: " << student.getStudentNum() << endl;
    cout << "Course: " << student.getCourse() << endl;
    cout << "Department: " << student.getDepartment() << endl;
    cout << "College: " << student.getCollege() << endl;

    // Displaying the sample output
    cout << "=========================================================================================================\n";
    cout << "Hi, " << student.getFirstName() << " " << student.getLastName() 
         << "! Welcome to UP Mindanao and congratulations! We are pleased to inform you that you are admitted in the BS "
         << student.getCourse() << " program under the Department of " << student.getDepartment() 
         << ", College of " << student.getCollege() << ". Your Student number is " << student.getStudentNum() << "." << endl;
    cout << "=========================================================================================================\n";
    return 0;
}
