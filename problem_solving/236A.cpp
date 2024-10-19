
# include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
int a=0 ;
string b;cin>>b;
sort(b.begin(),b.end());
for (int i = 0; i < b.size(); i++)
{
     if (b[i]==b[i+1])a++ ;
}
int j= b.size()-a; 
if (j%2==0) cout <<"CHAT WITH HER!";
else cout<<"IGNORE HIM!";
}
