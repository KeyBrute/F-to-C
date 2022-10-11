#include <iostream>
using namespace std;

int main()
{
    const int SCORES_SIZE = 4;
    int oldScores[SCORES_SIZE];
    int newScores[SCORES_SIZE];
    int i;

    for (i = 0; i < SCORES_SIZE; ++i)
    {
        cin >> oldScores[i];
    }

    /* Your solution goes here  */
    // left shifts 10 to the end so its 20, 30, 40, 10
    newScores[SCORES_SIZE - 1] = oldScores[0];
    for (i = 0; i < SCORES_SIZE - 1; ++i)
    {
        newScores[i] = oldScores[i + 1];
    }

    for (i = 0; i < SCORES_SIZE; ++i)
    {
        cout << newScores[i] << " ";
    }
    cout << endl;

    return 0;
}