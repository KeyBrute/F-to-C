#include <iostream>
using namespace std;

int FindScore(const int scoreVals[], int numVals)
{
    int i;
    int returnVal = scoreVals[0];

    for (i = 1; i < numVals; ++i)
    {
        if (scoreVals[i] > returnVal)
        {
            returnVal = scoreVals[i];
        }
    }

    return returnVal;
}

int main()
{
    //     10
    // 9
    // 7
    const int NUM_SCORES = 3;
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