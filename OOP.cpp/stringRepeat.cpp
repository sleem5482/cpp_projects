# include<iostream>
using namespace std;
string strRepeat(string word, int number_repeat=2 ,string seperator=",",bool showEnd=false){
    string resault;
    for (int i = 0; i < number_repeat; i++)
    {
        resault+=word;
        if (i<number_repeat-1)
        {
            resault+=seperator;
        }
        
    }
    if (showEnd)
    {
        resault+=seperator;
    }
    
    return resault;
}
using namespace std ;
int main ()
{
 cout <<strRepeat("sleem")<<endl;
}  