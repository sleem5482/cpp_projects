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

virtual int area()=0;//we must this because error//peur function
void printarea (){//polymorphism
cout <<this->area()<<endl;
}
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
p1=&a;p2=&b;//early binding
p1->set(3,5);
p2->set(5,5);
p1 ->printarea();//15 
p2 ->printarea();//12
pro *p[2]={&a,&b};//we must the tybe is abstract class 
for (int  i = 0; i < 2; i++)
{
    p[i]->area();//undefined in the class pro
    p[i]->printarea();//late binding
}

}