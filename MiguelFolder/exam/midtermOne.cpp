#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            sum = sum + row;
        }
    }
    cout << sum;
}