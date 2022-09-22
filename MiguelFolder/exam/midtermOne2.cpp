#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int y = 5;
    int result = 0;
    for (int k = 0; k < y; k++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int i = 0; i < x; i++)
            {
                result++;
            }
        } // end for( int j
    }     // end for( int k
    cout << result;
}