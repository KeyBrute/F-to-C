#include <iostream>
using namespace std;

int main()
{
    int numBicycles;

    cin >> numBicycles;

    /* Your code goes here */
    if (numBicycles <= 1)
    {
        cout << "Bad input" << endl;
    }
    else if (numBicycles > 1 && numBicycles <= 18)
    {
        cout << "Single bike rack" << endl;
    }
    else if (numBicycles >= 19 && numBicycles < 45)
    {
        cout << "Large bike rack" << endl;
    }
    else if (numBicycles >= 45)
    {
        cout << "Too many bikes" << endl;
    }

    return 0;
}