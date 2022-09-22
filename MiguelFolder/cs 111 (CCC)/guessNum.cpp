#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
    int userInput, attempts;
    // srand is needed to set a seed for the rand(), otherwise, the numbers will never randomize
    srand(time(0));
    // It needs to be 0 and 21 because that 0 is a number therefore it counts 0 - 20
    // but excludes 21
    int guess = 0 + (rand() % 21);
    cout << "You Have 5 attempts remaining: "
         << "\n";
    // cout << guess;  This line is used to reveal answer number
    cout << "Enter a Number: ";
    cin >> userInput;

    // For loop: 5 to 1 is readable by humans but 4 to 0 is readable by computers
    for (int attempts = 4; attempts >= 0; attempts--)
    {
        // when the userinput is the guess number, you win
        if (userInput == guess)
        {
            cout << "----------------------------------------- \n";
            cout << "YOU WIN";
            break;
        }
        // lose when you have no more attempts
        else if (attempts == 0)
        {
            cout << "----------------------------------------- \n";
            cout << "GAMEOVER, the answer was: " << guess;
        }
        // when out of the 0-20 range display error
        else if (userInput >= 21 || userInput <= -1)
        {
            cout << "----------------------------------------- \n";

            cout << "OUT OF RANGE PLEASE CHOOSE BETWEEN 0-20 \n";
            cout << "You Have " << attempts << " attempts remaining:\n";
            cout << "Enter a Number: ";

            cin >> userInput;
        }
        // go lower when userinput is higher than guess
        else if (userInput >= guess)
        {
            cout << "----------------------------------------- \n";

            cout << "Go Lower \n";
            cout << "You Have " << attempts << " attempts remaining: "
                 << "\n";
            cout << "Enter a Number: ";
            cin >> userInput;
        }
        // vice versa of line 49
        else if (userInput <= guess)
        {
            cout << "----------------------------------------- \n";

            cout << "Go Higher \n";
            cout << "You Have " << attempts << " attempts remaining: "
                 << "\n";
            cout << "Enter a Number: ";
            cin >> userInput;
        }
    }
    return 0;
}