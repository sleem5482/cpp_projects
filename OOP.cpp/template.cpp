# include <iostream>
using namespace std;
template <class t1,class t2>
t1 sum (t2 a,t1 b){
    return a+b;
};
int main (){
    double x=5.9,y=3.4;//this to double
    cout <<sum(x,y)<<endl;
     int a=5 ,b=7;
    cout <<sum(a,b)<<endl; //if we sum to different type we find error
cout <<sum (x,a)<<endl;//=10 this is no correct because the type of function is int-> to solve
cout <<sum <double>(b,x);
}