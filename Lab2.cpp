#include <iostream>
#include <string>
#include <iomanip>

#define STATE_SALES_TAX 0.053
using namespace std;

int main()
{
   const double county_sales_tax = 0.031;

   string month;
   int year;
   double total;

   cout << "What is the month?" << endl;
   cin >> month;
   cout << "What is the year?" << endl;
   cin >> year;
   cout << "What is the total sale?" << endl;
   cin >> total;

   double sales = total / (1 + STATE_SALES_TAX + county_sales_tax);
   double countysales = sales * county_sales_tax;
   double statesales = sales * STATE_SALES_TAX;
   double totalsalestax = countysales + statesales;

   cout << "\nMonth: " << month << "  Year: \n" << year <<endl;
   cout << "---------------\n" << endl;
   cout << setprecision(2) << fixed;
   cout << "Total Collected:" << "$" << setw(10) << total << endl;
   cout << "Sales:" << "$"<< setw(10) << sales << endl;
   cout << "County Sales Tax:" << "$"<< setw(10) << countysales << endl;
   cout << "State Sales Tax:" << "$" << setw(10) << statesales << endl;
   cout << "Total Sales Tax:" << "$" << setw(10) << totalsalestax << endl;


  

    return 0;
}

