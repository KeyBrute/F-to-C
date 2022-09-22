#include <iostream>
using namespace std;

int main()
{
    const int SCORES_SIZE = 4;
    int lowerScores[SCORES_SIZE];
    int i;

    for (i = 0; i < SCORES_SIZE; ++i)
    {
        cin >> lowerScores[i];
    }

    /* Your solution goes here  */
    for (i = 0; i < SCORES_SIZE; ++i)
    {
        lowerScores[i] -= 1;
        if (lowerScores[i] <= 0)
        {
            lowerScores[i] = 0;
        }
    }

    for (i = 0; i < SCORES_SIZE; ++i)
    {
        cout << lowerScores[i] << " ";
    }
    cout << endl;

    return 0;
}