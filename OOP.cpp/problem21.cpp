#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readNum(string msg){
int num ;
do
{
   cout <<msg<<endl;
   cin >>num;
} while (num < 0);
return num;
}



int factorial (int num){
int f=1;
for (int i=num;i>=1;i-- ){
    f *=i;
}
return f ; 
}

int main()
{
   cout << factorial(readNum("enter N ? "))<<endl;
}