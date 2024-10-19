# include <iostream>
using namespace std;
void f1(){
    int a=0;
    a++;cout<<a<<endl;
    cout <<"\n************\n";
}
void f2(){
   static int a=0;
    a++;cout<<a<<endl;
}
int main ()
{
  f1();f1();f1();
f2();f2();f2();
}