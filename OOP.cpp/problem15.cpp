#include <iostream>
#include <string>
#include<cmath>
using namespace std;
void read_R_A(float &num1, float &num2)
{
    cout << "please ent  diagonal 1 : ";
    cin >> num1;
    cout << "please ent  diagonal 2 : ";
    cin >> num2;
}
float triangle_area(float a, float b)
{
   float area=0.5 *a*b;
   return area;
}
void printarea(float a)
{
    cout << "_______________________\n"<< endl;
    cout << " rectangle area is = " << a << endl;
    
         
}
int main()
{
    float a, b;
    read_R_A(a, b);
    printarea(triangle_area(a, b));
}