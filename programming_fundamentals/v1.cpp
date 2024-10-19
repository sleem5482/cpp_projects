# include<iostream>
# include<vector>
using namespace std ;
int main ()
{
  vector  <  int >  v (10) ; v = { 11 ,12,13,14,15,16,17};
  cout <<"size = "<<v.size()<<endl;
  cout <<"capacity = "<<v.capacity()<<endl;
  cout <<"max size = "<<v.max_size()<<endl;
  cout <<"\n====================\n";
  cout <<v[0]<<"  ";
   cout <<v[1]<<"  ";
     cout <<v[2]<<"  ";
      cout <<v[3]<<"  ";
       cout <<v[4]<<"  ";
      cout <<v[5]<<"  ";
    cout <<v[6]<<"  ";
 v[3]=140;
  cout <<endl;
   cout <<v[0]<<"  ";
    cout <<v[1]<<"  ";
     cout <<v[2]<<"  ";
      cout <<v[3]<<"  ";
    cout <<v[4]<<"  ";
 cout <<v[5]<<"  ";
   cout <<v[6]<<"  "; 
   cout <<"\n====================\n";// by using for 
   v={1,2,3,4,5,6,7,8,9,10,11,12};
   for (int i = 0; i < v.size(); i++) cout <<v[i]<<"  ";
   cout <<"\n====================\n";// by using iterator
     vector  <  int >  d= {100,200,300,400,500}; 
    for (auto i:d)  cout <<i<<endl;
     cout <<"\n====================\n";// by using pointers
     for (auto j=d.begin();j !=d.end();j++) 
     cout<<*j<<endl;
     cout <<"\n====================\n"; //by using in character 
  vector  <  char >  c  ={ 'a' ,'b','m','x','w'};
 cout <<c[0]<<"  ";
    cout <<c[1]<<"  ";
     cout <<c[2]<<"  ";
      cout <<c[3]<<"  ";
    cout <<c[4]<<"  ";
    cout <<endl;
c[2]='#';
cout <<c[0]<<"  ";
    cout <<c[1]<<"  ";
     cout <<c[2]<<"  ";
      cout <<c[3]<<"  ";
    cout <<c[4]<<"  ";
}