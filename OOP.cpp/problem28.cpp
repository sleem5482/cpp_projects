#include <iostream>
#include <cmath>
using namespace std;
// a program to calculate total bill after service and tax
/*this function work like this    your fee=( your cost + 10% * your cost )  
after that your fee + 16% * your fee */ 
enum primeOrNot {prime =1 , notPrime =2};

float readPNumber(string msg)
{
    float number = 0;
    do
    {
        cout << msg << endl;
    cin >> number;
    } while (number<=0);
  
    return number;
}
float totalBillAfterServiceFeeAndSalesTax(float totalBill )
{
  totalBill =totalBill*1.1;//we add 10%
 totalBill =totalBill*1.16;//we add 16%
 return totalBill;
}

int main()
{
float totalBill= (readPNumber("please ent positive num ? "));
cout <<endl;
cout <<"total Bill = "<<totalBill<<endl;
cout <<"total bill after service fee and sales tax = "
<<totalBillAfterServiceFeeAndSalesTax(totalBill)<<endl; 
}