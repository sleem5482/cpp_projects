#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int readAge ()
{
     int age;
    cout << "please ent your age : ";
    cin >> age;
    return age;
}
bool validate_Number_In_Age(int number,int from ,int to){
    return (number>=from && number<=to);
}
int readUntilAge(int from ,int to){
    int age =0;
    do
    {
        age=readAge();
    } while (!validate_Number_In_Age(age,from,to));
    return age;
    
}
void printResault(int age)
{
    cout << "_______________________\n"<< endl;
    cout << "your age is " << age << endl;
    
         
}
int main()
{
   printResault(readUntilAge(18,45));
}