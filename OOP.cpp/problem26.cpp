#include <iostream>
#include <string>
using namespace std;
// we use this to sum all num if num equal 0 stop
float readNumber(string msg)
{
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

float sumNumber()
{
    int sum = 0, num = 0, count = 1;
    do
    {
        num = readNumber("please enter number " + to_string(count));
        if (num == 0)
            break;
        sum += num;
        count++;
    } while (num != 0);
    return sum;
}
int main()
{
cout << endl << sumNumber();
}