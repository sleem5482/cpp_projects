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
   int a;cout <<"enter the num";cin >>a;
 char x;cout <<"enter the character : ";cin >>x;
 switch(x)
 {
 case 'g':
 g(a);break;
  case 'f':
 f(a);break;
 default: cout <<"undefinied num ";break;
 }
}