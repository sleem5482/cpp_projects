# include<iostream>
#include<vector>
using namespace std ;
//round  floor  ceil
int fRound(double num){
    return num + 0.5 ; //because return int
}
int fFloor(double num){
    return num  ; //because return int
}
int fCeil(double num){
    int number= num; //because correct numbers
    if (num==number)
 return num;
    return num +1 ; //because return int
}
int main()
{
    cout <<fFloor(4.5);
    cout <<fCeil(4.5);
   cout<<fRound(4.5);
    cout <<fCeil(4);

}