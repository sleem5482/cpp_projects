# include<iostream>
using namespace std ;
int main ()
{  
int a[4];
for (int i=0;i<4;i++)
{
    cin >>a[i];
    if(a[i]!=i+1)
    {
cout <<i+1;
break;
    }
}

}
