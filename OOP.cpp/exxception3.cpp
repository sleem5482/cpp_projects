# include <iostream>
using namespace std;
class cexception {
    int array[100];
    public:
    cexception (){
        for (int i=0;i<100;i++)
        array[i]=i;
    }
    int getelement( int x){
        if (x>=100) throw xbig();
        else if (x<0 )throw xsmall();
        else return array [x];
    }
    class xbig {
        public:
        xbig(){}
        void big(){
            cout <<"big element \n";
        }
    };
    class xsmall{
        public:
        xsmall(){}
       void small(){
            cout <<"small element \n";
        } 
    };
};

int main (){
  int i=0;cexception a;
  
try
{
    cout<< "chose the element  \n";
    cin >>i;
    cout <<"the element :\t"<<a.getelement(i)<<endl; 
 //throw in get element 
}
catch(cexception::xsmall x)
{
    x.small();
}
catch(cexception::xbig b)
{
    b.big();
}

}