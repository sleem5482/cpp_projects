#include <iostream>
#include <string>
#include <cmath>

using namespace std;
enum enOperation{add='+',subtract='-',multipliy='*',divide='/'};
float readNumber (string msg){
    float number=0;
    cout <<msg<<endl;
    cin>>number;
    return number;
}
enOperation readOpType()
{
    char OT='+';
           
         cout<< "please enter Operation type ( + , - , * , / )?"<< endl;
    cin >> OT;
  
    return (enOperation) OT;
}
float calculate(float n1,float n2 ,char op)
{
   switch (op)
   {
   case enOperation::add :
    return n1+n2;
    break;
    case enOperation::divide :
    return n1 / n2;
    break;
   case enOperation::multipliy :
    return n1*n2;
    break;
    default :
    return n1-n2;
    
  
   }
}
int main()
{
    float num1 = readNumber("please enter a first number");
    float num2 = readNumber("please enter a second number");

    enOperation opType=readOpType();
    cout<<endl <<"result = "<<calculate(num1,num2,opType);

}