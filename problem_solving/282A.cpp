# include<iostream>
using namespace std ;
int main ()
{
    int x =0;
    int  a ;cin >>a;
    if (a<=150)
    {
    for (int i=0;i<a; i++)
    {  
        string b;
      cin >>b;
        if (b== "x++" ||b=="++x" ) x++;
       else if ( b=="x--" ||b=="--x") x--;
        else x;
    }
    cout<<x;
    }
}  
  