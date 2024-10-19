#include<string>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    int a;cin >>a;string b,c;
    for (int i=0;i<a; i++)
    {  
      cin>>b>>c;
  char cr=b[0];
  b[0]=c[0];
  c[0]=cr;
  cout <<b<<" "<<c<<endl;
    }
    

}