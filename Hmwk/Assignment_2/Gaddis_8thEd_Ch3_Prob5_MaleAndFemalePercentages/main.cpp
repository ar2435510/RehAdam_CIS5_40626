/* 
 * File:   main.cpp
 * Author: Adam
 *
 * Created on January 12, 2018, 2:54 PM
 */

//This program calculates the percentage of males and the percentage of females registered in a class

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    double Class, mNumber, fNumber, mPrcnt, fPrcnt;
    
    //ask the user how many males/females are in the class
    cout << "How many males are registered in the class ? ";
    cin >> mNumber;
    cout << "How many females are registered in the class? ";
    cin >>fNumber;
    
    //make the calculations
    Class = mNumber + fNumber;
    mPrcnt = (mNumber / Class) * 100;
    fPrcnt = (fNumber / Class) * 100;
    
    //Display the results
    cout << setprecision(1) << fixed;
    cout << mPrcnt << "% of the class is male\n";
    cout << fPrcnt << "% of the class is female\n";
    return 0;
}

