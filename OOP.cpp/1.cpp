# include<iostream>
#include<cstring>
using namespace std ;
class car {
private:
char name[15];
char color[20];
int speed;
int model;
public:
void setname (char n[]){
    strcpy_s(name,n);
}
void setcolor (char n[]){
    strcpy_s(color,n);
}
void setspeed(int n){
    speed=n;
}
void setmodel(int n){
    model=n;
}
char* getname (){//we use (*)becase it araay of char
    return name;
}
char* getcolor (){
    return color; 
}
int getspeed(){
    return speed;
}
int getmodel(){
    return model;
} 
void print (){
    cout <<"*********************"<<endl;
cout <<"name= "<<name <<endl;
cout <<"color= "<<color <<endl;
cout <<"speed= "<<speed <<endl;
cout <<"model= "<< model<<endl;
cout <<"*********************"<<endl;
}
};

int main ()
{
car x;
x.setname("BMW");
x.setcolor("black");
x.setmodel(2020);
x.setspeed(4643);
x.print();
cout <<x.getmodel();
}