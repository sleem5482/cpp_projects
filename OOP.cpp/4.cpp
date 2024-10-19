# include<iostream>
# include <cstring>
using namespace std ;
class  phone 
{
    private:
char name[20];
string model ;
int price ;
public:
~phone ()//this is destructor 
{
    cout <<"the end" <<endl;
}
void setNMP (char a[],string b ,int c)
{
    strcpy_s(name,a);
  model = b;
 price =  c;
}
void print ();
phone();
};
void phone ::print ()
{
    cout <<"name phone is "<<name<<endl;
    cout <<"model phone is "<<model<<endl;
    cout <<"price phone is "<<price<<endl;
}
phone::phone()
{
cout <<"contact phone \n";
}
int main ()
{
   phone x;
   x.setNMP("samsung","a34",12000) ;
   x.print();
}