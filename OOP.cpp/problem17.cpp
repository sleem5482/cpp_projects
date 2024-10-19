#include <iostream>
#include <string>
#include<cmath>
using namespace std;
void read_triangle_date(float &a , float &b)
{
     
    cout << "please ent triangle 1 : ";
    cin >> a;
    cout << "please ent triangle 2 : ";
    cin >> b;
}
float circle_area_by_triangle(float a ,float b)
{
   float area=(pow(b,2)/4)* (22/7) * ((2*a-b)/(2*a+b));
   return area;
}
void printarea(float a)
{
    cout << "_______________________\n"<< endl;
    cout << "circle area is = " << a << endl;
    
         
}
int main()
{
   float a, b;
  read_triangle_date(a,b);
    printarea(  circle_area_by_triangle(a,b));
}