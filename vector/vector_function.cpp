# include<iostream>
# include <vector>
using namespace std ;
int main ()
    {
      vector <int>sleem ={1,2,3,4,5,6,7};
cout<<sleem.at(5)<<endl;  
cout<<sleem.size()<<endl;   
cout<<sleem.max_size()<<endl; 
cout<<sleem.capacity()<<endl; 
cout<<sleem.front()<<endl;
cout<<sleem.back ()<<endl;
sleem.clear();  
cout<<sleem.size()<<endl;
if (sleem.empty())
   cout<<"v is empty ";
    else cout<<"v is not empty ";

    }