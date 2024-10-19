# include<iostream>
using namespace std;
string zFill(string st, int width,string fill="0"){
    int len=st.length();
    if (len<width)
    {
         for (int i = 0; i < width-len; i++)
    {
       st=fill+st;
    }
    }
  
    return st;
}
int main ()
{
 cout <<zFill("650",6,"#")<<endl;
}  