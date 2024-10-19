#include <string>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string b;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        string d;
        int check = 97, round = 0;
        if (b.length() > 1)
        {
            for (int j = 0; j < b.length(); j++)
            {
                d += b[j];
                if (b[j] == b[j + 1] && round < 1)
                {

                    do
                    {
                        check++;
                    } while (char(check) == b[j] && check <= 122);
                    d += char(check);
                    round++;
                }
            }
            if (round<1){
                 do
                    {
                        check++;
                    } while (char(check) == b[b.length()-1] && check <= 122);
                    d += char(check);
                    round++;
            }
        }
        else if (b.length() == 1)
        {
            d = b;
            do
            {
                check++;
            } while (char(check) == b[0] && check <= 122);
            d += char(check);
        }
        cout << d << endl;
    }
}