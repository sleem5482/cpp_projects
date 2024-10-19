# include<iostream>
using namespace std ;
class person
{
private:
string name ;
string gender ;
int age;
public:
person (){//this is empty constructor
   cout <<"personal contact"<<endl;
   name ="sleem";
   age =19;//we prefer use constractor to add initial value
   gender ="male";
}
person (int b){
cout <<"this is prameter constructor "<<endl;
}
void setname(string n){
   name=n;
}
void setgender (string h){
   gender=h ;
}
void setage(int n){
   age =n;
}

void print (){
cout <<"*********+++++++++++********"<<endl;
cout<<"name = "<<name <<endl;
cout<<"gender = "<<gender<<endl;
cout<<"age = "<<age<<endl;
cout <<"*********+++++++++++********"<<endl;
}

};

int main ()
{  
person x;
person y(10);//prameter constructor
/*x.setname("sleem hashem");
x.setgender("male");
x.setage(19);*/
x.print();
}