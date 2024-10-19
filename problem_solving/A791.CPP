
# include<iostream>
using namespace std ;
int main ()
{
int a,b,C=0;
cin >>a>>b;
int j=a*3;int f=b*2;
for (int i=0;i<=10;i++)
{
if(a>b) break;
else C++;
a*=3;b*=2;
}
cout<<C;
}
