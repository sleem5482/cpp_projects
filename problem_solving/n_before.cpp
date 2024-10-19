# include<iostream>
using namespace std ;
int main ()
{
long long b;char c;
cin >>c>>b;int a =int (c);
if (b>26&&a<122)  cout<<char(a+(b%26));
else if (a<=122&&b%26 ==0)  cout<<char(a);
else if (a+b>=122)  cout<<char(a+(b%26 )-26);
else
cout<<char(a+b);

}
   