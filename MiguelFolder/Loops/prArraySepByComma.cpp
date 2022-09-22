#include <iostream>
using namespace std;

int main()
{
    // Write a for loop to print all NUM_VALS elements of array hourlyTemp.
    // Separate elements with a comma and space. Ex: If hourlyTemp = {90, 92, 94, 95},
    //  print: 90, 92, 94, 95

    const int NUM_VALS = 4;
    int hourlyTemp[NUM_VALS];
    int i;

    for (i = 0; i < NUM_VALS; ++i)
    {
        cin >> hourlyTemp[i];
    }

    /* Your solution goes here  */
    for (i = 0; i < NUM_VALS; ++i)
    {
        cout << hourlyTemp[i];
        if (i < NUM_VALS - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}