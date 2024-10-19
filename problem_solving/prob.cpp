#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int result[a];
    for (int i = 0; i < a; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // Put the numbers into an array and sort it
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);

        // We have at most 5 increments to distribute
        int k = 5;

        // Increment the smallest number as much as possible
        while (k > 0)
        {
            if (arr[0] <= arr[1] && arr[0] <= arr[2])
            {
                arr[0]++;
            }
            else if (arr[1] <= arr[0] && arr[1] <= arr[2])
            {
                arr[1]++;
            }
            else
            {
                arr[2]++;
            }
            k--;
            result[i] = arr[0] * arr[1] * arr[2];
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}