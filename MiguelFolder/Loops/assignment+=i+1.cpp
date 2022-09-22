#include <iostream>
using namespace std;
int main()
{
    const int NUM_ELEMENTS = 3;
    int userVals[NUM_ELEMENTS];
    int i;

    userVals[0] = -55;
    userVals[1] = -1;
    userVals[2] = 0;
    userVals[3] = 9;

    // for (i = 0; i < 3; i++)
    // {
    //     userVals[i] = userVals[i + 1];
    //     cout << userVals[i] << endl;
    // }

    for (i = 0; i < 3; i++)
    {
        // first element -55 is being assigned to each element
        userVals[i + 1] = userVals[i];
        cout << userVals[i] << endl;
    }
    // cout << userVals[i] << endl;
    return 0;
}