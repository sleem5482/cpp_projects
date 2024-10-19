# include<iostream>
using namespace std ;
int main ()
{
    int array[5][5] ,a;
    for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){cin>>array[i][j];
if (array[i][j]==1){
 a=abs(i-2)+abs(j-2);
 }
    }
    }
    cout<<a;
}