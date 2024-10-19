# include<iostream>
using namespace std ;
int main ()
{
    int a,r=0; cin >>a;  
    for (int i=0;i<a;i++)
    {
        int b,c,d;
        cin>>b>>c>>d;
        if (b==1&& c==1&&d==1 ||(b==1&&c==1&&d==0)||(b==1&&c==0&&d==1)||(b==0&&c==1&&d==1))
        r++;
        else r;
    }
    cout <<r;
}