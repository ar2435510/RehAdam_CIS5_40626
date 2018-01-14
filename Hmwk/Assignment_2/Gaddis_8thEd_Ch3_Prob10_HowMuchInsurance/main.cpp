/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 12, 2018, 3:50 PM
 */

//this program suggests the minimum amount of insurance that should be bought for a property

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double StndIns = .80;
    double repCost, recIns;
    
    //Ask for the repair cost
    cout << "What is the repair cost of the property? ";
    cin >> repCost;
    
    //Make the calculation
    recIns = StndIns * repCost;
    
    //Display the result
    cout << setprecision(2) << fixed;
    cout << "It is recommended to purchase at least $" << recIns << " worth of insurance";
    return 0;
}

