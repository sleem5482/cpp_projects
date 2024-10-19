# include<iostream>
# include<math.h>
using namespace std ;
int main ()
{
     int a ; bool b;
     zzz:
      b= true ;
   cout <<"enter number " ;cin >>a; 
    if (a==2)
    {
         cout <<"****even***" <<endl;
         b = true;
         }
 if (a%2==0)
    {
         cout <<" ****even number**** "<<endl;
         b= false;
     
    }
    cout <<"***an odd number****"<<endl;
    for (int i=3; i<= sqrt(a);i+=2)
    {
     cout <<"***testing "<<i<<"****"<<endl;
    if (a%i==0)
    b=false;
    }
    if (b==true) cout <<"prime "<<endl;
    else  cout <<" not prime "<<endl;

    goto zzz;
    }
    
    
