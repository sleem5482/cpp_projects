#include <string>
#include <iostream>
using namespace std;
void generateLettersWithASCII(char start, char end)
{
    for (int i = start; i <= end; i++)
    {
        cout << char(i) << " | " << i << endl;
    }
}
int main()
{
    generateLettersWithASCII('A', 'z');
}