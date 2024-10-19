#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;

    int val[a];
    int b;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int c[b];
        for (int j = 0; j < b; j++)
        {
            cin >> c[j];
        }
        sort(c, c + b);
        c[0] = c[0] + 1;
        int number = 1;
        for (int w = 0; w < b; w++)
        {
            number *= c[w];
        }
        val[i] = number;
    }
    for (int w = 0; w < a; w++)
    {
        cout << val[w] << endl;
    }
}
