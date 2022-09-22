#include <iostream>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 3;
    int userVals[NUM_ELEMENTS];
    int i;

    userVals[0] = -2;
    userVals[1] = 3;
    userVals[2] = -6;
    userVals[3] = 8;

    // The for loop iterates in order, once for each element in the array.
    // If the value of the current element is less than 0, the element is multiplied by -1.
    //  So, the program changes the negative values into positive and outputs them.

    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        if (userVals[i] < 0)
        {
            userVals[i] = -1 * userVals[i];
        }
        cout << userVals[i] << endl;
    }

    return 0;
}