#include <iostream>
#include "testScores.h"

using namespace std;

int main()
{
    // variable declaration
    int size;
    float value, averageNum;

    cout << "Enter the amount of test score(s): ";
    cin >> size;

    float *score = new float[size];
    // ask user to input values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the test score: ";

        cin >> value;

        if (value < 0)
        {
            cout << "Only positive Numbers please";
            i--;
        }
        else
        {
            // pointer
            *(score + i) = value;
        }
    }

    srtAry(score, size);
    averageNum = avgScore(score, size);

    // display the sorted array
    cout << endl
         << "The sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(score + i) << " ";
    }

    // displays the result
    cout << endl
         << endl
         << "The average score is: " << averageNum << endl;

    delete[] score;

    return 0;
}