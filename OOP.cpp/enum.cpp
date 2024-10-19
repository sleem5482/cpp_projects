# include<iostream>
#include<cstring>
using namespace std ;
string da[7]={"sat","san","mon","tue","wed","thu","fri"};
enum days {sat=1,san,mon,tue,wed,thu,fri};
class week
{
private:
 days d[7];
public:
void setdays(days w[])
{
    for (int i=0;i<7;i++)
    d[i]=w[i];}
void p()
{
  for (int i=0;i<7;i++)
  cout <<"the num of day  "<<da[i]<<" = "<<d[i]<<endl;
}
};

int main ()
{
    days d[7]= {sat,san,mon,tue,wed,thu,fri};
  week g;
  g.setdays(d);
  g.p();
}