# include<iostream>
#include<vector>
using namespace std ;

string join(vector<string> names,string sep= ", "){
    string resault;

    for (int i = 0; i < names.size(); i++)
    {
        resault+=names[i];
        if (i !=names.size()-1)
        {
           resault +=sep;
        }
        
    }
    
    return resault;
}
int main()
{
    cout <<join({"sleem","hashem"}, " | ");

}