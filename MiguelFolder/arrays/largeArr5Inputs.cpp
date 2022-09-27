#include <iostream>
using namespace std;

int FindScore(const int scoreVals[], int numVals)
{
    //  3
    // 2
    // 8
    // 4
    // 6
    int i;

    // 3
    int returnVal = scoreVals[0];
    // 1 < 3
    for (i = 1; i < numVals; ++i)
    {
        if (scoreVals[i] > returnVal)
        {
            returnVal = scoreVals[i];
        }
    }
    // 3rd element is 8
    return returnVal;
}

int main()
{
    const int NUM_SCORES = 5;
    int quizScores[NUM_SCORES];
    int i;
    int returnScore;

    for (i = 0; i < NUM_SCORES; ++i)
    {
        cin >> quizScores[i];
    }

    returnScore = FindScore(quizScores, NUM_SCORES);
    cout << returnScore << endl;

    return 0;
}