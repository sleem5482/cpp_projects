#include <iostream>
#include <cmath>
using namespace std;
//calc how many hours you work by seconds
struct strTaskDuration
{
   int numberOfDays,numberOfHours,numberOfMinutes,numberOfSeconds;
};

int readPNumber(string msg)
{
    float number = 0;
    do
    {
        cout << msg << endl;
    cin >> number;
    } while (number<=0);
  
    return number;
}
strTaskDuration readTaskDuration(){
    strTaskDuration taskDuration;
    taskDuration.numberOfDays=readPNumber("please enter number of days");
    taskDuration.numberOfHours=readPNumber("please enter number of hours");
    taskDuration.numberOfMinutes=readPNumber("please enter number of Minutes");
    taskDuration.numberOfSeconds=readPNumber("please enter number of Seconds");
return taskDuration;
}
int taskDurationInSeconds(strTaskDuration taskDuration){
    int durationInSeconds=0;
    durationInSeconds+=taskDuration.numberOfDays*24*60*60;
    durationInSeconds+=taskDuration.numberOfHours*60*60;
    durationInSeconds+=taskDuration.numberOfMinutes*60;
    durationInSeconds+=taskDuration.numberOfSeconds;
return durationInSeconds;
}
int main()
{


cout <<endl<<"Task duration in second : "<<taskDurationInSeconds(readTaskDuration()) <<endl;


}