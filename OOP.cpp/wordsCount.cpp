#include <string>
#include <iostream>
using namespace std;
// count words in the string 
int WordCount(string st ,char sep =' '){
int count=0;
bool inWord =false;
for (int i = 0; i < st.length(); i++)
{
    if (st[i] ==sep){
if (inWord)
{
   count++;
   inWord=false;
}

    }
    else{
         inWord=true;
    }
}
if (inWord)
{
    count++;
}
return count;
}

int main()
{
   cout<<WordCount("sleem hashem")<<endl;
   cout<<WordCount("sleem#hashem", '#')<<endl;
   cout<<WordCount("sleem hashem ")<<endl;
}