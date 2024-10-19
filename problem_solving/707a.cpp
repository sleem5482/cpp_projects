#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    char c;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cin >> c;
            if (c == 'B' || c == 'W' || c == 'G')
                count++;
        }
    }

    count == a *b ? cout << "#Black&White \n" : cout << "#color \n";
}