# include<iostream>
using namespace std ;
int main ()
{
     
    for (int  i = 1; i <=10; i++)
    cout<<"sky"<<i<<endl;
    cout <<"\n===========\n";
    int j =1 ;
    do 
    {
       cout<<"sky"<<j<<endl;
       j++;
    }while (j<=10)  ;
    

  cout<<"================"<<endl;
  double sum=0,average ;int n;cin>>n;
  for (int  j = 1; j <= n; j++)
  {
   sum+=j ;
  }
average=sum/n;
cout <<"sum =  "<<sum<<endl;
cout <<"average =  "<<average<<endl; 
}