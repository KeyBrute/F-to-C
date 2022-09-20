#include <iostream>
using namespace std;

int main()
{
    int numInput;
    int result;

    result = 0;
    cin >> numInput;

    /* Your code goes here */
    while (numInput > 0)
    {
        if (numInput % 5 == 0)
        {
            cout << "miss" << endl;
        }
        else
        {
            cout << "hit" << endl;
            result += 1;
        }
        cin >> numInput;
    }
    cout << "Result is " << result << endl;

    return 0;
}