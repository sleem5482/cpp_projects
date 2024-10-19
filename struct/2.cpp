# include<iostream>
#include<cstring>
using namespace std ;
struct exam
{
    float first;
    float second ;
    float final;
};
class subject 
{
char name[10];
exam exam ;
public:
subject(){
    strcpy_s(name ,"no name");
    exam ={0,0,0};
}
subject(char n[],float fa,float s,float fi){
    strcpy_s(name ,n);
    exam={fa,s,fi};
}
float total()
{
    return exam.final+exam.first+exam.second;
}
void print ()
{
    cout <<"the subject = "<<name<<endl
    <<"first exam = "<<exam.first<<endl
    <<"second exam = "<<exam.second<<endl
    <<"final exam = "<<exam.final<<endl
    <<"the total is = "<<total()<<endl;
}
};


int main ()
{
subject e("oop",25,24,49);
e.print();
   
}