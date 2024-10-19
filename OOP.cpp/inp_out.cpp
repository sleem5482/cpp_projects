# include<iostream>
#include<cstring>
using namespace std ;
class non {
private:
int x;
int y;
public:
 non(int a=0,int b=0){
   x=a;y=b; 
}


void print (){
    cout <<"*********************"<<endl;
cout <<"x "<<x <<endl;
cout <<"y "<<y<<endl;

cout <<"*********************"<<endl;
}
friend istream &operator>>(istream &input ,non &b)
{
    input >>b.x>>b.y;
    return input ;
}
friend ostream &operator<<( ostream &output,non &b)
{
    output <<b.x<<" , "<<b.y;
    return output ;
}
operator int (){//b=a error 
    return int (x);//solve error
}
};

int main ()
{
    non a;int b=10;
cin>> a;
cout <<a;
b=a;//b=a error 
cout <<a;

}