# include<iostream>
using namespace std;
int main(){
    try {
     int A[10]={2,3,4,5,6,7,8,9};
     int in;cout <<"enter index \n";
     cin >>in;
     if (in <0) throw "error /n";
     if (in >=10 )throw in ;
     for (int i=0 ;i<=in ;i++){cout <<A[i]<<endl;}
    }
    catch (int i){
        cout <<"exception : ";
        cout <<"index "<<i <<" is out of range "<<endl ;
        
    }
    catch (string a){
        cout <<"exception  "<<a;
    }
}