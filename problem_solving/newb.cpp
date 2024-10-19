#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    string num;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        int res[b][c];
        getline(cin, num);

        for (int j = 0; j < b; j += c)
        {
            for (int k = 0; k < b; k += c)
            {
                if (num[j][k] == "1")
                {
                    res[j][k] = 1;
                }
                else
                    res[j][k] = 0;
            }
        }
    }
}
