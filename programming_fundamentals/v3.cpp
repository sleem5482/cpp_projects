# include<iostream>
# include<vector>
using namespace std ;
int main ()
{
    int m1 ,m2 ,m3,temp;
    cout <<"enter first number " ;cin>>m1;
      cout <<"enter secound number " ;cin>>m2;
        cout <<"enter third number " ;cin>>m3;
        int max_tries ;
        cout<<"enter maximum number ";cin>>max_tries;
    vector<bool>v;
    v.assign(max_tries,false);
for (int i=0;i<=max_tries/m1;i++)
{
  for (int j=0;j<=max_tries/m2;j++)
    {
     for (int k=0;k<=max_tries/m3;k++)
       {
temp= i*m1 + j*m2 + k*m3;
if (temp<max_tries) v[temp]=true;
       }
    }
}
for(int i=max_tries-1;i>=0;i--)
{
    if (!v[i])
    {
     cout <<"the largest number is: "<<i;
    break;
    }
}
}