/* 
 * File:   main.cpp
 * Author: Adam Reh
 *
 * Created on January 10, 2018, 11:12 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    const double FedTax = 0.184;
    const double StateTax = 0.417;
    const double StateSalesTax = 0.0225;
    const double OilPrice = 0.0700;
    const double OilPercent = 0.065;
    const double OilCost = OilPercent / OilPrice;
    double TotalPrice, TotalTax, BasePrice, PercentPrice, ProfitRange;
            
//Find the price of gas
    cout << "How much does a gallon of gas cost? $";
    cin >> TotalPrice
            
//Calculate the total tax
;TotalTax = (FedTax * TotalPrice) + (StateTax * TotalPrice) + (StateSalesTax * TotalPrice);
            
//Calculate the base price
BasePrice = TotalPrice - TotalTax;
            
//Calculate the percent price
PercentPrice = TotalTax * TotalPrice;
            
//Calculate the profit range
ProfitRange = (BasePrice - OilCost) / BasePrice * 100;
   
//Display the results
cout << "The total tax on a gallon of gas is $" << setprecision(2) << fixed <<TotalTax<< "\n";

cout << "The base price for a gallon of gas is $"<< setprecision(2) << fixed <<BasePrice<< "\n";

cout << "The percentage price due to gas tax is " <<PercentPrice<< "%\n" ;

cout << "The Oil Company profit range is " <<ProfitRange<< "%\n";
return 0;
}

