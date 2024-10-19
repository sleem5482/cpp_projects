#include <string>
#include <iostream>
using namespace std;
string subString(string st ,int start ,int end,bool inc_end =true,bool countSpace= true){
    string resault;
    for (int i = start;inc_end? i <= end : i<end; i++)
    {
        if (!countSpace && st[i]==' '){
    end++;  
        }
        resault +=st[i];
    }
    
    return resault;
}

int main()
{
    cout <<subString("Sleem hashem",0,5,true,false) << endl;
   
}