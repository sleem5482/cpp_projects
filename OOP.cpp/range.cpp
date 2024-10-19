# include<iostream>
#include<vector>
using namespace std ;
vector<int> Range(int start , int end ,bool includeEnd=false){
    int vecSize=end-start;
    if (includeEnd)
     vecSize=end-start+1;
    vector<int> result(vecSize);
    for (int i = 0; i < vecSize; i++)
    {
        result[i] =start+i;
    }
    
    return result;
}
int main()
{
    vector<int>result= Range(5, 12,true);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    

}