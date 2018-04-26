
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

   cout << month << " " << year << " " << total << endl;
   cout << sales << endl;

    return 0;
}

