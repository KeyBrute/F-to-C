#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Add each element in origList with the corresponding value in offsetAmount.
    // Print each sum followed by a space.
    const int NUM_VALS = 4;
    int origList[NUM_VALS];
    int offsetAmount[NUM_VALS];
    int i;

    cin >> origList[0];
    cin >> origList[1];
    cin >> origList[2];
    cin >> origList[3];

    cin >> offsetAmount[0];
    cin >> offsetAmount[1];
    cin >> offsetAmount[2];
    cin >> offsetAmount[3];

    /* Your code goes here */
    for (i = 0; i < 4; i++)
    {
        cout << origList[i] * offsetAmount[i] << " ";
    }

    cout << endl;

    return 0;
}