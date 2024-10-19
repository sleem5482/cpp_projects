#include <iostream>
#include <cstring>
using namespace std;
struct info
{
    int age;
    bool hasDrivingLinces;
    bool hasRecomend;
};
info read()
{
    info in;
    cout << "please ent your age " << endl;
    cin >> in.age;
    cout << "do you have driver linces?" << endl;
    cin >> in.hasDrivingLinces;
    cout << "do you have recomendation " << endl;
    cin >> in.hasRecomend;
    return in;
}
bool isAccept(info in)
{
    if (in.hasRecomend)
        return true;
    else
        return (in.age > 21 && in.hasDrivingLinces);
}
void printResult(info in)
{
    if (isAccept(in))
        cout << "\n Hired" << endl;
    else
        cout << "rejected" << endl;
}
int main()
{
    printResult(read());
}