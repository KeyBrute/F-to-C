#include <iostream>
using namespace std;

int main()
{
    int numTools;

    cin >> numTools;

    /* Your code goes here */
    if (numTools < 14)
    {
        cout << "Personal tool box" << endl;
    }
    else if (numTools > 25)
    {
        cout << "Need wall storage" << endl;
    }
    else
    {
        cout << "Full-sized tool box" << endl;
    }
    return 0;
}