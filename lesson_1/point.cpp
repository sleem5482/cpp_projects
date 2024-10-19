# include<iostream>
using namespace std ;
int main ()
{
    int x[]={1,2,3,4,5} ;
    int *ptr =& x[0];
    cout<< *ptr <<endl;
    ptr ++;
     cout<< *ptr<<endl; 
     ptr +=3;
cout<< *ptr<<endl;
    
}