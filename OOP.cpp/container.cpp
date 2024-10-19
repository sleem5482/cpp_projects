# include<iostream>
#include<vector>
using namespace std ;
vector<string> fillVector(int num , string val){
    vector<string> result(num);
    for (int i = 0; i < num; i++)
    {
        result[i] =val;
    }
    
    return result;
}
int main()
{
    vector<string>result= fillVector(5, "sleem");
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    

}