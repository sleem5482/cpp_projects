#include <iostream>
#include <cstring>
using namespace std;
void readNumbers(int &num1, int &num2)
{
    cout << "please ent  number A : ";
    cin >> num1;
    cout << "please ent  numberB : ";
    cin >> num2;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void printNumber(int a, int b)
{
    cout << " numbers one is : " << a << endl;
    cout << "  numbers two is : " << b << endl;
    cout << "_______________________\n"<<endl;
}
int main()
{
    int a, b;
    readNumbers(a, b);
    printNumber(a, b);
    swap(a, b);
    printNumber(a, b);
}