# include<iostream>
#include<cstring>
using namespace std ;
int parse_int(string st){
    int resault=0;
   for(char c:st){
    if (c>='0' && c<='9')
    {
      resault= resault*10+(c-'0');//we use 10 to move without singles to tens to favourable
    }else{
       continue;
    }
    
   }
    return resault;
}

int main ()
{
cout<<parse_int("1234sle85em");
}
