#include <iostream>
#include <cstring>
using namespace std;
enum enPassFail
{
    pass = 1,
    fail = 2
};
void readNumbers(int &num1, int &num2, int &num3)
{
    cout << "please ent  number 1 : ";
    cin >> num1;
    cout << "please ent  number 2 : ";
    cin >> num2;
    cout << "please ent  number 3 : ";
    cin >> num3;
}
int sumOfNumbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
float calcAverage(int num1, int num2, int num3)
{
    return (float)sumOfNumbers(num1, num2, num3) / 3;
}
enPassFail checkAverage(float average)
{
    if (average >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}
void printNumbers(float average)
{
    cout << "\n the average of numbers is : " << average << endl;
    if (checkAverage(average) == enPassFail::pass)
        cout << "\n you passed " << endl;
    else
        cout << " \n you fail " << endl;
}
int main()
{
    int a, b, c;
    readNumbers(a, b, c);
    printNumbers(calcAverage(a, b, c));
}