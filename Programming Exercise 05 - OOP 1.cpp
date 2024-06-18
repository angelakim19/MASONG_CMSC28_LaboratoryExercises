#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

const int MAX_SIZE = 10;

// Function Declarations
void inputNum(int num[], int& count);
int findMax(const int num[], int count);
int findMin(const int num[], int count);
double findAverage(const int num[], int count); 
double findVariance(const int num[], int count, double average);
double findStandardDeviation(double variance);
void displayResults(int max, int min, double average, double variance, double standardDev);


// Main Function 
int main() {
  cout << "=========================================================================================================\n";
  cout << "                      PROGRAMMING EXERCISE 5 || CMSC 28 - COMPUTER PROGRAMMING II\n";
  cout << "                                 Programmed by: Angela Kim Ruchina Masong\n";
  cout << "=========================================================================================================\n";
  cout << "      THIS PROGRAM WILL ASK THE USER TO INPUT VARIOUS NUMBERS (POSITIVE OR NEGATIVE BUT NOT ZERO) AND\n"; 
  cout << "                     PERFORM BASIC STATISTICAL CALCULATIONS ON THESE NUMBERS\n\n";

  int num[MAX_SIZE];
  int count = 0;

  inputNum(num, count);

  if (count == 0) {
    cout << "No numbers were entered.\n";
    return 1;
  }

  int max = findMax(num, count);
  int min = findMin(num, count);
  double average = findAverage(num, count);
  double variance = findVariance(num, count, average);
  double standardDev = findStandardDeviation(variance);
  
  displayResults(max, min, average, variance, standardDev);

  return 0;

}

// Function to input a number
void inputNum(int num[], int& count) {
  int userInput;
  while (count < MAX_SIZE){
    cout << "Input an integer: ";
    cin >> userInput;

    if (cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input. Please enter an integer.\n";
      continue;
    }

    if (userInput == 0) break;
    num [count++] = userInput;
  }
}

// Function to find the maximun number of the given input
int findMax(const int num[], int count) {
  int maxNum = num[0];
  for (int i = 0; i < count; i++) {
      if (num[i] > maxNum) maxNum = num[i];
  }
  return maxNum;
}

// Function to find the minimum number of the given input
int findMin(const int num[], int count) {
  int minNum = num[0];
  for (int i = 1; i < count; i++) {
    if (num[i] < minNum) minNum = num[i];
  }
  return minNum;
}

//Function that calculates the avarage of the given input
double findAverage(const int num[], int count) {
  if (count == 0) return 0;
  double sum = 0;
  for (int i = 0; i < count; i++) {
    sum += num[i];
  }
  return sum / count;
}

//Function that calculates the variance of given input
double findVariance(const int num[], int count, double average) {
  if (count == 0) return 0;
  double sum = 0;
  for (int i = 0; i < count; i++){
    sum += (num[i] - average) * (num[i] - average);
  }
  return sum / count;
}

// Function that calculates the standard deviation of the input 
double findStandardDeviation(double variance) {
  return sqrt(variance);
}

// Function that displays the results 
void displayResults(int max, int min, double average, double variance, double standardDev){
  cout << "\nLargest = " << max << "\n";
  cout << "Smallest = " << min << "\n";
  cout << "Average = " << average << "\n";
  cout << "Variance = " << variance << "\n";
  cout << "Standard deviation = " << standardDev << "\n";
}