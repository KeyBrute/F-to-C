#include <iostream>
using namespace std;

int main()
{
    // Write a for loop to populate array userGuesses with NUM_GUESSES integers.
    // Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2,
    // then userGuesses is {9, 5, 2}.
    const int NUM_GUESSES = 3;
    int userGuesses[NUM_GUESSES];
    int i;

    /* Your solution goes here  */
    // iterates 3 times
    for (i = 0; i < NUM_GUESSES; i++)
    {
        cin >> userGuesses[i];
    }
    // iterates 3 times

    for (i = 0; i < NUM_GUESSES; ++i)
    {
        cout << userGuesses[i] << " ";
    }

    return 0;
}