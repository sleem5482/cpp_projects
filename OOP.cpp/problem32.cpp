#include <iostream>
#include <cmath>
using namespace std;
//calc how many months to installment

int readPNumber(string msg)
{
    float number = 0;
    do
    {
        cout << msg << endl;
    cin >> number;
    } while (number<=0);
  
    return number;
}
float totalMonths(float loanamount ,float monthalyInstallment){
return (float)loanamount / monthalyInstallment;
}
int main()
{
float loaAmount=readPNumber("please ent loan amount ? ");
float monthalyInstallment =readPNumber("please ent monthaly installment ? ");
cout<<"\n total monthaly to pay = "<<totalMonths(loaAmount,monthalyInstallment);
cout<<endl;

}