#include <iostream>
#include <cstring>
using namespace std;
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
void printNumbers(float average)
{
    cout << "\n the average of numbers is : " << average << endl;
}
int main()
{
    int a, b, c;
    readNumbers(a, b, c);
    printNumbers(calcAverage(a, b, c));
}