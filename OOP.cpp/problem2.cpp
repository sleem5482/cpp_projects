#include <iostream>
#include <cstring>
using namespace std;
enum enNumberType
{
    odd = 1,
    even = 2
};
int read()
{
    int num;
    cin >> num;
    return num;
}
enNumberType checkNumber(int num)
{
    int result = num % 2;
    if (result == 0)
        return enNumberType::even;
    else
        return enNumberType::odd;
}
void printNumberTybe(enNumberType NumberTybe)
{
    if (NumberTybe == enNumberType::even)
        cout << "\n the number is even \n";
    else
        cout << "\n the number is odd \n";
}
int main()
{
    printNumberTybe(checkNumber(read()));
}