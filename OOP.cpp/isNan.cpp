# include<iostream>
#include<cstring>
using namespace std ;
bool isNan (string st){
   for(char c:st){
    if (c<'0' || c>'9')
    {
        return true;
    }
   }
    return false; // all chars is number 
}

int main ()
{
cout<<isNan("1234")<<endl;
cout<<isNan("123g4")<<endl;

}
