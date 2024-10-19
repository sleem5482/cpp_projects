# include<iostream>
#include<cstring>
using namespace std ;
class mother {
    public:
    mother(){
        cout <<"empty constructor "<<endl;
    } 
    mother (int a){
        cout <<"parameteries"<<a<<endl;
    }
};
class daughter:public mother{// private ->this mean all object in A is private in B
public:
daughter(){
cout <<"daughter empty \n";}
daughter(int a){
    cout<< "daughter parameter"<<a<<endl;
}
};
class son :public mother{
public:
son (int a): mother(a){
cout <<"son parameter "<<a<<endl;
} 
};
int main ()
{
daughter a(5);//print empty and tybe of the second constructor
son b(10);//print parameter  and it gets the value of int (a)and tybe of the second constructor
}
