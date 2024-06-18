// Header of the file 
#ifndef PERSON_H
#define PERSON_H

// String library for using string as data type 
#include <string>
using namespace std; 

// Class 
class Person {
  private:
    string fstname;     // Variable to store the first name
    string lstname;     // Variable to store the last name
    string gender;      // Variable to store the gender 


public:
    // Contructor which allows creation of a person object with specific name and gender 
    Person(string fn = "", string ln = "", string g = "") : fstname(fn), lstname(ln), gender(g) {}

    // Setters which set values of class members 
    void setFirstName(const string& fn){        // Set the first name of the person 
      fstname = fn;          // Assign the input string to the fstname variable 
    }

    void setLastName(const string& ln){         // Set the last name of the person 
      lstname = ln;          // Assign the input string to the lstname variable 
    }

    void setGender(const string& g){            // Set the gender of the person 
      gender = g;           // Assign the input string to the gender variable 
    }

    // Getters which retrieve values of class members 
    string getFirstName() const{       // Returns to the first name of the person
      return fstname;                 // Return to the value of the firstname variable 
    }

    string getLastName() const{       // Returns to the last name of the person
      return lstname;                 // Return to the value of the lastname variable 
    }

    string getGender() const{         // Returns to the gender of the person
      return gender;                  // Return to the value of the gender variable 
    }

    string getFullName() const{       // Return to the full name of the person 
      return fstname + " " + lstname;   // Concatenante the fstname and lstname 
    }
};

#endif