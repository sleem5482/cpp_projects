# include<iostream>
#include<cstring>
using namespace std ;
class arr {
private:
int x[3];
public:
arr(){
    for (int i=0;i<3 ;i++)
    x[i]=i+1;
}
int &operator[](int in){
    return x[in];//this solve error output of arr
}
};
int main ()
{
 arr a;
 cout <<a[2];
 a[2]=20;//we use (&)to edit in the function   
  cout <<a[2];
}