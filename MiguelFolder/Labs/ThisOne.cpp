// Lab 6, CS 141, Fall 2022
// Write and run the tests for the individual problems one at a time.
//
#include <iostream>
using namespace std;

// -----------------------------------------------------------------------------------------------------
/*
Write a program using functions to find range of array. Range is the difference between the highest and lowest numbers
in the array.You need to write a function that calculates the range and the returns a range as integer which
should be called in problem1() to recieve full credit.
When input is
1 8
15 23 32 45 21 29 41 37
Output should be:
30

*/

int calculateRange(int scoreVals[], int &numVals)
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
    int smallVal = scoreVals[0];

    for (i = 0; i < numVals; i++)
    {
        if (smallVal > scoreVals[i])
        {
            smallVal = scoreVals[i];
        }
    }
    int x = returnVal - smallVal;

    return x;
}

void problem1()
{

    // Your code here for Problem 1
    // write code here to take input for the elemets in the array and call the calculateRange() function with array as parameter
    // ...
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
    int x;
    cout << endl;
    cout << "Enter array elements: ";

    for (i = 0; i < NUM_SCORES; ++i)
    {
        cin >> quizScores[i];
    }
    // cout << calculateRange(returnVal);

    returnBigScore = calculateRange(quizScores, NUM_SCORES);
    cout << "The range of the array is: " << returnBigScore << endl;

    // calculateRange(); /*Implement this function above problem1() and call it within problem 1 to receive full credit,
    // you should figure out parameters and include them and also check for return types.*/

} // end problem1()

// -----------------------------------------------------------------------------------------------------
/* Write a program using functions to find sum of even numbers in a series. You need to write a function
that takes count of numbers in the series as parameter and calculates the sum of the even numbers in that series.
 that function should be called in problem2() to recieve full credit.
 When input is
2 5
1 2 3 4 5
Output should be:
6*/

void problem2()
{

    // Your code here for Problem 2
    // write code here to read the number of elements that the user would like to enter.
    // calculateSum();/*Implement this function above problem2() and call it within problem 2 to recieve full credit,
    // you should figure out parameters and include them and also check for return types.*/

} // end problem2()

// -----------------------------------------------------------------------------------------------------
/* Write a program using function that takes an array as input parameter. The output should print a new array whose elemets
are obtained by dividing the product of all elements in the original array with each element of the original array.
Implement product() function above problem 3 and call it within problem 3 to recieve full credit.
When input is
3 5
1 2 3 4 5

Output should be:
120 60 40 30 24
*/
void problem3()
{

    // Your code here for Problem 3 (Extra Credit)
    // write your code to read array elements and pass the array as the parameter.
    // product();/*implement this function above problem 3 and call it within problem 3 to recieve full credit,
    // you should figure out parameters and include them and also check for return types.*/
} // end problem3()

int main()
{
    // You should not change the code below this point.
    // All your changes should be inside the individual functions shown above.
    int menuOption = 0;

    cout << "Enter which problem to run: ";
    cin >> menuOption;
    switch (menuOption)
    {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    }

    cout << "Done." << endl;
    return 0;
} // end main()