/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 12, 2018, 4:31 PM
 */

//This program converts US dollars to yen and to euros

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double yen_per_dollar = 98.93;
    const double euros_per_dollar = 0.74;
    double us_dollar, dollar_to_yen, dollar_to_euros;
    
    //get information
    cout << "Enter an amount of US currency: $";
    cin >> us_dollar;
    
    //Make the calculations
    dollar_to_yen = us_dollar * yen_per_dollar;
    dollar_to_euros = us_dollar * euros_per_dollar;
    
    //Display the results
    cout << setprecision(2) << fixed;
    cout << "$" << us_dollar;
    cout << " is worth " << dollar_to_yen << " yen\n";
    cout << "$" << us_dollar;
    cout << " is worth " << dollar_to_euros << " euros";
    return 0;
}

