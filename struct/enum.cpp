# include<iostream>
using namespace std ;
enum color {white=1 ,green=2,yello=3,blue=4 ,red=5 ,black=6};
enum gender{male ,female};
enum week{saturday,sunday ,monday ,tuesday ,wednesday,thursday,friday};
int main ()
{int a; cin >>a;color C;C=color(a);
if (C==color::red)
cout<<"hello";
/* color C;gender G;week W;
C=color::red;
W=week::saturday;
G=gender::male;
cout<<C<<"  "<<G<<"  "<<W; */
}