
#include <iostream>
using namespace std;

void PassFail(const int scoreVals[], int numVals, int quizThres)
{
    int i;

    for (i = 0; i < numVals; ++i)
    {
        cout << scoreVals[i] << " ";
        if (scoreVals[i] >= quizThres)
        {
            cout << "p";
        }
        else
        {
            cout << "f";
        }
        cout << endl;
    }
}

int main()
{
    //     4
    // 8
    // 3
    // 7
    const int NUM_SCORES = 4;
    int quizScores[NUM_SCORES];
    int i;
    int threshold = 6;

    for (i = 0; i < NUM_SCORES; ++i)
    {
        cin >> quizScores[i];
    }

    PassFail(quizScores, NUM_SCORES, threshold);

    return 0;
}