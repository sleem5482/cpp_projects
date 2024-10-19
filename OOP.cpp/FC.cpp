# include<iostream>
#include<cstring>
using namespace std ;
class square ;
class rectangle  
{
    int width, height ;
    public:
 int area (void)
 {
    return width*height;
 }
 void convert(square);
 };
 class square
 {
    int side;
        public:
    void setvalues(int a)
{
   side=a;
}
friend class rectagle;//this is friend class
 friend void rectangle ::convert(square a);
 } ;    
    void rectangle ::convert(square a)
    {
        width =a.side;
        height=a.side;
    }
  
int main ()
{
rectangle c;square sq;
sq.setvalues(4);
c.convert(sq);
cout <<c.area()<<endl;
}