# include<iostream>
#include<cstring>
using namespace std ;
class tri ;
class rectangle  
{
    int width, height ;
    public:
  friend  int sum(tri t,rectangle r);
    void setvalues(int a,int b)
{
    width=a;height =b;
}
 };
 class tri
 {
    int W,H;
 friend int sum(tri t,rectangle r);
        public:
    void setvalues(int a,int b)
{
    W=a;H =b;
}
 } ;    
    int sum(tri t,rectangle r){
        return t.W +r.width;
    }
  
int main ()
{
rectangle c;tri l;
c.setvalues(2,3);
l.setvalues(5,10);
cout <<sum (l,c)<<endl;
}