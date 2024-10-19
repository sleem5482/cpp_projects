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
        cout << int(b[0])+int(b[1])-96<<endl;
    }
}