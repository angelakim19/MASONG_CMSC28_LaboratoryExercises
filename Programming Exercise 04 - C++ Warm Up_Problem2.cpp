#include <iostream>
#include <string> 
#include <algorithm> 
using namespace std;

// Function to display the program description
void progDescription() {
    cout << "=========================================================================================================\n";
    cout << "                      THIS PROGRAM CONVERTS DECIMAL NUMBER TO ITS BINARY EQUIVALENT\n";
    cout << "=========================================================================================================\n";
    cout << "                               PROGRAMMED BY: ANGELA KIM RUCHINA MASONG\n";
    cout << "                                    CMSC 28 - COMPUTER PROGRAMMING 2\n";
    cout << "                                             APRIL 25,2024\n\n";
}

// Function to read an integer from the user
int readData() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    return n;
}

// Function to convert decimal to binary
string decimalToBinary(int n) {
    string binary = "";
    if (n == 0) return "0";
    while (n > 0) {
        binary += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

// Function to display the decimal and its binary equivalent
void showData(int decimal, string binary) {
    cout << "Decimal: " << decimal << "\n";
    cout << "Binary Equivalent: " << binary << "\n";
}

int main() {
    int decimal;         // Variable to hold user input
    string binary;       // Variable to hold the binary representation

    progDescription();   // Display the program description

    decimal = readData();  // Get data from the user

    binary = decimalToBinary(decimal);  // Convert decimal to binary

    showData(decimal, binary); // Display the results

    return 0; // End of program
}
