# include<iostream>
#include<cstring>
using namespace std ;//this program highlight destructor and constractor
class student {
    char name [20];
    int ID;
    public:
    student (){
        cout <<"object created \n";
    }
    ~student (){
        cout <<"object destructed \n";
    }
    void set_name_ID(char n[],int id){
        strcpy_s(name ,n);
        ID=id;
    }
    void print ()
    {
        cout <<name<<"\t"<<ID<<endl;
    }
};//end class
void F (student s){
student s1;
s1=s;
s.set_name_ID("sleem",230144);
s.print();
s1.print(); 
}


int main ()
{
student st1,st2;
st1.set_name_ID("mohamed",725363);
st2.set_name_ID("assem",6427512);
cout <<"going to function\n ";
F(st1);//we must object
cout <<"back from function\n ";
st1.print();
}