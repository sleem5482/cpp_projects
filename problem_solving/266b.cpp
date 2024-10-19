# include<iostream>
using namespace std ;
int main ()
{
    int n,t;char boy='B';
    cin>> n>>t;
   string g;cin>>g;
   for(int j = 0; j < t; j++)
   {
   for (int i = 0; i < n; i++)
   {
    if (g[i]=='B' && g[i+1]=='G') {
        g[i]=g[i+1];
g[i+1]=boy;i++;
    }
   } 
   }
   cout<<g;

}  