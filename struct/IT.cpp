# include<iostream>
# include <vector>
using namespace std ;
int main ()
{
vector <int>sleem ={1,2,3,4,5,6,7};
cout<<sleem.at(5)<<endl;
vector<int>::iterator it=sleem.begin();
vector<int>::iterator end=sleem.end()-1;
auto ite=sleem.begin()+2;
cout<<"first element is "<<*it<<endl;
cout<<"last element is "<<*end<<endl;
cout<<"second element is "<<it[1]<<endl;
cout<<" before last element is "<<*(end-1)<<endl;
cout<<"first element is "<<*ite<<endl;
cout<<"first element is "<<*sleem.begin()<<endl;
advance(it ,3); // move to element 3
cout<<"first element is "<<*it<<endl;
sleem.erase (sleem.begin(),sleem.begin()+2);
cout<<"first element is "<<*sleem.begin()<<endl;
cout<<sleem.at(0)<<endl;
}