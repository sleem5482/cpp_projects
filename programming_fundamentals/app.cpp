# include<iostream>
# include<math.h>
using namespace std ;
void f (int (a))
{
    long r =a*a+7*a-9;
     cout <<"f("<<a<<") = "<<r<<endl;
}
void g (int (x))
{
    long r =pow(x ,6)+5*pow(x , 4)+2*pow(x ,3)+25;
    cout <<"g("<<x<<") = "<<r<<endl;
}
int main ()
{
 f(7);f(11);g(7);g(11);
 cout <<"\n=============\n";

    
 char x;cout <<"enter the character : ";cin >>x;
 switch(x)
 {
 case 'N':
 case 'M':
 cout <<"magenta \n";break;
 case  'w':
 case  'W':
 cout <<"white \n";break;
 case 'r':
 case 'R':
 cout <<"red \n";break;
case 'i':
 case 'I':
 cout <<"incterine \n";break;

default:
 cout <<"no colour \n";break;
 }
}
