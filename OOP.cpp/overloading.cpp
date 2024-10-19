# include<iostream>
#include<cstring>
using namespace std ;
class triangle  
{
  float width, height ;int id;
    public:
    triangle(float a=0,float b=0){
        width=a;height=b;
    }
    void getdata (){
        cout<<"enter with\n";cin >>width;
        cout <<"enter height \n";
        cin>>height;
    } 
 void showdata (){
    cout<<"width and hight = ("<<width<<","<<height<<")"<<endl;
 }

triangle operator+ (triangle b){//this is operator overloading
    triangle c3;
    c3.width=width+b.width;
    c3.height=height+b.height;
    return c3;
 }
 void adress(){
    cout<<this<<endl;
 }
  void setid(int id){
    this->id=id;//this benefit if you need
 }
 void prid(){
    cout <<id;
 }
 };
     
   
int main ()
{
triangle a(1,2),b(3.5,1.5),c,d;
//a.getdata();
c=a.operator+(b);
c=a+b;//this is operator
c.showdata();
a.adress();//adress of object
d.setid(10);
d.prid(); 
}