#include <iostream>
#include <cstring>
using namespace std;
string readName()
{
    string name;
    cout << "enter your name ";
    getline(cin, name);
    return name;
}
void printName(string name)
{
    cout << "your name is " << name << endl;
}
int main()
{
    printName(readName());
}