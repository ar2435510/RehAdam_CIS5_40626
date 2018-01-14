/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 11, 2018, 9:56 AM
 */

//This program determines the average among five test scores.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    double test1, test2, test3, test4, test5, average;
    
    //Enter the test scores
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
     cout << "Enter the third test score: ";
    cin >> test3;
     cout << "Enter the fourth test score: ";
    cin >> test4;
     cout << "Enter the fifth test score: ";
    cin >> test5;
    
    //Calculate the average
    average = (test1 + test2 + test3 + test4 + test5) / 5;
            
   //Display the average
            cout << setprecision(1) << fixed;
            cout << "the average test score is: " << average;
    return 0;
}

