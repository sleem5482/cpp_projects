# include<iostream>
# include<cctype>
using namespace std ;
int main ()
{ 
    string a ;cin >>a;int c =size(a);
     cout<<  char (toupper(a[0])); 
   for (int i = 1; i < c; i++)
   {
    cout <<a[i];
   } 
}