# include<iostream>
using namespace std ;
int main ()
{
    int x,y,z ;
     cin>> x>>y>>z ;
    int max=x;
    cout <<"ent three num to find max" <<endl;
    if (y >max) max =y ;
    if (z>max ) max =z ;
    cout << "the max is "<<max ;
}