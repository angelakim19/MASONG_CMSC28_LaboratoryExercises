#include "Makeup.h"

// Constructors
Makeup::Makeup() : brand("Unknown"), type("Unknown"), color("Unknown") {}

Makeup::Makeup(std::string b) : brand(b), type("Unknown"), color("Unknown") {}

Makeup::Makeup(std::string b, std::string t) : brand(b), type(t), color("Unknown") {}

Makeup::Makeup(std::string b, std::string t, std::string c) : brand(b), type(t), color(c) {}

// Display function
void Makeup::display() const {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Shade: " << color << std::endl;
}

int main() {
    // Creating a Makeup object using the constructor
    Makeup myMakeup("Maybelline", "Foundation", "Ivory");

    // Displaying the features of the Makeup object
    std::cout << "Makeup:" << std::endl;
    myMakeup.display();

    return 0;
}