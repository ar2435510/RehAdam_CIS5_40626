/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 11, 2018, 6:44 PM
 */

//This program calculates the military budget as a percentage of the federal budget

#include <iostream>

using namespace std;

int main() {

    float milBdgt, fedBdgt, mlPrcnt;
    
    milBdgt = 693.2e09f;  //military budget = 639.1 billion
    fedBdgt = 4.094e12f;  //federal budget = 4.094 trillion
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    
    cout << "The military budget takes up " << mlPrcnt << "% of the federal budget";
    return 0;
}

