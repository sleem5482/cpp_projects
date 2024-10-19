#include <iostream>
#include <cstring>
using namespace std;
struct info
{
    string firstName;
    string secondName;
};
info read()
{
    info in;
    cout << "please ent your first name " << endl;
    cin >> in.firstName;
    cout << "please ent your second name" << endl;
    cin >> in.secondName;
    return in;
}
string GfullName(info in)
{
    string fullName = in.firstName + " " + in.secondName;
    return fullName;
}
void printName(string fullname)
{
    cout << "\n your full name is: " << fullname << endl;
}
int main()
{
    printName(GfullName(read()));
}