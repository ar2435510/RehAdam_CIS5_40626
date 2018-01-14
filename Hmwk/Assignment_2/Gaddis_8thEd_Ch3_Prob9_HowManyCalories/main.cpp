/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 12, 2018, 3:27 PM
 */

//This program reports how many calories were consumed from a bag of cookies

#include <iostream>
using namespace std;

int main() {
    const double bagSize = 30;
    const double servAmount = 10;
    const double servSize = servAmount / bagSize;
    const double servCal = 300;
    const double indvCal = (servCal / servSize) / bagSize;
    double eatAmount, eatCal;
    
    //Ask how many cookies were eaten
    cout << "How many cookies were eaten? ";
    cin >> eatAmount;
    
    //Make the calculation
    eatCal = eatAmount * indvCal;
    
    //Display the result
    cout << eatCal << " calories were consumed.";
    return 0;
}

