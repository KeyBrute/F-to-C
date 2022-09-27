
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 4;
    vector<int> userVals(NUM_ELEMENTS);
    unsigned int i;
    int maxVal;

    userVals.at(0) = 1;
    userVals.at(1) = 6;
    userVals.at(2) = 7;
    userVals.at(3) = 4;

    maxVal = userVals.at(0);
    for (i = 0; i < userVals.size(); ++i)
    {
        if (userVals.at(i) >= maxVal)
        {
            maxVal = userVals.at(i);
            cout << maxVal << endl;
        }
    }

    return 0;
}