# include<iostream>
#include<cstring>
using namespace std ;
class pro {
    protected:
    int width ,height ;
public:
void set (int a,int b){
    width=a;height=b;
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
rectangle a;triangle b;
a.set(5,10);
b.set(5,6);
cout<<a.area()<<endl;
cout<<b.area()<<endl;
}