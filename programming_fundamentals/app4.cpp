# include<iostream>
using namespace std ;
int main ()
{
    int n;cout<<"enter student degree : ";
cin >>n;
if (n<0)
    cout<<"error";
else if (n<50)
    cout<<"fail";
else if (n<65)
    cout<<"acceptable ";
else if (n<75)
    cout<<"good";
    else if (n<85)
    cout<<"very good";
else if (n<=100)
    cout<<"excellent ";
    else cout <<"error";
    cout <<"\n==============\n";
    int x,sum =0;
    for (int i=0;i<4 ;i++)
    {
         cout<<"enter the num : ";
         cin >>x;sum +=x;
    }
    if (sum>=50) cout <<"yes\n";
    else cout <<"no ";
}
