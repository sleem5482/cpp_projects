#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int readNumber(){
int num ;
cout <<"please ent a number ? "<<endl;
cin>>num;
return num;
}
using namespace std;
int readPower(){
int num ;
cout <<"please ent a power ? "<<endl;
cin>>num;
return num;
}
int powerOfM(int num ,int n){
    if (n==0){
        return 1;
    }
    int p=1; 
    for (int i = 1; i <=n ; i++)
    {
        p *=num;
    }
    return p;
    
}
int main()
{
   cout << endl<<(powerOfM(readNumber(), readPower ()));
}