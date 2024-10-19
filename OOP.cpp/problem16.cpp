#include <iostream>
#include <string>
#include<cmath>
using namespace std;
float read_Radious()
{
     float a;
    cout << "please ent  radious : ";
    cin >> a;
   return a;
}
float circle_area(float a)
{
   float area=pow(a,2)* (22/7);
   return area;
}
void printarea(float a)
{
    cout << "_______________________\n"<< endl;
    cout << "circle area is = " << a << endl;
    
         
}
int main()
{
   
  
    printarea(  circle_area(read_Radious()));
}