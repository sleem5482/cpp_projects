#include <string>
#include <iostream>
using namespace std;
//parse string from Query string 
string parseString(string st){
string resault;
for (int i = 0; i < st.length(); i++)
{
    if (st[i]=='='){
resault+=": ";
continue;
    }
       else if (st[i]=='&'){
resault+="\n";
continue;
    }
    resault+=st[i];
}


return resault;
}

int main()
{
   cout<<parseString("name=sleem&age=19&country=Egypt");
}