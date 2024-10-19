#include <iostream>
#include <string>
#include <cmath>
// to find how many pennies and dolars
using namespace std;
struct piggyRank
{
    int pennies, nickles, dimes, quarters, dollars;
};

piggyRank readPiggyContent()
{
    piggyRank pr;
           
         cout<< "please enter a total pennies " << endl;
    cin >> pr.pennies;
    cout << "please enter a total nickles " << endl;
    cin >> pr.nickles;
    cout << "please enter a total dimes " << endl;
    cin >> pr.dimes;
    cout << "please enter a total quarters " << endl;
    cin >> pr.quarters;
    cout << "please enter a total dollars " << endl;
    cin >> pr.dollars;
    return pr;
}
int calculateTotalPennies(piggyRank PR)
{
    int total = 0;
    total = PR.pennies * 1 + PR.nickles * 5 + PR.dimes * 10 + PR.quarters * 25 + PR.dollars * 100;
    return total;
}
int main()
{
    int totalpennies = calculateTotalPennies(readPiggyContent());
    cout << "total pennie = " << totalpennies << endl;
    cout << "total dolars = " << (float)totalpennies / 100 << endl;
}