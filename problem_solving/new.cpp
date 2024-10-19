# include<iostream>
using namespace std ;
int main ()
{
    long a ,b,c ;cin >>a;
    int res  [a];
    for(int i=0;i<a;i++) {
 cin >>b;
 res[i]=b/4;
 c=b%4;
 res[i] +=c/2;
    }
       for(int i=0;i<a;i++) {
cout <<res[i]<<endl;
    }
}