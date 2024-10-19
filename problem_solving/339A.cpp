# include<iostream>
# include<algorithm>
using namespace std ;
int main ()
{
string a;cin >>a ; int c=0;int f =a.size ();int b[f];
 for (int i=0; i<f;i+=2)
{
    b [c]=a[i]-'0';c++;
}
int n =(f/2)+1;
sort (b, b+n);
for (int j=0; j<n ;j++)
{
    if (j!=0) cout<<"+";
    cout <<b[j];
}

}