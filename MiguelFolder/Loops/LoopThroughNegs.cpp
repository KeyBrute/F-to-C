
#include <iostream>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 4;
    int userVals[NUM_ELEMENTS];
    int i;

    userVals[0] = -2;
    userVals[1] = 4;
    userVals[2] = 5;
    userVals[3] = -8;

    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        if (userVals[i] < 0)
        {
            cout << userVals[i] << endl;
        }
    }

    return 0;
}