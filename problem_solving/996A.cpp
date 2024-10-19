#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   long a, count1=0, b=0, c=0,d=0,e=0;
   cin>>a;
count1=a/100;
b=a%100;
count1+=b /20;
c=b % 20;
count1+=c/10;
d=c%10;
count1+=d/5;
count1 += d % 5;

cout<<count1;
}