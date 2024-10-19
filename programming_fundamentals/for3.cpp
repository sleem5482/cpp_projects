# include<iostream>
using namespace std ;
int main ()
{
     int a; cout<<"ent num  ";  cin>>a; 
     long long n=1;
    for (int i = a; i>=1; i--){
    n*=i;}
    cout<<"factorial of "<<a<<"  is :  "<<n;
    

}