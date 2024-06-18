#include <iostream>
#include <algorithm> 
using namespace std;

// Function to display the program description
void progDescription() {
    cout << "=========================================================================================================\n";
    cout << " THIS PROGRAM READS THREE NUMBERS AND CALCULATES THE DIFFERENCE BETWEEN THE LARGEST AND SMALLEST NUMBER\n";
    cout << "=========================================================================================================\n";
    cout << "                               PROGRAMMED BY: ANGELA KIM RUCHINA MASONG\n";
    cout << "                                    CMSC 28 - COMPUTER PROGRAMMING 2\n";
    cout << "                                             APRIL 25,2024\n\n";
}

// Function to read three numbers from the user
void readData(int &x, int &y, int &z) {
    cout << "Enter three integers: \n";
    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    cout << "z= ";
    cin >>z;
}

// Function to find the highest number among three numbers
int getLarge(int x, int y, int z) {
    return max({x, y, z});
}

// Function to find the lowest number among three numbers
int getSmall(int x, int y, int z) {
    return min({x, y, z});
}

// Function to display data
void showData(int x, int y, int z, int highest, int smallest, int diff) {
    cout << "\nNumbers entered: x = " << x << ", y = " << y << ", z = " << z << "\n";
    cout << "Highest value: " << highest << "\n";
    cout << "Lowest value: " << smallest << "\n";
    cout << "Difference between highest and lowest: " << diff << "\n";
}

int main() {
    int x, y, z;        // Variable declarations
    int smallVal, largeVal, diff; // More variables for processing

    progDescription();  // Display program description

    readData(x, y, z);  // Get data from the user

    smallVal = getSmall(x, y, z);  // Determine smallest value
    largeVal = getLarge(x, y, z);  // Determine largest value

    diff = largeVal - smallVal;    // Compute difference

    showData(x, y, z, largeVal, smallVal, diff); // Display all relevant data

    return 0; // End of program
}
