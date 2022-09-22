#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // For any element in keysList with a value greater than 50,
    // print the corresponding value in itemsList, followed by a space.

    // Ex: If keysList = {32, 105, 101, 35} and itemsList = {10, 20, 30, 40}, print:
    // 20 30

    const int SIZE_LIST = 4;
    int keysList[SIZE_LIST];
    int itemsList[SIZE_LIST];
    int i;

    cin >> keysList[0];
    cin >> keysList[1];
    cin >> keysList[2];
    cin >> keysList[3];

    cin >> itemsList[0];
    cin >> itemsList[1];
    cin >> itemsList[2];
    cin >> itemsList[3];

    /* Your code goes here */
    for (i = 0; i < 4; i++)
    {
        if (keysList[i] > 50)
        {
            cout << itemsList[i] << " ";
        }
    }
    cout << endl;

    return 0;
}