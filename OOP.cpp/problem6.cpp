#include <iostream>
#include <cstring>
using namespace std;
int readNumber()
{
    int num;
    cout << "please ent your number : ";
    cin >> num;
    return num;
}
float calculatior(int num)
{
    return (float)num / 2;
}
void printNumber(int num)
{
    string result = "half of  " + to_string(num) + " is " + to_string(calculatior(num));
    cout << result << endl;
}
int main()
{
    printNumber(readNumber());
}