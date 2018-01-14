/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 12, 2018, 3:14 PM
 */

//This program calculates how many widgets are stacked on a pallet, based on the weight of the pallet

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double wWeight = 12.5;
    double pWeight, tWeight, wNumber;
    
    //Ask about the weight
    cout << "How much does the pallet weigh, in pounds? ";
    cin >> pWeight;
    cout << "How much does the pallet weigh with widgets stacked on top, in pounds? ";
    cin >> tWeight;
    
    //Make the calculation
    wNumber = (tWeight - pWeight) / wWeight;
    
    //Display the result
    cout << setprecision(0) << fixed;
    cout << "There are " << wNumber << " widgets stacked on the pallet.";
    return 0;
}

