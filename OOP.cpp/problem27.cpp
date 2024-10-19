#include <iostream>
#include <cmath>
using namespace std;
// to find number is prime or not 
enum primeOrNot {prime =1 , notPrime =2};

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
primeOrNot check (int number ){
    int m =round(number/2);//round to the nearest value 
    for (int i = 2; i <=m; i++){
        if (number % i == 0) return primeOrNot::notPrime;
    }
    return primeOrNot::prime;
}
void printNType(int number)
{
    switch (check(number))
    {
    case primeOrNot::prime :
     cout <<"the number is prime ";
        break;
    
    case primeOrNot::notPrime :
     cout <<"the number is not prime ";
        break;
}
}
int main()
{
printNType (readPNumber("please ent positive num ? "));
}