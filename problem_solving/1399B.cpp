#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a, b, c, d, min1, min2;
    cin >> a;
    long long result[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        long res[b], res2[b];
        min1 = 1000000000, min2 = 1000000000;
        for (int j = 0; j < b; j++)
        {
            cin >> res[j];
            if (res[j] < min1)
                min1 = res[j];
        }
        for (int j = 0; j < b; j++)
        {
            cin >> res2[j];
            if (res2[j] < min2)
                min2 = res2[j];
        }
        long long s = 0;
        for (int j = 0; j < b; j++)
        {

            if (res[j] > min1 && res2[j] > min2)
            {
                c = res[j] - min1;
                d = res2[j] - min2;
                if (c <= d)
                    s = s + c + (d - c);
                else
                    s = s + d + (c - d);
            }
            else if (res[j] > min1)
                s = s + res[j] - min1;
            else if (res2[j] > min2)
                s = s + res2[j] - min2;
        }
        result[i] = s;
    }

    for (int i = 0; i < a; i++)
    {
        cout << result[i] << endl;
    }
}