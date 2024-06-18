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
    Makeup() : brand("Unknown"), type("Unknown"), color("Unknown") {}

    Makeup(string b) : brand(b), type("Unknown"), color("Unknown") {}

    Makeup(string b, string t) : brand(b), type(t), color("Unknown") {}

    Makeup(string b, string t, string c) : brand(b), type(t), color(c) {}

    // Display function
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    // Creating a Makeup object using the constructor
    Makeup myMakeup("Maybelline", "Foundation");

    // Displaying the features of the Makeup object
    cout << "Makeup:" << endl;
    myMakeup.display();

    return 0;
}
