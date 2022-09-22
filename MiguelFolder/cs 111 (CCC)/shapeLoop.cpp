#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    for (int i = 0; i < num; i++)
    {
        // A
        for (int j = 0; j <= i; j++)
            cout << "+ ";
        // spaces
        for (int k = i; k < 2 * num; k++)
            cout << "  ";
        // B
        for (int h = i; h < num; h++)
            cout << "+ ";

        cout << "\n";
        }
    return 0;
}