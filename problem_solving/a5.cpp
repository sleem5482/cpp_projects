# include<iostream>
using namespace std ;
int main ()
{
    int a;cin >>a;long b,c,d,e; string x[a]; 
    for (int i=0;i<a; i++)
    {  
      cin>>b>>c>>d>>e;
         long d1 =  b - c ;
        long d2 = d - e;
         if ((d1 > 0 && d2 > 0) || (d1 < 0 && d2 < 0)) {
            x[i]="yes";
        } else {
            x[i]="no";
        }} 
     for(int i=0;i<a ;i++)
     {
  cout <<x[i]<<endl;
     }
}
