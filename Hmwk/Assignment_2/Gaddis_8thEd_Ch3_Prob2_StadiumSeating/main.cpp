/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 10, 2018, 2:57 PM
 */

//This program determines the amount of income generated from ticket sales

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double ClassA = 15.00;
    const double ClassB = 12.00;
    const double ClassC = 9.00;
    double NumberA, NumberB, NumberC, Total;
    
    //Find how many tickets were sold
    cout << "How many Class A tickets were sold? ";
    cin >> NumberA;
    cout << "How many Class B tickets were sold? ";
    cin >> NumberB;
    cout << "How many Class C tickets were sold? ";
    cin >> NumberC;
    
    //Make the calculation
    Total = (ClassA * NumberA) + (ClassB * NumberB) + (ClassC * NumberC);
    
    //Display the result
    cout << setprecision(2) << fixed;
    cout << "$" << Total << " was generated in ticket sales.\n";
    return 0;
}

