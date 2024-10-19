#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    int result[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        if (c == 1)
            result[i] = b;
        else
        {
            result[i] = b * c - (c - 1);
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << result[i] << endl;
    }
}