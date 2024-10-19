# include<iostream>
using namespace std ;
int main ()
{
    int x1=1,x2=1;
     int a; cout<<"ent num  ";  cin>>a; 
    cout<<x1 <<" , "<<x2;
    for (int i = 3; i<=a; i++)
    {
    int temp = x1 +x2 ;
    cout<<" , "<<temp;x1=x2;
    x2=temp;
    }
    
    

}