# include<iostream>
#include<cstring>
using namespace std ;
class relational  {
int x ,y,z;
public :
relational (int i=0,int j=0,int k=0){
x=i ;y=j,z=k;
}
int operator==(relational c){
if (x==c.x &&y==c.y &&z==c.z )return true ;
else return false;
}
relational operator+ (int n){
    relational c3;
    c3.x=x+n;
    c3.y=y+n;
    c3.z=z+n;
    return c3;
 }
 void print (){
   cout<<x<<" , "<<y<<" , "<<z; 
}
friend relational operator+ (int n, relational b);
};
relational operator+ (int n, relational b){//friend operator function 
    relational c3;
    c3.x=n+b.x;
    c3.y=b.y+n;
    c3.z=b.z+n;
    return c3;
 }
int main ()
{
 relational a(5,5,5),b(5,5,5),c  ;
if (a==b)cout <<"same same "<<endl;
else cout <<"not same "<<endl; 
c=a+10;
c.print();
c=5+a;//friend operator function 
c.print();
}