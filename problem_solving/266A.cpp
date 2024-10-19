# include<iostream>
using namespace std ;
int main ()
{
    int b,c=0;
    cin>> b;
   char a[b];
   for (int i = 0; i < b; i++)
   {
    cin>>a[i];
   }
   string g= a;
   for (int i = 0; i < b; i++)
   {
    if (g[i]==g[i+1]) c++;
   }
   cout<<c;

   
}  