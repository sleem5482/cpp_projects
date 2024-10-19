# include<iostream>
using namespace std ;
int main ()
{
    int n; 
    cout <<"enter a number ";  cin >>n;
    if (n%2==0)
    return 0;
    for (int i = 1; i<=n; i+=2)
    {
    for (int j =1;j<=(n-i)/2 ;j++) cout <<" ";
     for (int k =1;k<=i ;k++) cout <<"*";
    cout <<endl;
    }
}