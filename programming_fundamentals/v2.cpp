# include<iostream>
# include<vector>
using namespace std ;
int main ()
{
  vector  <  int >  x (10) ; x = { 50,60,70,80};
  cout <<"third element "<<x[2]<<endl;
  cout <<"third element "<<x.at(2)<<endl;
  cout <<"first element = "<<x.front()<<endl;
  cout <<"last element = "<<x.back()<<endl;
  cout <<"size = "<<x.size()<<endl;
   cout <<"capacity = "<<x.capacity()<<endl;
   x.shrink_to_fit();  //use to reduce the capacity
 cout <<"size = "<<x.size()<<endl;
   cout <<"capacity = "<<x.capacity()<<endl;
x.resize(8);
for (int i = 0; i < x.size(); i++) cout <<x[i]<<"  ";
 cout <<"\n====================\n";
 vector <int >a;
 a.assign (10 ,3);  //use to ( how many ; for this number)
 for (int i = 0; i < a.size(); i++) cout <<a[i]<<"  ";
 a.push_back(80);a.push_back(90);//use to add this num in the end
 cout <<endl;
 for (int i = 0; i < a.size(); i++) cout <<a[i]<<"  ";
 cout <<endl;
a.pop_back();//use to remove last element
for (auto i:a)  cout <<i<<"  ";
cout <<"\n====================\n";
vector <int >b;
 b.assign (10 ,3);  //use to ( how many ; for this number)
 for (int i = 0; i < b.size(); i++) cout <<b[i]<<"  "; cout <<endl;
 b.insert( b.begin() ,60); //use to add this num in the first
 for (auto i:b)  cout <<i<<"  ";
 cout <<endl; //use to remove first element 
 b.erase(b.begin());
 for (auto i:b)  cout <<i<<"  ";
 //b.clear () use to remove all element
 cout<<"\n******************\n";
 vector <int >y,z;
 y.assign (10 ,3);z.assign (20 ,5);
 cout<<"y = "; for (auto i:y)  cout <<i<<"  ";
 cout <<endl;  
 cout<<"z = "; for (auto i:z)  cout <<i<<"  "; 
 y.swap(z);// use to swap with two vectors
 cout<<"\n******************\n";
 cout<<"y = "; for (auto i:y)  cout <<i<<"  ";
 cout <<endl;  
 cout<<"z = "; for (auto i:z)  cout <<i<<"  "; 
}