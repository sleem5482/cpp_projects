#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readNum()
{
    int num;
    cout << "please ent your number : ";
    cin >> num;
    return num;
}
void printRange(int n)
{
    cout << "\nrange is :\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
void printRange2(int n)
{
    cout << "\n=========== range is ============= :\n";
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    printRange(readNum());
    printRange2(readNum());
}