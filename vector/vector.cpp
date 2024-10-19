# include<iostream>
# include <vector>
using namespace std ;
int main ()
{
vector <int>sleem ={1,2,3,4,5,6,7};
cout<<sleem.at(5)<<endl;
sleem.push_back( 30);
cout<<sleem.size()<<endl;
sleem.at (5)=50;
cout<<sleem.at(5)<<endl;
cout<<sleem.at(7);
sleem.pop_back ();

cout<<sleem.at(7);
}