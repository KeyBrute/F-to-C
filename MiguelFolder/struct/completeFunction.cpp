#include <iostream>
using namespace std;

struct ElapsedWeekDay
{
    int weeksVal;
    int daysVal;
};

ElapsedWeekDay ConvertToWeeksAndDays(int totalDays)
{
    ElapsedWeekDay tempVal;

    /* Your code goes here */
    tempVal.daysVal = totalDays % 7;
    tempVal.weeksVal = totalDays / 7;
    return tempVal;
}

int main()
{
    ElapsedWeekDay elapsedDays;
    int totalDays;

    cin >> totalDays;

    elapsedDays = ConvertToWeeksAndDays(totalDays);

    cout << elapsedDays.weeksVal << " weeks and " << elapsedDays.daysVal << " days" << endl;

    return 0;
}