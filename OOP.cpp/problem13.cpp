#include <iostream>
#include <cstring>
using namespace std;
void read_R_A(int &num1, int &num2)
{
    cout << "please ent  width : ";
    cin >> num1;
    cout << "please ent  height : ";
    cin >> num2;
}
float calculate_R_A(float a, float b)
{
    return a * b;
}
void printarea(float a)
{
    cout << "_______________________\n"<< endl;
    cout << " rectangle area is = " << a << endl;
    
         
}
int main()
{
    int a, b;
    read_R_A(a, b);
    printarea(calculate_R_A(a, b));
}