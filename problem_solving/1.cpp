# include<iostream>
using namespace std ;
int main ()
{
 long a,b,c ;cin >>a>>b>>c;
 if (a==b&&b==c )cout<<"Equilateral";
 else if(a!=b&&b!=c&&a!=c&&a<b+c &&b<a+c &&c<a+b) cout<<"Scalene";
else if (a==c||a==b||b==c)cout<<"Isosceles";
else cout<<"Invalid";
}