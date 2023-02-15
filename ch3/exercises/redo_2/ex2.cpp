/*
2 Write a program in C++ that converts from miles to kilometers. 
Your program should have a reasonable prompt for the
user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.
*/

#include <iostream>
using namespace std;

int main() {

    cout << "\n--------------------------------------------\n";
    cout << "This program converts miles to kilometers\n";
    cout << "--------------------------------------------\n";

    double miles = 0;
    const double km = 1.609;
    double miles_to_km = 0;
    
    cout << "Enter a number of miles: ";
    cin >> miles;
    miles_to_km = km * miles;
    cout << miles << " miles to km -> " << miles_to_km << " km \n";
}