#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countRepeatedNumbers(const vector<int>& nums) {
    unordered_map<int, int> countMap;
    int repeatedCount = 0;
   
    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] >=3) { 
            repeatedCount++;
        }
    }
   
    return repeatedCount;
}

int main() {
    int a,b ,z,f=b; cin >>a; 
    vector  <  int >  d;
    vector  <  int >  e;
    for (int i =0;i<a ;i++)
    {
       
            cin >>b>>z;if (z>b ) b=z;z=f;
            d.push_back(b);  
            
             e.push_back(z); 
                 
    }
    for (auto r:d)  cout <<r<<" ";
    for (auto l:e)  cout <<l<<endl;
    return 0;
    }
    