# include<iostream>
#include <math.h>
using namespace std ;

int main ()
{
   int a,b;cout <<"enter first num";cin >>a;
   cout <<"enter secound num"; cin>>b;
 char x;cout <<"enter the character : ";cin >>x;
 switch(x)
 {
 case '+':
 cout <<a<<" + "<<b<<"="<<a+b;break;
  case '-':
 cout <<a<<" - "<<b<<"="<<a-b;break;
 case '*':
 cout <<a<<" x "<<b<<"="<<a*b;break;
 case '/':
 cout <<a<<" / "<<b<<"="<<a/b;break;
  case '%':
 cout <<a<<" % "<<b<<"="<<a%b;break;
  case '^':
 cout <<a<<" ^ "<<b<<"="<<pow(a,b);break;
default:
 cout <<"no  \n";break;
 }
}

