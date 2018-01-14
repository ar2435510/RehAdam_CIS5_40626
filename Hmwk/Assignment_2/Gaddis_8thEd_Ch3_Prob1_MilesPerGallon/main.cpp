/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 10, 2018, 2:38 PM
 */

// This program calculate's a car's gas mileage.

#include <iostream>
using namespace std;


int main() {
    double gallons , miles;
    
    cout << "Enter the number of miles that can be driven on a full tank: ";
    cin >> miles;
    cout << "Enter the amount of gallons the car can hold: ";
    cin >> gallons;
    cout << "The miles per gallon of the car is ";
    cout << (miles / gallons) << " mpg\n";
    return 0;
}

