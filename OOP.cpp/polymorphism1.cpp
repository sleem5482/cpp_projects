# include<iostream>
#include<cstring>
using namespace std ;
class pro {//this is abstract class because you find peur function
    protected:
    int width ,height ;
public:
void set (int a,int b){
    width=a;height=b;
}
//virtual int area(){return 0;}
virtual int area()=0;//we must this because error//peur function
//if you delete virtual you print all = 0
};
class rectangle :public pro{//this is inheritance
public :
int area(){
    return (width*height);
}
};
class triangle : public pro{//this is inheritance 
    public:
int area(){
    return (width*height/2);
}
};
int main ()
{
rectangle a;triangle b;//;pro c //this error becasue it is abstract class
pro *p1,*p2,*p3;//here it is polymorphism
p1=&a;p2=&b;
p1->set(3,5);
p2->set(5,5);
cout<<p1 ->area()<<endl;//15
cout<<p2 ->area()<<endl;//12

}