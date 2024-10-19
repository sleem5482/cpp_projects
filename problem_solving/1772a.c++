#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string b;
    int res[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b[0] + b[2] >= 0)
            res[i] = b[0] + b[2] - 48 * 2;
    }
    for (int i = 0; i < a; i++)
    {
        cout << res[i] << endl;
    }
}