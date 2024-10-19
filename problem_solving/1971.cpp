#include<string>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std ;
int main ()
{
    int a;cin >>a;string b;
     string x[a];
    for (int i=0;i<a; i++)
    {  
      cin>>b;
      int count=0;string c=b;
     for (int j=0;j<b.length();j++){
        if (b[j] == b[j+1])count ++ ;
       
     }
     if (count==b.length()-1) cout <<"NO"<<endl;
     
     else if (b.length() == 2){
        char a=b[0];
        b[0]=b[1];
        b[1]=a;
       cout <<"YES"<<endl<<b<<endl;  
     } 
      
     else {
      while (b==c)
      {
       random_shuffle(b.begin(),b.end());  
      }
         cout <<"YES"<<endl<<b<<endl;
    
    }
    
}
}