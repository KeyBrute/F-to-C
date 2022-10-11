#include <iostream>
using namespace std;

struct BirthMonthDay
{
    int numMonths;
    int numDays;
};

/* Your code goes here */
BirthMonthDay SetBirth(int monthVal, int dayVal)
{
    BirthMonthDay myBirthday;
    myBirthday.numMonths = monthVal;
    myBirthday.numDays = dayVal;
    return myBirthday;
}

int main()
{
    BirthMonthDay myBirthday;
    int monthVal;
    int dayVal;

    cin >> monthVal >> dayVal;

    myBirthday = SetBirth(monthVal, dayVal);

    cout << "I was born on " << myBirthday.numMonths << "/" << myBirthday.numDays << "." << endl;

    return 0;
}