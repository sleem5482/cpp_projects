# include<iostream>
using namespace std ;
int main ()
{
  int a;   cin >>a;  float b[a];
  float c=0;
  for (int i=0;i<a;i++)
  {
    cin>>b[i];
c+=b[i];
  }
 cout <<c/a;
}  