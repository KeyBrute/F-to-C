#include <iostream>
using namespace std;

int main()
{
    int totalOunces = 12;
    int numQuarts = 6;
    int numPints = 9;
    int numOunces = 3;

    cin >> totalOunces;

    /* Your code goes here */
    numQuarts = (totalOunces / 32);
    totalOunces = totalOunces % 32;

    numPints = totalOunces / 16;
    totalOunces = totalOunces % 16;

    totalOunces = totalOunces % totalOunces;

    cout << "Quarts: " << numQuarts << endl;
    cout << "Pints: " << numPints << endl;
    cout << "Ounces: " << numOunces << endl;

    return 0;
}