# include<iostream>
#include<cstring>
using namespace std ;
class name {
    char n[20];
    protected:
    void setn (char a[]){
        strcpy_s(n,a);
    }
    void printn (){
        cout <<n<<"  ";
    }
};
class ID{
    int id;
    protected:
    void seti (int i){
        id =i;
    }
    void printi (){
        cout <<id<<endl;
    }  
};
class student: public name,public ID{//this is multiple inheritance
public:
student(char Name[],int id){
    setn(Name);
    seti(id);
}
void prints (){
    printn();
    printi(); 
}
};
int main ()
{
student st("sleem",230144);
st.prints();
}
