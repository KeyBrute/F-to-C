#include <iostream>
using namespace std;

int BigScore(int scoreVals[], int &numVals)
{

    int i;

    int returnVal = scoreVals[0];
    for (i = 0; i < numVals; i++)
    {
        if (scoreVals[i] > returnVal)
        {
            returnVal = scoreVals[i];
        }
    }

    return returnVal;
}
int SmallScore(int scoreVals[], int &numVals)
{

    int i;
    int smallVal = scoreVals[0];

    for (i = 0; i < numVals; i++)
    {
        if (smallVal > scoreVals[i])
        {
            smallVal = scoreVals[i];
        }
    }

    return smallVal;
}

int main()
{
    int NUM_SCORES;

    cout << "Enter array size: ";
    cin >> NUM_SCORES;
    int quizScores[NUM_SCORES];
    int i;
    int result;
    int returnBigScore;
    int returnSmallScore;
    int returnVal;
    int smallVal;
    cout << "Enter array elements: ";

    for (i = 0; i < NUM_SCORES; ++i)
    {
        cin >> quizScores[i];
    }

    returnBigScore = BigScore(quizScores, NUM_SCORES);
    returnSmallScore = SmallScore(quizScores, NUM_SCORES);
    cout << "The range of the array is: " << returnBigScore - returnSmallScore << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10], n, i, max, min;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     cout << "Enter the elements of the array : ";
//     for (i = 0; i < n; i++)
//         cin >> arr[i];
//     max = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//             max = arr[i];
//     }
//     min = arr[0];
//     for (i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//             min = arr[i];
//     }
//     cout << "total : " << max - min;
//     // cout << "Smallest element : " << min;
//     return 0;
// }