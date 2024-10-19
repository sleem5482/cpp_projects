#include <string>
#include <iostream>
#include <vector>
using namespace std;
//ord : function returns the ASCII value of the first char of a string
//chr : function returns the char value of the first ASCII of a string
int ordF(string st){
    return st[0];
}
char chrF(int num){
    return num;
}
int main()
{
cout<<ordF("s")<<endl;
cout<<chrF(65)<<endl;

}