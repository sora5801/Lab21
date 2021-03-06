/*
  Filename:      Lab2.cpp

  Author:        Matthew Fu

  Date:          2018.05.03

  Description:   This file takes in the month, year, and
                 total amount collected at the cash register
                 and outputs the amount of sales, county sales tax,
                 state sales tax, and total sales tax in dollars.
*/
#include <iostream>
#include <string>
#include <iomanip>

//State sales tax is assumed to be 5.3% and
//county sales tax is assumed to be 3.1%. They
//are both declared to be constant values, though
//state sales tax is declared as a preprocessor directive
//and county sales tax is declared as a memory constant
//local to main.

#define STATE_SALES_TAX 0.053
using namespace std;

int main()
{
   
   const double COUNTY_SALES_TAX = 0.031;

   string month;
   int year;
   double total;

   cout << "Solution provided by Matthew Fu\n" << endl;

   //We first ask for the month, year, and total sale. 

   cout << "What is the month?" << endl;
   getline(cin, month);
   cout << "What is the year?" << endl;
   cin >> year;
   cout << "What is the total sale?" << endl;
   cin >> total;

   //After receiving the total, other values can then be computed.
   //The formulas for sales, county sales, state sales,
   //and total sales tax are given as follows. 

   double sales = total / (1 + STATE_SALES_TAX + COUNTY_SALES_TAX);
   double countysales = sales * COUNTY_SALES_TAX;
   double statesales = sales * STATE_SALES_TAX;
   double totalsalestax = countysales + statesales;

   //Once the values are computed, everything will be displayed 
   //in a neat, orderly manner. The setprecision(2) is there to make
   //sure that the total and the subsequent values do not have more than
   //two decimal places. The various setw are to adjust the widths of 
   //the values to make it look neat.

   cout << "\nMonth: " << month << "  Year: " << year << endl << endl;
   cout << "---------------\n" << endl;
   cout << setprecision(2) << fixed;
   cout << "Total Collected:" << setw(10) << "$" << setw(15) << setw(15) << total << endl << endl;
   cout << "Sales:" << setw(20) << "$" << setw(15) << sales << endl << endl;
   cout << "County Sales Tax:" << setw(9) << "$" << setw(15) << countysales << endl << endl;
   cout << "State Sales Tax:" << setw(10) << "$" << setw(15) << statesales << endl << endl;
   cout << "Total Sales Tax:" << setw(10) << "$" << setw(15) << totalsalestax << endl <<endl;

   return 0;
}
//The following is the output.
/*
Solution provided by Matthew Fu

What is the month?
December
What is the year?
2015
What is the total sale?
81673.67

Month: December  Year: 2015

---------------

Total Collected:         $       81673.67

Sales:                   $       75344.71

County Sales Tax:        $        2335.69

State Sales Tax:         $        3993.27

Total Sales Tax:         $        6328.96

Press any key to continue . . .

*/
