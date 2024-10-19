#include <iostream>
#include <cmath>
using namespace std;
//calc how many hours you work by seconds
enum weekDays {sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7};

int readNumber(string msg,int from,int to){
int number=0;
do
{
   cout<<msg<<endl;
   cin>>number;
} while (number<from || number>to);
return number;
}
weekDays readDayOfWeek(){
return (weekDays)readNumber("please ent day number ",1,7);
}
string getDaysOfWeeks(weekDays day){
    switch (day)
    {
    case weekDays::sat:
    return "saturday";
        break;
        case weekDays::sun:
    return "sunday";
        break;
        case weekDays::mon:
    return "monday";
        break;
        case weekDays::tue:
    return "tuesday";
        break;
    case weekDays::thu:
    return "thursday";
        break;
        case weekDays::wed:
    return "wednesday";
        break;
        case weekDays::fri:
    return "friday";
        break;
    default:
    return "not found";
        break;
    }
}
int main()
{


cout <<endl<<getDaysOfWeeks(readDayOfWeek()) <<endl;


}