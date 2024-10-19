# include<iostream>
#include<cstring>
using namespace std;
struct distance
{
int feet;
float inches;
};
distance add_distace (distance d1,distance d2)
{
distance result ;
result.feet=d1.feet+d2.feet;
result .inches=d1.inches+d2.inches;
return result;
}

int main ()
{
    distance x,y,z ;
    cout<<"enter feet value \n";
    cin >>x.feet>>y.feet;
    cout <<"enter inches value \n";
    cin >>x.inches>>y.inches;
    z= add_distace(x,y);
    cout <<"z.feet= "<<z.feet<<"z.inches = "<<z.inches;
}