# include<iostream>
using namespace std;
string strReverse(string st){
    int len=st.length();
     string resault;
         for (int i = len; i >= 0 ; i--)
    {
       resault+=st[i];
    }
    return resault ;
    
}
int main ()
{
 cout <<strReverse("sleem hashem")<<endl;
}  