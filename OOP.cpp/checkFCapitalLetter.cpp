#include <string>
#include <iostream>
using namespace std;
//check if the first letter is capital
bool checkFCapital(string st){
bool allcaps = true ;
for (int i = 0; i < st.length(); i++)
{
 if (i==0 && !(st[i]>='A' && st[i]<='Z'))
 {
   allcaps=false;
 }
 else if (st[i]==' ' && !(st[i+1]>='A' && st[i+1]<='Z'))
 {
   allcaps=false;
 }
 
}
return allcaps;
}
string resault(int num){
    string resault;
    if (num==1)
    {
       resault="this is cpital";
    }
    else{
       resault="this is contain small";
    }
    return resault;
}
int main()
{
    cout <<resault(checkFCapital("Sleem Hashem")) << endl;
    cout <<resault(checkFCapital("Sleem Hashem abdelwahab")) << endl;
    cout <<resault(checkFCapital("Sleem hashem")) << endl;
   
}