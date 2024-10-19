#include <string>
#include <iostream>
#include <vector>
using namespace std;
int getMinimumNumber(vector<int> nums)
{
    int minNum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < minNum)
        {
            minNum = nums[i];
        }
    }
    return minNum;
}

int getMaximumNumber(vector<int> nums)
{
    int minNum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > minNum)
        {
            minNum = nums[i];
        }
    }
    return minNum;
}
int main()
{
    cout << getMinimumNumber({100, 10, 20, -3, 500, 40,-1999})<<endl;//we use {} because this vector
    cout << getMaximumNumber({100, 10, 20, -3, 500, 40,-1999});//we use {} because this vector

}