# include<iostream>
#include<vector>
using namespace std ;
//check if element in this array
bool in_array(vector<int> arr , int target){
for (int i = 0; i < arr.size(); i++)
{
    if (arr[i]== target){
        return true;
    }
}
return false;
}
string resault(int num){
    string resault;
    if (num==1)
    {
       resault="this is found";
    }
    else{
       resault="this is not found";
    }
    return resault;
}

int main()
{
    cout <<resault(in_array({1,2,3,4,5,6},4)) <<endl;
    cout <<resault(in_array({1,2,3,4,5,6},7))  <<endl;
   cout<<boolalpha;//to change one and zero to true and false
    cout <<in_array({1,2,3,4,5,6},7)  <<endl;

}