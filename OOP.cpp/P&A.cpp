# include<iostream>
#include<cstring>
using namespace std ;
class student {
    char name [20];
    int ID;
    public:
    student (){
        cout <<"empty  \n";
        strcpy_s(name ,"no name");
        ID=0;
    }
    student (char n[],int id){
cout <<"parameter \n ";
        strcpy_s(name ,n);
        ID=id;
    }
    void print ()
    {
        cout <<name<<"\t"<<ID<<endl;
    }
};

int main ()
{
    student y("sleem",230144),z("mohamed",3874),*p;
   student arr[3]={y,z};
   p=arr;
   for (int i=0;i<3;i++)
   {
   //arr[i].print();
   (p+i)->print();
}
}