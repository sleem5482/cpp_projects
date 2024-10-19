# include<iostream >
# include<vector>
using namespace std ;
int main() 
{
    vector<int> sleem ={1,2,3,4,5,6,7,};
    vector<int>::iterator it ;
    for (it= sleem.begin(); it !=sleem.end(); it++)
    cout<<*it <<endl;
    cout <<"=============\n";
for (int w : sleem)
cout <<w << endl ;
cout <<"==============\n";
int a [] ={1,2,10,77,9,44};
for (int y :a)
cout<<y <<endl;

}