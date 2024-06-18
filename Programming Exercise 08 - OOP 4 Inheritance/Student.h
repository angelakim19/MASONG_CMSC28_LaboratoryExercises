#ifndef STUDENT_H  // Header guard to prevent multiple inclusions
#define STUDENT_H

#include "Person.h"  // Include the base class Person

class Student : public Person {
private:
    std::string studentNum;  // Student number (private)

public:
    std::string course;      // Course (public)
    std::string department;  // Department (public)
    std::string college;     // College (public)

    // Constructor to initialize all attributes
    Student(const std::string& newFirstName, const std::string& newLastName, char newGender,
            const std::string& newEmailAdd, const std::string& newCpNumber, const std::string& newStudentNum,
            const std::string& newCourse, const std::string& newDepartment, const std::string& newCollege)
        : Person(newFirstName, newLastName, newGender, newEmailAdd, newCpNumber),
          studentNum(newStudentNum), course(newCourse), department(newDepartment), college(newCollege) {}

    // Setter and Getter functions for student number
    void setStudentNum(const std::string& newStudentNum) {
        studentNum = newStudentNum;  // Set new student number
    }
    std::string getStudentNum() const {
        return studentNum;  // Return student number
    }

    // Setter and Getter functions for course
    void setCourse(const std::string& newCourse) {
        course = newCourse;  // Set new course
    }
    std::string getCourse() const {
        return course;  // Return course
    }

    // Setter and Getter functions for department
    void setDepartment(const std::string& newDepartment) {
        department = newDepartment;  // Set new department
    }
    std::string getDepartment() const {
        return department;  // Return department
    }

    // Setter and Getter functions for college
    void setCollege(const std::string& newCollege) {
        college = newCollege;  // Set new college
    }
    std::string getCollege() const {
        return college;  // Return college
    }
};

#endif  // End of header guard
