# include<iostream>
#include<cstring>
using namespace std ;
class unary {
int x ,y;
public :
unary (int i=0,int j=0){
x=i ;y=j;
}
void show (){
cout <<x<<"\t"<<y<<endl;}
unary operator++(){//this is prefix
    x++;y++;
    return *this;//this is a benefit of this
}
unary operator++(int){
    unary t;
    t=*this;
    x++;y++;
    return t;
}
unary operator-(){
   x= -x;
    y=  -y;
    return*this;
}
bool operator!(){
    return(x==0 &&y==0);
}
unary operator+= (unary b)
{
    x+=b.x;
    y+=b.y;
    return*this; 
}
};
int main ()
{
    unary v(5,6),k;
    v++;//postfix(6,7) 
    k=++v; k.show();//prefix =(6,7)
    v.show();//in memory =(7,8)
   cout <<"\n***************\n";
   unary a(5,23);
//    -a;
//    a.show();
//    if (!a)cout<<"true";
//    else cout <<"false";
//    unary x(5,7),y(12,5);
//    x+=y;//x,operator (y)
//    x.show();
}