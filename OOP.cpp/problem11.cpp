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
int theMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}
void printMax(int max)
{
    cout << "\n the max of three numbers is : " << max << endl;
}
int main()
{
    int a, b, c;
    readNumbers(a, b, c);
    printMax(theMax(a, b, c));
}