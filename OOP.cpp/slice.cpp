#include <string>
#include <iostream>
#include <vector>
using namespace std;
//get slice from string 
string slicing(string st ,int start, int end,  int step=1 ,bool reverse=false){
string result;
for (int i = start; i < end; i+=step)
{
    if (reverse)
    {
       result=st[i]+result;//to reverse string
    }
    else{
        result+=st[i];
    }
}

return result;
}
int main()
{
cout<<slicing("sleem hashem",0,5,1,true)<<endl;
}