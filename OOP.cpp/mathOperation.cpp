#include <string>
#include <iostream>
#include <vector>
using namespace std;

int getOperationNumber(vector<int> nums, char operation = '+')
{
    int resault = 0;
    if (operation == '*')
        resault = 1;
    for (int num : nums)
    {
        switch (operation)
        {
        case '+':
            resault += num;
            break;
        case '-':
            resault -= num;
            break;
        case '*':
            resault *= num;
            break;
        }
    }
    return resault;
}
int main()
{
    cout << getOperationNumber({100, 10}, '+') << endl; // we use {} because this vector
}