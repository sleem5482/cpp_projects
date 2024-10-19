# include<iostream>
using namespace std ;
int main ()
{
int a;cin>>a;string b ;string e[a];
for(int i=0;i<a;i++)
{
 cin >>b;   
   for(int j=0;j<b.size();j++){
   if (b[i]==b[j]) e[i] ="NO";
 
   else e[i] ="YES\n";
   }
}
for (auto l:e)  cout <<l<<endl;
}
