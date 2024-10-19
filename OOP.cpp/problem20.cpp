#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enOddOrEven
{
    odd = 1,
    even = 2
};
int readNum()
{
    int num;
    cout << "please ent your number : ";
    cin >> num;
    return num;
}
enOddOrEven check(int n)
{
    if (n % 2 != 0)
        return enOddOrEven::odd;
    else
        return enOddOrEven::even;
}
int sumOddNumber(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (check(i) == enOddOrEven::odd)
        {
            sum += i;
        }
    }
    return sum;
}
int sumEvenNumber(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (check(i) == enOddOrEven::even)
        {
            sum += i;
        }
    }
    return sum;
}
void print(int n)
{
    cout << "\n======================== :\n";
    cout << "num odd number is " << n<<endl;
}

int main()
{
    print(sumOddNumber(readNum()));
    print(sumEvenNumber(readNum()));
}