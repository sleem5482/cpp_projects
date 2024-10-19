#include <string>
#include <iostream>
using namespace std;
//clean chars @##$%^&*() except string
string cleanStr(string st , bool KeepNums = true)
{
string resault;
for (char c : st)
{
    if(c>='A' && c<='Z' || c=='_'){
        resault +=c;
    }
    else if(c>='a' && c<='z'){
        resault +=c;
    }
      else if(KeepNums=true&&c>='0' && c<='9'  ){
        resault +=c;
    }
}

return resault;
}

int main()
{
    cout <<cleanStr("Sleem#^&*&*^&#@$#_ hashem",0) << endl;
   
}