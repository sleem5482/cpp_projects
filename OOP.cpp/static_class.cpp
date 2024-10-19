# include <iostream>
# include<cstring>
using namespace std;
class student {
    static int count ;//look static in output 
    char name [20];
    int first ,second ,final ,total,ID;
    public:
    void set (int a1,int a2,int a3)const{
first=a1;second=a2;final=a3;
    }
    static void p(){
        cout<<"\n**********\n";
        cout <<"number of student : "<<count<<endl;
        
        }
    student(){
        strcpy_s(name ,"no name" );
        ID =0 ;
        first=second=final=0;
        count ++;
        p();
    }
};
int student::count =0;
int  main ()
{
student s1,s2;//if not static cout 1 for all (1,2)
cout <<"\n +++++++\n";
student::p();//in static we can prin with two ways(2 )
}