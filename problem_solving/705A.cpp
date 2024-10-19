# include<iostream>
using namespace std ;

int main ()
{
    int a ;cin >>a;
    if (a==1)cout <<"I hate it ";
    else{
    for (int i=1;i<=a;){
         if (i==a&&i%2==0)cout <<"I love it ";
        else if (i==a&&i%2==1)cout <<"I hate it ";
         else if (i%2==1 ||i==1)cout<<" I hate that ";
          else if (i%2==0) cout <<"I love that ";
        i++;
    } 
    }
}