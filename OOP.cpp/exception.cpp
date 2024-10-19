# include <iostream>
using namespace std;

int main (){
  int hour ;
  cin.exceptions(cin.failbit);//this is option
try
{
    
    cin >>hour ;
    if (hour<0) throw "error";
    cout <<hour<<endl; 
 
}
catch(char e[])
{
     cerr <<e<<"wrong value \n";

}

}