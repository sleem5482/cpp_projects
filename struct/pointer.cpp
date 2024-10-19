# include<iostream >
using namespace std ;
int main()
{
  int num=100;
  int *ptr =&num;
  int *p =new int;
  *p=10;
  cout <<*p;
cout <<"value ="<<num<<endl ;
cout <<"adress  "<<&num<<endl;
cout <<"value   "<<*ptr<<endl;
cout <<"adress  "<<ptr<<endl;
cout <<"+++++++++++++++++\n";
*ptr=5000;
cout <<"value ="<<num<<endl ;
cout <<"adress  "<<&num<<endl;
cout <<"value "<<*ptr<<endl;
cout <<"adress  "<<ptr<<endl;
int nums []={10,20,30,40};
int *ptrs = &nums[0] ;
cout <<"adress  "<<&nums[0]<<endl;
cout <<"value   "<<*ptrs<<endl;
cout <<"adress  "<<ptrs<<endl;
cout <<"+++++++++++++++++\n";

cout <<"value ="<<nums[1]<<endl ;
cout <<"adress  "<<&nums[1]<<endl;
cout <<"value "<<*(ptrs +1)<<endl;
cout <<"adress  "<<ptrs+1<<endl;
cout <<"=================\n";
int *a ;
int *b =NULL;
int *c =nullptr;
cout <<a <<"\n"<<b <<c ;
cout <<"\n=================\n";
int d= 70; 
void *ptr1=&d;
cout <<*(int*)ptr1<<endl;
cout <<*static_cast<int*>(ptr1);
}
