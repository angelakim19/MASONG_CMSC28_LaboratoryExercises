#ifndef MAKEUP_H
#define MAKEUP_H

#include <iostream>
#include <string>
using namespace std;

class Makeup {
private:
    string brand;
    string type;
    string color;

public:
    // Constructors
    Makeup();
    Makeup(string b);
    Makeup(string b, string t);
    Makeup(string b, string t, string c);

    // Display function
    void display() const;
};

#endif
