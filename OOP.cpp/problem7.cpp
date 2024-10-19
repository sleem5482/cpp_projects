#include <iostream>
#include <cstring>
using namespace std;
enum enPassFail
{
    pass = 1,
    fail = 2
};
int readMark()
{
    int mark;
    cout << "please ent your mark : ";
    cin >> mark;
    return mark;
}
enPassFail checkMark(int mark)
{
    if (mark >= 50)
        return enPassFail::pass;
         else return enPassFail::fail;
}
void printMark(int mark)
{
    if (checkMark(mark) == enPassFail::pass)
        cout << "\n you passed" << endl;
    else
        cout << "\n you failed " << endl;
}
int main()
{
    printMark(readMark());
}