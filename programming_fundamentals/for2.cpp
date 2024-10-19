# include<iostream>
using namespace std ;
int main ()
{
    double sum=0 ,average;
    int n,x ;cout<<"enter value of num ";cin>>n;
     
      for (int i = 1; i <= n; i++)
  {
    cin>>x;
   sum+=x;
  }
average=sum/n;
cout <<"sum =  "<<sum<<endl;
cout <<"average =  "<<average<<endl; 
cout<<"\n=================\n";
}
