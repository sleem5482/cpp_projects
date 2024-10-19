# include<iostream>
using namespace std ;
int main ()
{
    char x;
    cout <<"enter num";
    cin>> x ;
    if ('a'<=x &&'z'>=x || ('A'<=x &&'Z'>=x))
    cout <<"ok";
    else cout <<"no";

}