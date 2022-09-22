
#include <iostream>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 4;
    int userVals[NUM_ELEMENTS];
    int i;
    int maxVal;

    userVals[0] = 1;
    userVals[1] = 5;
    userVals[2] = 7;
    userVals[3] = 4;

    maxVal = userVals[0];
    // 4 is skipped because 4 >= 7 is false;
    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        if (userVals[i] >= maxVal)
        {
            maxVal = userVals[i];
            cout << maxVal << endl;
        }
    }

    return 0;
}