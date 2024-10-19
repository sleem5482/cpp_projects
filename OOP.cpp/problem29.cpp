#include <iostream>
#include <cmath>
using namespace std;
//ent hours to find days and weeks
float readPNumber(string msg)
{
    float number = 0;
    do
    {
        cout << msg << endl;
    cin >> number;
    } while (number<=0);
  
    return number;
}
float hoursToDays(float numberOfHours)
{
  return (float)numberOfHours / 24; 
}
float hoursTOWeeks(float numberOfHours)
{
  return (float)numberOfHours / 24 / 7; 
}
float daysTOWeeks(float numberOfDays)
{
  return (float)numberOfDays / 7; 
}

int main()
{
float numberOfHours= (readPNumber("please ent number of hours ? "));
float numberOfDays= hoursToDays(numberOfHours);
float numberOfWeeks= daysTOWeeks(numberOfDays);

cout <<endl;
cout <<"total hours = "<<numberOfHours<<endl;
cout <<"total days "<<numberOfDays<< endl;
cout <<"total weeks "<<hoursTOWeeks(numberOfHours)<< endl;

}