#include <string>
#include <iostream>
using namespace std;
string to_upper_case(string st){
    string resault;
    for(char ch:st){
        if (ch>='a' && ch<='z'){
            ch-=32;//(a - A =32)
        }
resault+=ch;
    }
    return resault;
}
string to_lower_case(string st){
    string resault;
    for(char ch:st){
        if (ch>='A' && ch<='Z'){
            ch+=32;//(a - A =32)
        }
resault+=ch;
    }
    return resault;
}

string swap_case(string st){
    string resault;
    for(char ch:st){
        if (ch>='A' && ch<='Z'){
            ch+=32;}
           else if (ch>='a' && ch<='z'){
            ch-=32;
        }
        
resault+=ch;
    }
    return resault;
}

int main()
{
    cout <<to_upper_case("Sleem") << endl;
    cout <<to_lower_case("SLEEm") << endl;
    cout <<swap_case("SLEEm") << endl;
}