# include<iostream>
using namespace std ;
int main ()
{
    int b[3],a;
     cin >>a;int x[a];
    for (int i=0;i<a; i++)
    {  
        for (int j = 0; j < 3; j++)
        {
            cin >>b[j];
        }
        if((b[0]==b[1]) ||(b[1]==b[2] )||(b[0]>b[1]&&b[1]>b[2])||(b[2]>b[1]&&b[1]>b[0])) x[i]=abs(b[1]-b[0])+abs(b[1]-b[2]);
       else if((b[0]==b[2])||((b[2]>b[0]&&b[0]>b[1]) ||(b[1]>b[0]&&b[0]>b[2])) ) x[i]=abs(b[0]-b[1])+abs(b[0]-b[2]);
       else if((b[1]>b[2]&&b[2]>b[0])||(b[0]>b[2]&&b[2]>b[1])) x[i]= abs(b[2]-b[0])+abs(b[2]-b[1]);
    }
     for(int i=0;i<a ;i++)
     {
  cout <<x[i]<<endl;
     }
}