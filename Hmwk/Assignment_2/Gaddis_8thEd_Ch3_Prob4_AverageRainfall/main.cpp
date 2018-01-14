/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 11, 2018, 10:18 AM
 */

//This program calculates the average rainfall for three months

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main() {
    double rain1, rain2, rain3, average;
    string month1, month2, month3;
    
    //Enter the months
    cout << "What is the first month? ";
    getline(cin, month1);
     cout << "What is the second month? ";
    getline(cin, month2);
     cout << "What is the third month? ";
    getline(cin, month3);
    
    //Enter the rainfall
    cout << "What was the rainfall, in inches, for " << month1 << "?";
    cin >> rain1;
    cout << "What was the rainfall, in inches, for " << month2 << "?";
    cin >> rain2;
    cout << "What was the rainfall, in inches, for " << month3 << "?";
    cin >> rain3;
    
    //Calculate the average
    average = (rain1 + rain2 + rain3) / 3;
    
    //Display the result
    cout << "The average rainfall for " << month1 ; cout << ", " << month2 ; cout << ", and " << month3; cout << " was " << average << " inches.";
    return 0;
}

