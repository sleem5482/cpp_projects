# include<iostream>
using namespace std ;
int main ()
{
    int x =0,b[50],c,a;
     cin >>a>>c;
    for (int i=1;i<=a; i++)
    {  
    cin >>b[i] ;
    }
    for(int i=1;i<=a ;i++)
    {
 if(b[i]>=b[c]&& (b[i]!=0)) x++;
 else x;
    }

    cout <<x;

}