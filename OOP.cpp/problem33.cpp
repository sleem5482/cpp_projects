#include <iostream>
#include <cmath>
using namespace std;
string readPinCode()
{
string pinCode;
cout <<" \n please enter pin code \n";
cin >>pinCode;
return pinCode;
}
bool login (){
    string pinCode ;
    int counter =3;
    do
    {
        counter--;
        pinCode=readPinCode();
        
        if (pinCode== "1234" )
        {
            return 1;
        }
        else {
            cout<<"\n wrong pin ,you have "<<counter<<"more tries ";
            //system("color 4F");
        }
        
    } while (counter>=1 && pinCode != "1234");
    return 0;
}
int main()
{
if (login())
{
  //system ("color 2F");
  cout <<"your account balance is "<< 7500 <<endl;
}
else {
    cout <<"\n your card blocked call the bank for help. \n";
}

}