#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readNumber(){
int num ;
cout <<"please ent a number ? "<<endl;
cin>>num;
return num;
}
using namespace std;
int numInRange(int F ,int T){
int grade ;

do
{
   cout<<"please ent a grade between 0 to 100 "<<endl;
   cin >>grade;
} while (grade < F ||grade >T );
return grade;
}
char gradeLetter (int grade ){
    if (grade>=90) return 'A';
    else if (grade>= 80 )return 'B';
    else if (grade>= 70 )return 'C';
    else if (grade>=60 )return 'D';
    else if (grade>= 50 )return 'E';
    else return 'F';
}
int main()
{
   cout << endl<< gradeLetter (numInRange(0,100))<<endl;
}