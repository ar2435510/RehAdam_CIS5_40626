/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 12, 2018, 4:22 PM
 */

//This program converts the temperature from Celsius to Fahrenheit

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double Cels, Fahr;
    
    //Get the temperature in Celsius
    cout << "What is the temperature, in degrees Celsius? ";
    cin >> Cels;
    
    //Make the calculation
    Fahr = 9 / 5 * Cels + 32;
    
    //Display the result
    cout << setprecision(1) << fixed;
    cout << "The temperature is " << Fahr << " degrees Fahrenheit";
    return 0;
}

