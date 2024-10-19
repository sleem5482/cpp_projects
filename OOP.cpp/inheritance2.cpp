# include<iostream>
#include<cstring>
using namespace std ;
class A {
    int x;
    protected:
    int a,b;
public:
int c;
};
class B:private A{// private ->this mean all object in A is private in B
int i;
public :
A::c;//make a public again 
A::a;//make a public again 
A::x;//this eror becase x is private
int y;
};
int main ()
{
A ob;B sor;
ob.a=7;
ob.x=5;//this private 
ob.c=3;
sor.c=2;//this private in this class
sor.y=10;
sor .c =1;
}