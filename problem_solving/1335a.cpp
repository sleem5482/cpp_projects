# include<iostream>
using namespace std ;
int main ()
{
    int a;cin >>a;
     long long  x[a],b;
    for (int i=0;i<a; i++)
    {  
      cin>>b;
      if (b==1||b==2)x[i]=0;
      else if (b%2==0)x[i]=(b/2)-1;
      else x[i]=b/2;
    }
     for(int i=0;i<a ;i++)
     {
  cout <<x[i]<<endl;
     }
}