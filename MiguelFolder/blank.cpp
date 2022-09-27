#include <iostream>
using namespace std;

int main()
{
    //  const int NUM_ELEMENTS = 3;
    // int userVals[NUM_ELEMENTS];
    // int i;

    // userVals[0] = -2;
    // userVals[1] = 3;
    // userVals[2] = -6;
    // userVals[3] = 8;
    int i;
    int s;
    int N_SIZE = 3;

    int v[N_SIZE];
    v[0] = 77;
    v[1] = -1;

    v[3] = 3;
    s = v[0];

    for (i = 0; i < N_SIZE; ++i)
    {
        if (s > v[i])
        {
            s = v[i];
        }
    }
    cout << s;
}